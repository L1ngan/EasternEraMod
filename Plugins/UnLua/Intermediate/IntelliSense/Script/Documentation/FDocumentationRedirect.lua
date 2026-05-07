---Engine level documentation link redirect
---@class FDocumentationRedirect
---@field public From string @From Key               This key will be checked to see if it's an UnrealEd URL config key or treated as a raw documentation link as a fallback.               See examples of UnrealEd URL config keys in the UnrealEd.URLs section of the BaseEditor.ini config file.
---@field public ToUrl FDocumentationUrl @To Url
local FDocumentationRedirect = {}
