---Cooked data for a Blueprint component template.
---@class FBlueprintCookedComponentInstancingData
---@field public ChangedPropertyList TArray<FBlueprintComponentChangedPropertyInfo> @List of property info records with values that differ between the template and the component class CDO. This list will be generated at cook time.
---@field public bHasValidCookedData boolean @Flag indicating whether or not this contains valid cooked data. Note that an empty changed property list can also be a valid template data context.
local FBlueprintCookedComponentInstancingData = {}
