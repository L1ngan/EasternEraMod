---@class UDeletedObjectPlaceholder : UObject
---@field private DisplayName string @Original object's display name
---@field private ExternalDataLayerUID integer @Original object's external data layer UID
---@field private OriginalObject TWeakObjectPtr<UObject> @Original object that is replaced by the placeholder
local UDeletedObjectPlaceholder = {}

