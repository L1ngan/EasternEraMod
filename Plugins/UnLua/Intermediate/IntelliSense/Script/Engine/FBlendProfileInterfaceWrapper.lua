---Helper class for storing either USkeleton blend profiles and custom blend profile implementations.
---Has a custom details panel for switching between blend profile providers.
---@class FBlendProfileInterfaceWrapper
---@field private bIsSkeletonBlendProfile boolean
---@field private BlendProfileProvider TScriptInterface<UBlendProfileProviderInterface> @The object responsible for constructing the blend profile
---@field private BlendProfile UBlendProfile @The actual blend profile to use
local FBlendProfileInterfaceWrapper = {}
