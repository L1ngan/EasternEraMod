---Stores online account login credentials (for editor config data).
---@class FOnlineAccountStoredCredentials
---@field public Id string @Id of the user logging in (email, display name, facebook id, etc)
---@field public Token string @Credentials of the user logging in (password or auth token)
---@field public Type string @Type of account. Needed to identity the auth method to use (epic, internal, facebook, etc)
---@field public TokenBytes TArray<integer> @Token stored as an array of bytes, encrypted
local FOnlineAccountStoredCredentials = {}
