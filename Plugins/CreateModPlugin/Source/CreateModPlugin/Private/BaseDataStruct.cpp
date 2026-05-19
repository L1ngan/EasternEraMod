// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseDataStruct.h"
#include "Engine/DataTable.h"
#include "UObject/ObjectSaveContext.h"

#if WITH_EDITOR
#include "ModConfigExporter.h"
#endif

#if WITH_EDITOR
void UModInformationAsset::PreSave(FObjectPreSaveContext SaveContext)
{
	Super::PreSave(SaveContext);
	
	// 遍历所有DataTable配置，在保存前更新StructName
	for (FModConfig& ModConfig : DataTables)
	{
		// 尝试加载DataTable以获取RowStruct名称
		if (!ModConfig.DataTable.IsNull())
		{
			FSoftObjectPath SoftPath = ModConfig.DataTable.ToSoftObjectPath();
			if (SoftPath.IsValid())
			{
				// 尝试解析已加载的对象
				UObject* ResolvedObject = SoftPath.ResolveObject();
				if (!ResolvedObject)
				{
					// 如果对象未加载，尝试加载（仅在编辑器中）
					ResolvedObject = SoftPath.TryLoad();
				}
				if (ResolvedObject)
				{
					UDataTable* DataTable = Cast<UDataTable>(ResolvedObject);
					if (DataTable)
					{
						const UScriptStruct* RowStruct = DataTable->GetRowStruct();
						if (RowStruct)
						{
							// 保存RowStruct的完整路径名称
							// 格式：/Script/ModuleName.StructName 或 StructName
							FString StructPath = RowStruct->GetPathName();
							ModConfig.StructName = StructPath;
						}
					}
				}
			}
		}
	}

	// 保存时同步导出 Mod/Config/*.json（与打包导出路径一致，Cook 保存时跳过）
	if (!SaveContext.IsCooking())
	{
		const FString ModFolder = FModConfigExporter::GetModContentFolderFromAsset(this);
		if (!ModFolder.IsEmpty())
		{
			FModConfigExportResult ExportResult;
			FModConfigExporter::ExportFromModInformationAsset(this, ModFolder, ExportResult, true);
			UE_LOG(LogTemp, Log, TEXT("DA_ModDataAsset: exported JSON to %s, synced ModInfo.json (%d table, %d asset entries)"),
				*ExportResult.ConfigDirectoryAbs, ExportResult.DataTableConfigs.Num(), ExportResult.DataAssetConfigs.Num());
		}
	}
}
#endif

