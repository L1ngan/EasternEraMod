#include "UsmapExporter.h"
#include "Misc/App.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "UObject/UnrealType.h"
#include "UObject/EnumProperty.h"
#include "UObject/TextProperty.h"
#include "UObject/FieldPathProperty.h"
#include "UObject/PropertyOptional.h"
#include "UObject/UObjectIterator.h"

namespace UsmapExport
{
	// usmap 属性类型编号，与 UAssetAPI 的 UsmapPropertyType 一致，顺序不可改
	enum class EUsmapPropertyType : uint8
	{
		ByteProperty = 0,
		BoolProperty,
		IntProperty,
		FloatProperty,
		ObjectProperty,
		NameProperty,
		DelegateProperty,
		DoubleProperty,
		ArrayProperty,
		StructProperty,
		StrProperty,
		TextProperty,
		InterfaceProperty,
		MulticastDelegateProperty,
		WeakObjectProperty,
		LazyObjectProperty,
		AssetObjectProperty,
		SoftObjectProperty,
		UInt64Property,
		UInt32Property,
		UInt16Property,
		Int64Property,
		Int16Property,
		Int8Property,
		MapProperty,
		SetProperty,
		EnumProperty,
		FieldPathProperty,
		OptionalProperty,
		Unknown = 0xFF
	};

	// 小端二进制写入辅助（usmap 为小端格式，x64 直接按内存序写）
	struct FWriter
	{
		TArray<uint8>& Data;
		explicit FWriter(TArray<uint8>& InData) : Data(InData) {}

		void WriteU8(uint8 V) { Data.Add(V); }
		void WriteU16(uint16 V) { Data.Append(reinterpret_cast<const uint8*>(&V), sizeof(V)); }
		void WriteU32(uint32 V) { Data.Append(reinterpret_cast<const uint8*>(&V), sizeof(V)); }
		void WriteI32(int32 V) { Data.Append(reinterpret_cast<const uint8*>(&V), sizeof(V)); }
	};

	// 名字表：首次出现即分配索引，索引在整个文件内全局共享
	struct FNameTable
	{
		TArray<FString> Names;
		TMap<FString, int32> IndexMap;

		int32 GetOrAdd(const FString& InName)
		{
			if (const int32* Found = IndexMap.Find(InName))
			{
				return *Found;
			}
			const int32 Idx = Names.Add(InName);
			IndexMap.Add(InName, Idx);
			return Idx;
		}
	};

