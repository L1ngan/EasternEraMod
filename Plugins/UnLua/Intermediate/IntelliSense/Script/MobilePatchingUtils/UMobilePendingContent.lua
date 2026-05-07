---@class UMobilePendingContent : UMobileInstalledContent
local UMobilePendingContent = {}

---Attempt to download and install remote content.
---User can choose to mount installed content into the game.
---@param OnSucceeded Delegate
---@param OnFailed Delegate
function UMobilePendingContent:StartInstall(OnSucceeded, OnFailed) end

---Get the total downloaded size in megabytes. Valid during installation
---@return number
function UMobilePendingContent:GetTotalDownloadedSize() end

---Get the required disk space in megabytes for this content installation
---@return number
function UMobilePendingContent:GetRequiredDiskSpace() end

---Get the current installation progress. Between 0 and 1 for known progress, or less than 0 for unknown progress
---@return number
function UMobilePendingContent:GetInstallProgress() end

---@return string
function UMobilePendingContent:GetDownloadStatusText() end

---Get the current download speed in megabytes per second. Valid during installation
---@return number
function UMobilePendingContent:GetDownloadSpeed() end

---Get the total download size for this content installation
---@return number
function UMobilePendingContent:GetDownloadSize() end

