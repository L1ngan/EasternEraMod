---@class UMobileInstalledContent : UObject
local UMobileInstalledContent = {}

---Mount installed content
---@param PakOrder integer
---@param MountPoint string
---@return boolean
function UMobileInstalledContent:Mount(PakOrder, MountPoint) end

---Get the installed content size in megabytes
---@return number
function UMobileInstalledContent:GetInstalledContentSize() end

---Get the disk free space in megabytes where content is installed
---@return number
function UMobileInstalledContent:GetDiskFreeSpace() end

