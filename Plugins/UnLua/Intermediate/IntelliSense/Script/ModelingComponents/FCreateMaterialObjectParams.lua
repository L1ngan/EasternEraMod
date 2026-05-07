---FCreateMaterialObjectParams is a collection of input data intended to be passed to
---UModelingObjectsCreationAPI::CreateMaterialObject().
---@class FCreateMaterialObjectParams
---@field public TargetWorld UWorld @The World/Level the new Material object should be created in (if known). Note that Material generally do not exist as objects in a Level. However, it may be necessary to store the texture in a path relative to the level (for example if the level is in a Plugin, this would be necessary in-Editor)
---@field public StoreRelativeToObject UObject @An object to store the Material relative to.
---@field public BaseName string @The base name of the new Material object
---@field public MaterialToDuplicate UMaterialInterface @The parent UMaterial of this material will be duplicated to create the new UMaterial Asset.
local FCreateMaterialObjectParams = {}