	static void WritePropertyType(FWriter& W, FNameTable& NameTable, FProperty* Prop)
	{
		if (FEnumProperty* EnumProp = CastField<FEnumProperty>(Prop))
		{
			W.WriteU8(static_cast<uint8>(EUsmapPropertyType::EnumProperty));
			WritePropertyType(W, NameTable, EnumProp->GetUnderlyingProperty());
			W.WriteI32(EnumProp->GetEnum() ? NameTable.GetOrAdd(EnumProp->GetEnum()->GetName()) : INDEX_NONE);
		}
		else if (FByteProperty* ByteProp = CastField<FByteProperty>(Prop))
		{
			// TEnumAsByte 形式的枚举属性在 usmap 里同样表示为 EnumProperty(内层 ByteProperty)
			if (ByteProp->Enum)
			{
				W.WriteU8(static_cast<uint8>(EUsmapPropertyType::EnumProperty));
				W.WriteU8(static_cast<uint8>(EUsmapPropertyType::ByteProperty));
				W.WriteI32(NameTable.GetOrAdd(ByteProp->Enum->GetName()));
			}
			else
			{
				W.WriteU8(static_cast<uint8>(EUsmapPropertyType::ByteProperty));
			}
		}
		else if (CastField<FBoolProperty>(Prop)) { W.WriteU8(static_cast<uint8>(EUsmapPropertyType::BoolProperty)); }
		else if (CastField<FIntProperty>(Prop)) { W.WriteU8(static_cast<uint8>(EUsmapPropertyType::IntProperty)); }
		else if (CastField<FFloatProperty>(Prop)) { W.WriteU8(static_cast<uint8>(EUsmapPropertyType::FloatProperty)); }
		else if (CastField<FDoubleProperty>(Prop)) { W.WriteU8(static_cast<uint8>(EUsmapPropertyType::DoubleProperty)); }
		else if (CastField<FInt8Property>(Prop)) { W.WriteU8(static_cast<uint8>(EUsmapPropertyType::Int8Property)); }
		else if (CastField<FInt16Property>(Prop)) { W.WriteU8(static_cast<uint8>(EUsmapPropertyType::Int16Property)); }
		else if (CastField<FInt64Property>(Prop)) { W.WriteU8(static_cast<uint8>(EUsmapPropertyType::Int64Property)); }
		else if (CastField<FUInt16Property>(Prop)) { W.WriteU8(static_cast<uint8>(EUsmapPropertyType::UInt16Property)); }
		else if (CastField<FUInt32Property>(Prop)) { W.WriteU8(static_cast<uint8>(EUsmapPropertyType::UInt32Property)); }
		else if (CastField<FUInt64Property>(Prop)) { W.WriteU8(static_cast<uint8>(EUsmapPropertyType::UInt64Property)); }
		else if (FStructProperty* StructProp = CastField<FStructProperty>(Prop))
		{
			W.WriteU8(static_cast<uint8>(EUsmapPropertyType::StructProperty));
			W.WriteI32(StructProp->Struct ? NameTable.GetOrAdd(StructProp->Struct->GetName()) : INDEX_NONE);
		}
		else if (FArrayProperty* ArrayProp = CastField<FArrayProperty>(Prop))
		{
			W.WriteU8(static_cast<uint8>(EUsmapPropertyType::ArrayProperty));
			WritePropertyType(W, NameTable, ArrayProp->Inner);
		}
		else if (FSetProperty* SetProp = CastField<FSetProperty>(Prop))
		{
			W.WriteU8(static_cast<uint8>(EUsmapPropertyType::SetProperty));
			WritePropertyType(W, NameTable, SetProp->ElementProp);
		}
		else if (FMapProperty* MapProp = CastField<FMapProperty>(Prop))
		{
			W.WriteU8(static_cast<uint8>(EUsmapPropertyType::MapProperty));
			WritePropertyType(W, NameTable, MapProp->KeyProp);
			WritePropertyType(W, NameTable, MapProp->ValueProp);
		}
		else if (FOptionalProperty* OptionalProp = CastField<FOptionalProperty>(Prop))
		{
			W.WriteU8(static_cast<uint8>(EUsmapPropertyType::OptionalProperty));
			WritePropertyType(W, NameTable, OptionalProp->GetValueProperty());
		}
		// FSoftClassProperty 派生自 FSoftObjectProperty、FClassProperty 派生自 FObjectProperty，均由基类分支覆盖
		else if (CastField<FSoftObjectProperty>(Prop)) { W.WriteU8(static_cast<uint8>(EUsmapPropertyType::SoftObjectProperty)); }
		else if (CastField<FWeakObjectProperty>(Prop)) { W.WriteU8(static_cast<uint8>(EUsmapPropertyType::WeakObjectProperty)); }
		else if (CastField<FLazyObjectProperty>(Prop)) { W.WriteU8(static_cast<uint8>(EUsmapPropertyType::LazyObjectProperty)); }
		else if (CastField<FObjectProperty>(Prop)) { W.WriteU8(static_cast<uint8>(EUsmapPropertyType::ObjectProperty)); }
		else if (CastField<FInterfaceProperty>(Prop)) { W.WriteU8(static_cast<uint8>(EUsmapPropertyType::InterfaceProperty)); }
		else if (CastField<FNameProperty>(Prop)) { W.WriteU8(static_cast<uint8>(EUsmapPropertyType::NameProperty)); }
		else if (CastField<FStrProperty>(Prop)) { W.WriteU8(static_cast<uint8>(EUsmapPropertyType::StrProperty)); }
		else if (CastField<FTextProperty>(Prop)) { W.WriteU8(static_cast<uint8>(EUsmapPropertyType::TextProperty)); }
		else if (CastField<FDelegateProperty>(Prop)) { W.WriteU8(static_cast<uint8>(EUsmapPropertyType::DelegateProperty)); }
		else if (CastField<FMulticastDelegateProperty>(Prop)) { W.WriteU8(static_cast<uint8>(EUsmapPropertyType::MulticastDelegateProperty)); }
		else if (CastField<FFieldPathProperty>(Prop)) { W.WriteU8(static_cast<uint8>(EUsmapPropertyType::FieldPathProperty)); }
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("UsmapExporter: 未识别的属性类型 %s (%s)，写为 Unknown"), *Prop->GetClass()->GetName(), *Prop->GetPathName());
			W.WriteU8(static_cast<uint8>(EUsmapPropertyType::Unknown));
		}
	}

	static void WriteStructSchema(FWriter& W, FNameTable& NameTable, UStruct* Struct)
	{
		W.WriteI32(NameTable.GetOrAdd(Struct->GetName()));

		UStruct* Super = Struct->GetSuperStruct();
		W.WriteI32(Super ? NameTable.GetOrAdd(Super->GetName()) : INDEX_NONE);

		// 只收集本结构自身（不含父类）的运行时属性；
		// CPF_EditorOnly 属性在打包后的游戏里被编译剔除，必须跳过才能与 cooked 资产的无版本化布局一致
		TArray<FProperty*> Props;
		uint32 TotalPropSlots = 0;
		for (TFieldIterator<FProperty> It(Struct, EFieldIteratorFlags::ExcludeSuper); It; ++It)
		{
			if (It->HasAnyPropertyFlags(CPF_EditorOnly))
			{
				continue;
			}
			Props.Add(*It);
			TotalPropSlots += It->ArrayDim;
		}

		if (TotalPropSlots > MAX_uint16)
		{
			UE_LOG(LogTemp, Error, TEXT("UsmapExporter: %s 属性槽位数 %u 超出 uint16 上限，schema 将不完整"), *Struct->GetName(), TotalPropSlots);
			TotalPropSlots = MAX_uint16;
		}

		W.WriteU16(static_cast<uint16>(TotalPropSlots));
		W.WriteU16(static_cast<uint16>(Props.Num()));

		uint16 SchemaIdx = 0;
		for (FProperty* Prop : Props)
		{
			W.WriteU16(SchemaIdx);
			W.WriteU8(static_cast<uint8>(Prop->ArrayDim));
			W.WriteI32(NameTable.GetOrAdd(Prop->GetName()));
			WritePropertyType(W, NameTable, Prop);
			SchemaIdx += Prop->ArrayDim;
		}
	}

	// 编辑器里存在大量重编译/热重载产生的垃圾类副本，cooked 游戏中不存在，须剔除
	static bool IsGeneratedTrashName(const FString& InName)
	{
		return InName.StartsWith(TEXT("SKEL_"))
			|| InName.StartsWith(TEXT("REINST_"))
			|| InName.StartsWith(TEXT("TRASHCLASS_"))
			|| InName.StartsWith(TEXT("HOTRELOADED_"))
			|| InName.StartsWith(TEXT("PLACEHOLDER-CLASS"))
			|| InName.StartsWith(TEXT("LIVECODING_"));
	}
}

