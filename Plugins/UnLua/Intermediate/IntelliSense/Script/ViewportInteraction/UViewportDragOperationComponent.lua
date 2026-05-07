---Container component for UViewportDragOperation that can be used by objects in the world that are draggable and implement the ViewportInteractableInterface
---@class UViewportDragOperationComponent : UActorComponent
---@field private DragOperation UViewportDragOperation @The actual dragging implementation
---@field private DragOperationSubclass TSubclassOf<UViewportDragOperation> @The next class that will be used as drag operation
local UViewportDragOperationComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UViewportDragOperationComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UViewportDragOperationComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UViewportDragOperationComponent:AddAssetUserDataOfClass(InUserDataClass) end

