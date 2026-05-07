---@class UFabBrowserApi : UObject
local UFabBrowserApi = {}

---@param PreferredQuality string
function UFabBrowserApi:SetPreferredQualityTier(PreferredQuality) end

function UFabBrowserApi:PluginOpened() end

---@param Url string
function UFabBrowserApi:OpenUrlInBrowser(Url) end

function UFabBrowserApi:OpenPluginSettings() end

---@param DownloadUrl string
---@param AssetMetadata FFabAssetMetadata
function UFabBrowserApi:OnDragInfoSuccess(DownloadUrl, AssetMetadata) end

---@param AssetId string
function UFabBrowserApi:OnDragInfoFailure(AssetId) end

function UFabBrowserApi:Logout() end

function UFabBrowserApi:Login() end

---@return string
function UFabBrowserApi:GetUrl() end

---@return FFabFrontendSettings
function UFabBrowserApi:GetSettings() end

---@return string
function UFabBrowserApi:GetRefreshToken() end

---@return string
function UFabBrowserApi:GetAuthToken() end

---@return FFabApiVersion
function UFabBrowserApi.GetApiVersion() end

---@param AssetMetadata FFabAssetMetadata
function UFabBrowserApi:DragStart(AssetMetadata) end

---@param Content string
function UFabBrowserApi:CopyToClipboard(Content) end

---@param DownloadUrl string
---@param AssetMetadata FFabAssetMetadata
function UFabBrowserApi:AddToProject(DownloadUrl, AssetMetadata) end

