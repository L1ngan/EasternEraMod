---* Helper class to be able to read different source data
---* File on disk
---* HTTP URL (TODO)
---* Memory buffer (TODO)
---* Stream (TODO)
---@class UInterchangeSourceData : UObject
---@field private Filename string
---@field private ContextObjectsByTag TMap<string, UObject> @UObjects that are accessible by the translators, pipelines, and the caller of the Interchange import. Use this to transmit additional information that is beneficial to reuse but can't be serialized, such as external SDK memory objects, external assets, or large cached data.
local UInterchangeSourceData = {}

---@param InFilename string
---@return boolean
function UInterchangeSourceData:SetFilename(InFilename) end

---@param Tag string
---@param Object UObject
function UInterchangeSourceData:SetContextObjectByTag(Tag, Object) end

function UInterchangeSourceData:RemoveAllContextObjects() end

---@return string
function UInterchangeSourceData:GetFilename() end

---@param Tag string
---@return UObject
function UInterchangeSourceData:GetContextObjectByTag(Tag) end

---@return TArray_string_
function UInterchangeSourceData:GetAllContextObjectTags() end

