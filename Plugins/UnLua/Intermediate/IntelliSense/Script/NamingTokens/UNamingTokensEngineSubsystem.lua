---An editor subsystem for registering global tokens and evaluating strings across the entire project.
---@class UNamingTokensEngineSubsystem : UEngineSubsystem
---@field private CachedNamingTokens TMap<string, UNamingTokens> @Naming tokens currently loaded from assets.
local UNamingTokensEngineSubsystem = {}

---Remove tokens from a global namespace.
---@param InNamespace string
function UNamingTokensEngineSubsystem:UnregisterGlobalNamespace(InNamespace) end

---Register tokens as a global namespace. This prevents the need to include the namespace in a token string.
---@param InNamespace string
function UNamingTokensEngineSubsystem:RegisterGlobalNamespace(InNamespace) end

---Checks if a namespace is registered globally.
---@param InNamespace string
---@return boolean
function UNamingTokensEngineSubsystem:IsGlobalNamespaceRegistered(InNamespace) end

---Lookup naming tokens given a namespace. This will look first in cached naming tokens,
---then native classes. Call ClearCachedNamingTokens to reset the cache
---and force a full lookup.
---@param InNamespace string
---@return UNamingTokens
function UNamingTokensEngineSubsystem:GetNamingTokensNative(InNamespace) end

---Lookup naming tokens given a namespace. This will look first in cached naming tokens,
---then native classes, then blueprint classes. Call ClearCachedNamingTokens to reset the cache
---and force a full lookup.
---@param InNamespace string
---@return UNamingTokens
function UNamingTokensEngineSubsystem:GetNamingTokens(InNamespace) end

---Lookup multiple naming tokens from multiple namespaces.
---@param InNamespaces TArray_string_
---@return TArray_UNamingTokens_
function UNamingTokensEngineSubsystem:GetMultipleNamingTokens(InNamespaces) end

---Retrieve the registered global namespaces.
---@return TArray_string_
function UNamingTokensEngineSubsystem:GetGlobalNamespaces() end

---Retrieve all discovered namespaces.
---@return TArray_string_
function UNamingTokensEngineSubsystem:GetAllNamespaces() end

---Parse and evaluate token text.
---@param InTokenText string
---@param InFilter FNamingTokenFilterArgs
---@param InContexts TArray_UObject_
---@return FNamingTokenResultData
function UNamingTokensEngineSubsystem:EvaluateTokenText(InTokenText, InFilter, InContexts) end

---Parse and evaluate token string.
---@param InTokenString string
---@param InFilter FNamingTokenFilterArgs
---@param InContexts TArray_UObject_
---@return FNamingTokenResultData
function UNamingTokensEngineSubsystem:EvaluateTokenString(InTokenString, InFilter, InContexts) end

---Clears all currently cached naming tokens. They will be loaded on demand when required.
---This can avoid an editor restart if a namespace is adjusted on a BP asset, and you don't want the old namespace to access it.
function UNamingTokensEngineSubsystem:ClearCachedNamingTokens() end

