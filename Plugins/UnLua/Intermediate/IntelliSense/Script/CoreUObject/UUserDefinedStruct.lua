---@class UUserDefinedStruct : UScriptStruct
---@field public PrimaryStruct TWeakObjectPtr<UUserDefinedStruct> @The original struct, when current struct isn't a temporary duplicate, the field should be null
---@field public ErrorMessage string
---@field public EditorData UObject
---@field public Status integer @Status of this struct, outside of the editor it is assumed to always be UpToDate
---@field public Guid FGuid @Uniquely identifies this specific user struct
---@field private CachedCookedMetaDataPtr UStructCookedMetaData
local UUserDefinedStruct = {}

