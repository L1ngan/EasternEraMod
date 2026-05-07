---@class UAndroidPermissionFunctionLibrary : UBlueprintFunctionLibrary
local UAndroidPermissionFunctionLibrary = {}

---check if the permission is already granted
---@param permission string
---@return boolean
function UAndroidPermissionFunctionLibrary.CheckPermission(permission) end

---try to acquire permissions and return a singleton callback proxy object containing OnPermissionsGranted delegate
---@param permissions TArray_string_
---@return UAndroidPermissionCallbackProxy
function UAndroidPermissionFunctionLibrary.AcquirePermissions(permissions) end

