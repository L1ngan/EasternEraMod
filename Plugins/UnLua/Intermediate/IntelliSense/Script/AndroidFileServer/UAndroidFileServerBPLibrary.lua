---@class UAndroidFileServerBPLibrary : UBlueprintFunctionLibrary
local UAndroidFileServerBPLibrary = {}

---Request termination of Android FileServer
---@param bUSB boolean @[opt] 
---@param bNetwork boolean @[opt] 
---@return boolean
function UAndroidFileServerBPLibrary.StopFileServer(bUSB, bNetwork) end

---Request startup of Android FileServer
---@param bUSB boolean @[opt] 
---@param bNetwork boolean @[opt] 
---@param Port integer @[opt] 
---@return boolean
function UAndroidFileServerBPLibrary.StartFileServer(bUSB, bNetwork, Port) end

---Check if Android FileServer is running
---@return integer
function UAndroidFileServerBPLibrary.IsFileServerRunning() end

