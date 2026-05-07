---@class ULevelEditorContextMenuContext : UObject
---@field public ContextType ELevelEditorMenuContext
---@field public CurrentSelection UTypedElementSelectionSet
---@field public CursorWorldLocation FVector
---@field public SelectedComponents TArray<UActorComponent>
---@field public HitProxyActor TWeakObjectPtr<AActor> @If the ContextType is Viewport this property can be set to the HitProxy actor that triggered the ContextMenu.
local ULevelEditorContextMenuContext = {}

---@return FScriptTypedElementHandle
function ULevelEditorContextMenuContext:GetScriptHitProxyElement() end

