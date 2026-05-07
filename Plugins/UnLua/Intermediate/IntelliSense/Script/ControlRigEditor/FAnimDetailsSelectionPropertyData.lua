---Struct to describe a single property in an anim details proxy
---@class FAnimDetailsSelectionPropertyData
---@field private WeakProxies TArray<TWeakObjectPtr<UAnimDetailsProxyBase>> @The currently selected proxies that own the property. Maybe be multiple if proxies are multi edited on a details row
---@field private bIsSelected boolean @If true, the property is selected
---@field private PropertyName string @The property name for this data
local FAnimDetailsSelectionPropertyData = {}
