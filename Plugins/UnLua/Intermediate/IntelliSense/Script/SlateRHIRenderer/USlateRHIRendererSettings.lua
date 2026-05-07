---Settings used to control slate rendering
---@class USlateRHIRendererSettings : UDeveloperSettings
---@field private SlatePostSettings TMap<ESlatePostRT, FSlatePostSettings> @Map of all slate post RT's and their settings Note that each post RT used in a frame will result in 1 full framebuffer copy for slate to sample from. If a post RT is not used, no copy will occur & that post RT will be resized to 1x1 after 2 frames of non-use. By default only SlatePostRT_0 is enabled. The rest must manually be enabled in settings below.         // Map is nice since needs no editor customization. After initial run there should be no more than 5 lookups each frame.
local USlateRHIRendererSettings = {}

---Get settings struct for a particular post buffer index
---@param InPostBufferBit ESlatePostRT
---@return FSlatePostSettings
function USlateRHIRendererSettings:GetSlatePostSetting(InPostBufferBit) end

---Get settings struct for a particular post buffer index
---@param InPostBufferBit ESlatePostRT
---@return FSlatePostSettings
function USlateRHIRendererSettings:GetMutableSlatePostSetting(InPostBufferBit) end