bool FUsmapExporter::Export(const FString& InOutputPath, FString& OutResultMessage)
{
	using namespace UsmapExport;

	FNameTable NameTable;

	// ---------- 枚举块 + 结构块先序列化到 Tail，同时填充名字表 ----------
	TArray<uint8> TailData;
	FWriter Tail(TailData);

	// 枚举
	TArray<UEnum*> Enums;
	{
		TSet<FString> SeenEnumNames;
		for (TObjectIterator<UEnum> It; It; ++It)
		{
			const FString EnumName = It->GetName();
			if (IsGeneratedTrashName(EnumName) || SeenEnumNames.Contains(EnumName))
			{
				continue;
			}
			SeenEnumNames.Add(EnumName);
			Enums.Add(*It);
		}
	}

	Tail.WriteI32(Enums.Num());
	for (UEnum* Enum : Enums)
	{
		Tail.WriteI32(NameTable.GetOrAdd(Enum->GetName()));

		int32 EntryCount = Enum->NumEnums();
		if (EntryCount > MAX_uint16)
		{
			UE_LOG(LogTemp, Error, TEXT("UsmapExporter: 枚举 %s 有 %d 个条目，超出 v3 上限 65535，已截断"), *Enum->GetName(), EntryCount);
			EntryCount = MAX_uint16;
		}
		// v3(LargeEnums) 条目数为 uint16（引擎 EInterchangePropertyTracks 等枚举超过 255 条，v0 的 uint8 装不下）
		Tail.WriteU16(static_cast<uint16>(EntryCount));
		for (int32 i = 0; i < EntryCount; ++i)
		{
			// GetNameStringByIndex 返回去掉 "EnumName::" 前缀的短名，与注入式 dumper 的输出一致
			Tail.WriteI32(NameTable.GetOrAdd(Enum->GetNameStringByIndex(i)));
		}
	}

	// 结构体 + 类（共用 schema 命名空间，按名字去重）
	TArray<UStruct*> Structs;
	{
		TSet<FString> SeenSchemaNames;
		auto TryAddStruct = [&SeenSchemaNames, &Structs](UStruct* InStruct)
		{
			const FString StructName = InStruct->GetName();
			if (IsGeneratedTrashName(StructName) || SeenSchemaNames.Contains(StructName))
			{
				return;
			}
			SeenSchemaNames.Add(StructName);
			Structs.Add(InStruct);
		};

		for (TObjectIterator<UScriptStruct> It; It; ++It)
		{
			TryAddStruct(*It);
		}
		for (TObjectIterator<UClass> It; It; ++It)
		{
			if (It->HasAnyClassFlags(CLASS_NewerVersionExists))
			{
				continue;
			}
			TryAddStruct(*It);
		}
	}

	Tail.WriteI32(Structs.Num());
	for (UStruct* Struct : Structs)
	{
		WriteStructSchema(Tail, NameTable, Struct);
	}

	// ---------- 名字表块（必须位于 body 最前） ----------
	TArray<uint8> BodyData;
	FWriter Body(BodyData);

	Body.WriteI32(NameTable.Names.Num());
	for (const FString& Name : NameTable.Names)
	{
		FTCHARToUTF8 Utf8(*Name);
		int32 Len = Utf8.Length();
		if (Len > MAX_uint16)
		{
			UE_LOG(LogTemp, Error, TEXT("UsmapExporter: 名字超长已截断: %s"), *Name);
			Len = MAX_uint16;
		}
		// v2+(LongFName) 名字长度为 uint16
		Body.WriteU16(static_cast<uint16>(Len));
		Body.Data.Append(reinterpret_cast<const uint8*>(Utf8.Get()), Len);
	}
	BodyData.Append(TailData);

	// ---------- 文件头（usmap v3 LargeEnums，无压缩） ----------
	TArray<uint8> FileData;
	FWriter File(FileData);
	File.WriteU16(0x30C4);                                  // magic
	File.WriteU8(3);                                        // version: v3 (LargeEnums，含 LongFName)
	File.WriteI32(0);                                       // v1+ 版本化信息块标志：0 = 不携带包版本信息
	File.WriteU8(0);                                        // compression: None
	File.WriteU32(static_cast<uint32>(BodyData.Num()));     // compressed size
	File.WriteU32(static_cast<uint32>(BodyData.Num()));     // decompressed size
	FileData.Append(BodyData);

	FString OutputPath = InOutputPath;
	if (OutputPath.IsEmpty())
	{
		OutputPath = FPaths::ProjectSavedDir() / TEXT("Mappings") / FString::Printf(TEXT("%s.usmap"), FApp::GetProjectName());
	}
	OutputPath = FPaths::ConvertRelativePathToFull(OutputPath);

	if (!FFileHelper::SaveArrayToFile(FileData, *OutputPath))
	{
		OutResultMessage = FString::Printf(TEXT("usmap 写入失败: %s"), *OutputPath);
		UE_LOG(LogTemp, Error, TEXT("UsmapExporter: %s"), *OutResultMessage);
		return false;
	}

	OutResultMessage = FString::Printf(TEXT("usmap 导出成功: %s (枚举 %d, 结构/类 %d, 名字 %d, %.1f KB)"),
		*OutputPath, Enums.Num(), Structs.Num(), NameTable.Names.Num(), FileData.Num() / 1024.0f);
	UE_LOG(LogTemp, Log, TEXT("UsmapExporter: %s"), *OutResultMessage);
	return true;
}
