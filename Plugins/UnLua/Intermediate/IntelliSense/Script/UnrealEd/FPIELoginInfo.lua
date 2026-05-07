---Data structure for storing PIE login credentials
---@class FPIELoginInfo
---@field public Type string @Type of account. Needed to identity the auth method to use (epic, internal, facebook, etc)
---@field public Id string @Id of the user logging in (email, display name, facebook id, etc)
---@field public Token string @Credentials of the user logging in (password or auth token)
local FPIELoginInfo = {}
