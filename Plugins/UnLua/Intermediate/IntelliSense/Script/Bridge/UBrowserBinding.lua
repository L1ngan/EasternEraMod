---@class UBrowserBinding : UObject
local UBrowserBinding = {}

function UBrowserBinding:StartNodeProcess() end

---@param LoginUrl string
---@param ResponseCodeUrl string
function UBrowserBinding:ShowLoginDialog(LoginUrl, ResponseCodeUrl) end

---@param Type string
---@param Url string
function UBrowserBinding:ShowDialog(Type, Url) end

---@param Value string
function UBrowserBinding:SendSuccess(Value) end

---@param Message string
function UBrowserBinding:SendFailure(Message) end

---@param Value string
function UBrowserBinding:SaveAuthToken(Value) end

function UBrowserBinding:RestartNodeProcess() end

function UBrowserBinding:OpenMegascansPluginSettings() end

---@param Url string
function UBrowserBinding:OpenExternalUrl(Url) end

---@param OnExitJSCallback FWebJSFunction
function UBrowserBinding:OnExitCallback(OnExitJSCallback) end

---@param OnDroppedJSCallback FWebJSFunction
function UBrowserBinding:OnDroppedCallback(OnDroppedJSCallback) end

---@param OnDropDiscardedJSCallback FWebJSFunction
function UBrowserBinding:OnDropDiscardedCallback(OnDropDiscardedJSCallback) end

---@param OnBulkExportMetahumansJSCallback FWebJSFunction
function UBrowserBinding:OnBulkExportMetahumansCallback(OnBulkExportMetahumansJSCallback) end

function UBrowserBinding:Logout() end

---@return string
function UBrowserBinding:GetProjectPath() end

---@return string
function UBrowserBinding:GetAuthToken() end

---@param Data string
function UBrowserBinding:ExportDataToMSPlugin(Data) end

---@param ImageUrl TArray_string_
---@param IDs TArray_string_
---@param Types TArray_string_
function UBrowserBinding:DragStarted(ImageUrl, IDs, Types) end

---@param DialogJSCallback FWebJSFunction
function UBrowserBinding:DialogSuccessCallback(DialogJSCallback) end

---@param DialogJSCallback FWebJSFunction
function UBrowserBinding:DialogFailCallback(DialogJSCallback) end

