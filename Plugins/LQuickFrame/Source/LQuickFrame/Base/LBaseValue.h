// Copyright 2024 liwei, Inc. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "../Misc/LLog.h"
#include "Engine/DataTable.h"
#include "UObject/Interface.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LBaseValue.generated.h"

//内联数据类型
UENUM(BlueprintType)
enum class ELUniType : uint8
{
	Bool UMETA(DisplayName = "是否"),
	Int UMETA(DisplayName = "整数"),
	Float UMETA(DisplayName = "小数")
};

//内联判断规则
UENUM(BlueprintType)
enum ELUniQuery
{
	IsEqualTo UMETA(DisplayName = "=="),
	IsNotEqualTo UMETA(DisplayName = "!=="),
	IsLessThan UMETA(DisplayName = "<"),
	IsLessThanOrEqualTo UMETA(DisplayName = "<="),
	IsGreaterThan UMETA(DisplayName = ">"),
	IsGreaterThanOrEqualTo UMETA(DisplayName = ">=")
};

//进入游戏类型
UENUM(BlueprintType)
enum class EEnterGameMode :uint8
{
	None,
	//新游戏
	NewGame = 1,
	//加载存档
	LoadSaveGame = 2,
};

//内联数值
USTRUCT(BlueprintType)
struct LQUICKFRAME_API FLUniValue
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	ELUniType ValType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (EditCondition = "ValType == ELUniType::Bool"))
	bool BoolVal;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (EditCondition = "ValType == ELUniType::Int"))
	int32 IntVal;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta = (EditCondition = "ValType == ELUniType::Float"))
	float FloatVal;
public:
	FLUniValue():ValType(ELUniType::Bool),BoolVal(0),IntVal(0),FloatVal(0.f) {}
	explicit FLUniValue(bool vl) :ValType(ELUniType::Bool), BoolVal(vl) {}
	explicit FLUniValue(int32 vl) :ValType(ELUniType::Int), IntVal(vl) {}
	explicit FLUniValue(float vl) :ValType(ELUniType::Float), FloatVal(vl) {}
	LQUICKFRAME_API friend FLUniValue operator-(const FLUniValue& Other);
	FLUniValue operator+(const FLUniValue& Other);
	void operator+=(const FLUniValue& Other);
	bool Compare(const FLUniValue& Other, ELUniQuery Query) const;
};

//数据表基类
USTRUCT()
struct LQUICKFRAME_API FDataBase : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadOnly, SaveGame)
	FName ID;
	//描述
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Comment;
public:
	FORCEINLINE bool operator == (const FName& Other) const{return Other == ID;}
	FORCEINLINE bool operator == (const FDataBase& Other){return Other.ID == ID;}
	bool IsValidData() const
	{
		return !ID.IsNone();
	}
	void Rest()
	{
		ID = NAME_None;
	}
};

UINTERFACE(MinimalAPI,BlueprintType)
class ULBaseInterface : public UInterface
{
	GENERATED_BODY()
};

class LQUICKFRAME_API ILBaseInterface
{
	GENERATED_BODY()
public:
	bool bOnObjectPool = false;
	
	//初始化数据(从对象池中取出时固定调用，其他情况需自行调用)
	virtual void OnInitData(){}
	//新游戏初始化调用 新游戏加载地图后调用 此方法只有在新游戏且是预设在地图中的actor和管理器才会调用 （包括 UWorldManagerSystem::CreateWorldManageActors()创建的actor）
	virtual void OnNewGameInitData(){}
	//清理数据(回收到对象池时调用，其他情况需自行调用)
	virtual void OnClearData(){}
	//存档加载成功后调用 此方法只有在object加载存档时调用
	virtual void OnLoadSlotSucceed(){}
	//所有初始化完成 此方法只有读档重生或者预设在场景中的object才会调用（包括 UWorldManagerSystem::CreateWorldManageActors()创建的actor）
	virtual void OnInitialCallCompletion(){}
	//获取是否在对象池中
	virtual bool IsOnObjectPool()
	{
		return bOnObjectPool;
	}
	virtual void SetOnObjectPool(bool bNewOnObjectPool)
	{
		bOnObjectPool = bNewOnObjectPool;
	}
	//
	virtual FString GetObjectOnLevelName()
	{
		if (UObject* Object = Cast<UObject>(this))
		{
			return Object->GetOutermost()->GetName();
		}
		return "";
	}
};
//基础函数库
UCLASS()
class LQUICKFRAME_API ULBaseLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	static FString DebugFlag; //测试标识
	//设置测试标识
	UFUNCTION(BlueprintCallable, Category = "LBaseLibrary")
	static void SetDebugFlag(const FString& Flag);
	//FLUniValue 比较
	UFUNCTION(BlueprintPure, Category = "LBaseLibrary")
	static bool UniCompare(const FLUniValue& Val1, const FLUniValue& Val2, ELUniQuery Query);
};

//logger
#define LLOG(desc,...) ULLog::Logger(FString::Printf(TEXT(desc),##__VA_ARGS__))
#define LLOGW(desc,...) ULLog::LoggerWarning(FString::Printf(TEXT(desc),##__VA_ARGS__))
#define LLOGE(desc,...) ULLog::LoggerError(FString::Printf(TEXT(desc),##__VA_ARGS__))

//转换
template<class T> static T* TSubClassOfCastTo(T* Object, TSubclassOf<T>ObjClass) {
	//check(Object && (ObjClass.Get() ? Object->IsA(ObjClass.Get()) : true));
	return Object;
}
