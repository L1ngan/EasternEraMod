---A container for all accessible properties for a UWidget that will be passed to the underlying SWidget.
---Any property here must also be added to UWidget.h and synchronized. See UWidget for more information.
---@class USlateAccessibleWidgetData : UObject
---@field public bCanChildrenBeAccessible boolean
---@field public AccessibleBehavior ESlateAccessibleBehavior
---@field public AccessibleSummaryBehavior ESlateAccessibleBehavior
---@field public AccessibleText string
---@field public AccessibleTextDelegate Delegate
---@field public AccessibleSummaryText string
---@field public AccessibleSummaryTextDelegate Delegate
local USlateAccessibleWidgetData = {}

---@return string
function USlateAccessibleWidgetData:GetText__DelegateSignature() end

