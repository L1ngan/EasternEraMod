---An object used internally by the New Plugin Wizard to set user-defined plugin descriptor information.
---This should not be used outside of the New Plugin Wizard dialog
---@class UNewPluginDescriptorData : UObject
---@field public CreatedBy string @The author of this content
---@field public CreatedByURL string @Optional hyperlink for the author's website
---@field public Description string @A description for this content
---@field public bIsBetaVersion boolean @Marks this content as being in beta
local UNewPluginDescriptorData = {}

