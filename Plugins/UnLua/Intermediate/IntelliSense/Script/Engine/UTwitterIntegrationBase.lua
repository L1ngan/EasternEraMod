---@class UTwitterIntegrationBase : UPlatformInterfaceBase
local UTwitterIntegrationBase = {}

---Kicks off a generic twitter request
---@param URL string
---@param ParamKeysAndValues TArray_string_
---@param RequestMethod integer
---@param AccountIndex integer
---@return boolean
function UTwitterIntegrationBase:TwitterRequest(URL, ParamKeysAndValues, RequestMethod, AccountIndex) end

---Kicks off a tweet, using the platform to show the UI. If this returns false, or you are on a platform that doesn't support the UI,
---you can use the TwitterRequest method to perform a manual tweet using the Twitter API
---@param InitialMessage string
---@param URL string
---@param Picture string
---@return boolean
function UTwitterIntegrationBase:ShowTweetUI(InitialMessage, URL, Picture) end

---Perform any needed initialization
function UTwitterIntegrationBase:Init() end

---
---@return integer
function UTwitterIntegrationBase:GetNumAccounts() end

---
---@param AccountIndex integer
---@return string
function UTwitterIntegrationBase:GetAccountName(AccountIndex) end

---
---@return boolean
function UTwitterIntegrationBase:CanShowTweetUI() end

---Starts the process of authorizing the local user(s). When TID_AuthorizeComplete is called, then GetNumAccounts()
---will return a valid number of accounts
---@return boolean
function UTwitterIntegrationBase:AuthorizeAccounts() end

