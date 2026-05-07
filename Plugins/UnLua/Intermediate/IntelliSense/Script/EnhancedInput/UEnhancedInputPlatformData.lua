---A base class that can be used to store platform specific data for Enhanced Input.
---Make a subclass of this to add some additional options for per-platform settings
---@class UEnhancedInputPlatformData : UObject
---@field protected MappingContextRedirects TMap<UInputMappingContext, UInputMappingContext> @Maps one Input Mapping Context to another. This can be used to replace specific Input Mapping Contexts with another on a per-platform basis.
local UEnhancedInputPlatformData = {}

---Returns a pointer to the desired redirect mapping context. If there isn't one, then this returns InContext.
---@param InContext UInputMappingContext
---@return UInputMappingContext
function UEnhancedInputPlatformData:GetContextRedirect(InContext) end

