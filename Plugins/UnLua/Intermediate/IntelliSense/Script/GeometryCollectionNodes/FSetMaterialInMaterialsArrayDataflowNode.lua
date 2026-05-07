---Set a Material in a Materials array
---Deprecated (5.6) - Use SetIntoMaterialArray instead
---@class FSetMaterialInMaterialsArrayDataflowNode : FDataflowNode
---@field public Materials TArray<UMaterial> @Materials array storing the materials
---@field public Material UMaterial @Material to add/insert to/in Materials array
---@field public Operation ESetMaterialOperationTypeEnum @Operation type for setting the material, add will add the new material to the end off Materials array, insert will insert the       new material into Materials array at the index specified by MaterialIdx
---@field public MaterialIdx integer @Index for inserting a nem material into the Materials array
local FSetMaterialInMaterialsArrayDataflowNode = {}
