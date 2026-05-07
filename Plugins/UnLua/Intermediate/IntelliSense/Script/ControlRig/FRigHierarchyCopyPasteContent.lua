---@class FRigHierarchyCopyPasteContent
---@field public Elements TArray<FRigHierarchyCopyPasteContentPerElement>
---@field public Types TArray<ERigElementType> @Maintain properties below for backwards compatibility pre-5.0
---@field public Contents TArray<string>
---@field public LocalTransforms TArray<FTransform>
---@field public GlobalTransforms TArray<FTransform>
local FRigHierarchyCopyPasteContent = {}
