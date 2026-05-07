---CanvasRenderTarget2D is 2D render target which exposes a Canvas interface to allow you to draw elements onto
---it directly.  Use CreateCanvasRenderTarget2D() to create a render target texture by unique name, then
---bind a function to the OnCanvasRenderTargetUpdate delegate which will be called when the render target is
---updated.  If you need to repaint your canvas every single frame, simply call UpdateResource() on it from a Tick
---function.  Also, remember to hold onto your new canvas render target with a reference so that it doesn't get
---garbage collected.
---@class UCanvasRenderTarget2D : UTextureRenderTarget2D
---@field public OnCanvasRenderTargetUpdate MulticastDelegate @Called when this Canvas Render Target is asked to update its texture resource.
---@field protected World TWeakObjectPtr<UWorld> @The world this render target will be used with
---@field protected SampleCount ETextureRenderTargetSampleCount @MSAA sample count.
---@field protected bShouldClearRenderTargetOnReceiveUpdate boolean @If true, clear the render target to green whenever OnReceiveUpdate() is called.  (Defaults to true.) If false, the render target will retain whatever values it had, allowing the user to update only areas that have changed.
local UCanvasRenderTarget2D = {}

---Updates the the canvas render target texture's resource. This is where the render target will create or
---find a canvas object to use.  It also calls UpdateResourceImmediate() to clear the render target texture
---from the deferred rendering list, to stop the texture from being cleared the next frame. From there it
---will ask the rendering thread to set up the RHI viewport. The canvas is then set up for rendering and
---then the user's update delegate is called.  The canvas is then flushed and the RHI resolves the
---texture to make it available for rendering.
function UCanvasRenderTarget2D:UpdateResource() end

---@param InSampleCount ETextureRenderTargetSampleCount
function UCanvasRenderTarget2D:SetSampleCount(InSampleCount) end

---Allows a Blueprint to implement how this Canvas Render Target 2D should be updated.
---@param Canvas UCanvas
---@param Width integer
---@param Height integer
function UCanvasRenderTarget2D:ReceiveUpdate(Canvas, Width, Height) end

---Gets a specific render target's size from the global map of canvas render targets.
---@param Width integer @[out] 
---@param Height integer @[out] 
function UCanvasRenderTarget2D:GetSize(Width, Height) end

---@return ETextureRenderTargetSampleCount
function UCanvasRenderTarget2D:GetSampleCount() end

---Creates a new canvas render target and initializes it to the specified dimensions
---@param WorldContextObject UObject
---@param CanvasRenderTarget2DClass TSubclassOf_UCanvasRenderTarget2D_
---@param Width integer @[opt] 
---@param Height integer @[opt] 
---@return UCanvasRenderTarget2D
function UCanvasRenderTarget2D.CreateCanvasRenderTarget2D(WorldContextObject, CanvasRenderTarget2DClass, Width, Height) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCanvasRenderTarget2D:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UCanvasRenderTarget2D:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCanvasRenderTarget2D:AddAssetUserDataOfClass(InUserDataClass) end

