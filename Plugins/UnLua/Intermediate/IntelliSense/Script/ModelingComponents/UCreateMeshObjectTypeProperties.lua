---UCreateMeshObjectTypeProperties is a InteractiveTool PropertySet used to select
---what type of object to create, in creation tools (ie StaticMesh, Volume, etc).
---@class UCreateMeshObjectTypeProperties : UInteractiveToolPropertySet
---@field public OutputType string @Type of object to create
---@field public VolumeType TSubclassOf<AVolume> @Type of volume to create
---@field public OutputTypeNamesList TArray<string> @The list returned by GetOutputTypeNamesFunc()
---@field public bShowVolumeList boolean @control whether the VolumeType field is enabled
local UCreateMeshObjectTypeProperties = {}

---
---@return boolean
function UCreateMeshObjectTypeProperties:ShouldShowPropertySet() end

---This function returns a list that is shown to select OutputType
---@return TArray_string_
function UCreateMeshObjectTypeProperties:GetOutputTypeNamesFunc() end

---Convert current OutputType selection into a type that can be passed to UModelingObjectsCreationAPI
---@return ECreateObjectTypeHint
function UCreateMeshObjectTypeProperties:GetCurrentCreateMeshType() end

