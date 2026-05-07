---Pools UUserWidget instances to minimize UObject and SWidget allocations for UMG elements with dynamic entries.
---Note that if underlying Slate instances are released when a UserWidget instance becomes inactive, NativeConstruct & NativeDestruct will be called when UUserWidget
---instances are made active or inactive, respectively, provided the widget isn't actively referenced in the Slate hierarchy (i.e. if the shared reference count on the widget goes from/to 0).
---WARNING: Be sure to release the pool's Slate widgets within the owning widget's ReleaseSlateResources call to prevent leaking due to circular references
---            Otherwise the cached references to SObjectWidgets will keep the UUserWidgets - and all that they reference - alive
---@class FUserWidgetPool
---@field private ActiveWidgets TArray<UUserWidget>
---@field private InactiveWidgets TArray<UUserWidget>
local FUserWidgetPool = {}
