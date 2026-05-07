---Stores user settings for a game (for example graphics and sound settings), with the ability to save and load to and from a file.
---@class UGameUserSettings : UObject
---@field public bUseVSync boolean @Whether to use VSync or not. (public to allow UI to connect to it)
---@field public bUseDynamicResolution boolean @Whether to use dynamic resolution or not. (public to allow UI to connect to it)
---@field protected ResolutionSizeX integer @Game screen resolution width, in pixels.
---@field protected ResolutionSizeY integer @Game screen resolution height, in pixels.
---@field protected LastUserConfirmedResolutionSizeX integer @Game screen resolution width, in pixels.
---@field protected LastUserConfirmedResolutionSizeY integer @Game screen resolution height, in pixels.
---@field protected WindowPositions TArray<FIntPoint> @Saved window positions. Multiple instances running simultaneously can use different ones.
---@field protected FullscreenMode integer @Game window fullscreen mode      0 = Fullscreen      1 = Windowed fullscreen      2 = Windowed
---@field protected LastConfirmedFullscreenMode integer @Last user confirmed fullscreen mode setting.
---@field protected PreferredFullscreenMode integer @Fullscreen mode to use when toggling between windowed and fullscreen. Same values as r.FullScreenMode.
---@field protected Version integer @All settings will be wiped and set to default if the serialized version differs from UE_GAMEUSERSETTINGS_VERSION.
---@field protected AudioQualityLevel integer
---@field protected LastConfirmedAudioQualityLevel integer
---@field protected FrameRateLimit number @Frame rate cap
---@field protected DesiredScreenWidth integer @Desired screen width used to calculate the resolution scale when user changes display mode
---@field protected bUseDesiredScreenHeight boolean @If true, the desired screen height will be used to scale the render resolution automatically.
---@field protected DesiredScreenHeight integer @Desired screen height used to calculate the resolution scale when user changes display mode
---@field protected LastUserConfirmedDesiredScreenWidth integer @Desired screen width used to calculate the resolution scale when user changes display mode
---@field protected LastUserConfirmedDesiredScreenHeight integer @Desired screen height used to calculate the resolution scale when user changes display mode
---@field protected LastRecommendedScreenWidth number @Result of the last benchmark; calculated resolution to use.
---@field protected LastRecommendedScreenHeight number @Result of the last benchmark; calculated resolution to use.
---@field protected LastCPUBenchmarkResult number @Result of the last benchmark (CPU); -1 if there has not been a benchmark run
---@field protected LastGPUBenchmarkResult number @Result of the last benchmark (GPU); -1 if there has not been a benchmark run
---@field protected LastCPUBenchmarkSteps TArray<number> @Result of each individual sub-section of the last CPU benchmark; empty if there has not been a benchmark run
---@field protected LastGPUBenchmarkSteps TArray<number> @Result of each individual sub-section of the last GPU benchmark; empty if there has not been a benchmark run
---@field protected LastGPUBenchmarkMultiplier number @Multiplier used against the last GPU benchmark
---@field protected bUseHDRDisplayOutput boolean @HDR
---@field protected HDRDisplayOutputNits integer @HDR
---@field private OnGameUserSettingsUINeedsUpdate MulticastDelegate
local UGameUserSettings = {}

---Validates and resets bad user settings to default. Deletes stale user settings file if necessary.
function UGameUserSettings:ValidateSettings() end

---Whether the curently running system supports HDR display output
---@return boolean
function UGameUserSettings:SupportsHDRDisplayOutput() end

---Sets the user setting for vsync. See UGameUserSettings::bUseVSync.
---@param bEnable boolean
function UGameUserSettings:SetVSyncEnabled(bEnable) end

---Sets the visual effects quality (0..4, higher is better)
---@param Value integer
function UGameUserSettings:SetVisualEffectQuality(Value) end

---Sets the view distance quality (0..4, higher is better)
---@param Value integer
function UGameUserSettings:SetViewDistanceQuality(Value) end

function UGameUserSettings:SetToDefaults() end

---Sets the texture quality (0..4, higher is better)
---@param Value integer
function UGameUserSettings:SetTextureQuality(Value) end

---Sets the shadow quality (0..4, higher is better)
---@param Value integer
function UGameUserSettings:SetShadowQuality(Value) end

---Sets the shading quality (0..4, higher is better)
---@param Value integer
function UGameUserSettings:SetShadingQuality(Value) end

---Sets the user setting for game screen resolution, in pixels.
---@param Resolution FIntPoint
function UGameUserSettings:SetScreenResolution(Resolution) end

---Sets the current resolution scale
---@param NewScaleValue number
function UGameUserSettings:SetResolutionScaleValueEx(NewScaleValue) end

---Sets the current resolution scale as a normalized 0..1 value between MinScaleValue and MaxScaleValue
---@param NewScaleNormalized number
function UGameUserSettings:SetResolutionScaleNormalized(NewScaleNormalized) end

---Sets the reflection quality (0..4, higher is better)
---@param Value integer
function UGameUserSettings:SetReflectionQuality(Value) end

---Sets the post-processing quality (0..4, higher is better)
---@param Value integer
function UGameUserSettings:SetPostProcessingQuality(Value) end

---Changes all scalability settings at once based on a single overall quality level
---@param Value integer
function UGameUserSettings:SetOverallScalabilityLevel(Value) end

---Sets the global illumination quality (0..4, higher is better)
---@param Value integer
function UGameUserSettings:SetGlobalIlluminationQuality(Value) end

---Sets the user setting for the game window fullscreen mode. See UGameUserSettings::FullscreenMode.
---@param InFullscreenMode integer
function UGameUserSettings:SetFullscreenMode(InFullscreenMode) end

---Sets the user's frame rate limit (0 will disable frame rate limiting)
---@param NewLimit number
function UGameUserSettings:SetFrameRateLimit(NewLimit) end

---Sets the foliage quality (0..4, higher is better)
---@param Value integer
function UGameUserSettings:SetFoliageQuality(Value) end

---Sets the user setting for dynamic resolution. See UGameUserSettings::bUseDynamicResolution.
---@param bEnable boolean
function UGameUserSettings:SetDynamicResolutionEnabled(bEnable) end

---Set scalability settings to sensible fallback values, for use when the benchmark fails or potentially causes a crash
function UGameUserSettings:SetBenchmarkFallbackValues() end

---Sets the user's audio quality level setting
---@param QualityLevel integer
function UGameUserSettings:SetAudioQualityLevel(QualityLevel) end

---Sets the anti-aliasing quality (0..4, higher is better)
---@param Value integer
function UGameUserSettings:SetAntiAliasingQuality(Value) end

---Save the user settings to persistent storage (automatically happens as part of ApplySettings)
function UGameUserSettings:SaveSettings() end

---Runs the hardware benchmark and populates ScalabilityQuality as well as the last benchmark results config members, but does not apply the settings it determines. Designed to be called in conjunction with ApplyHardwareBenchmarkResults
---@param WorkScale integer @[opt] 
---@param CPUMultiplier number @[opt] 
---@param GPUMultiplier number @[opt] 
function UGameUserSettings:RunHardwareBenchmark(WorkScale, CPUMultiplier, GPUMultiplier) end

---Revert video mode (fullscreenmode/resolution) back to the last user confirmed values
function UGameUserSettings:RevertVideoMode() end

---This function resets all settings to the current system settings
function UGameUserSettings:ResetToCurrentSettings() end

---Loads the user settings from persistent storage
---@param bForceReload boolean @[opt] 
function UGameUserSettings:LoadSettings(bForceReload) end

---Returns the user setting for vsync.
---@return boolean
function UGameUserSettings:IsVSyncEnabled() end

---Checks if the vsync user setting is different from current system setting
---@return boolean
function UGameUserSettings:IsVSyncDirty() end

---Checks if the Screen Resolution user setting is different from current
---@return boolean
function UGameUserSettings:IsScreenResolutionDirty() end

---@return boolean
function UGameUserSettings:IsHDREnabled() end

---Checks if the FullscreenMode user setting is different from current
---@return boolean
function UGameUserSettings:IsFullscreenModeDirty() end

---Returns the user setting for dynamic resolution.
---@return boolean
function UGameUserSettings:IsDynamicResolutionEnabled() end

---Checks if the dynamic resolution user setting is different from current system setting
---@return boolean
function UGameUserSettings:IsDynamicResolutionDirty() end

---Checks if any user settings is different from current
---@return boolean
function UGameUserSettings:IsDirty() end

---Returns the visual effects quality (0..4, higher is better)
---@return integer
function UGameUserSettings:GetVisualEffectQuality() end

---Returns the view distance quality (0..4, higher is better)
---@return integer
function UGameUserSettings:GetViewDistanceQuality() end

---Returns the texture quality (0..4, higher is better)
---@return integer
function UGameUserSettings:GetTextureQuality() end

---@return integer
function UGameUserSettings.GetSyncInterval() end

---Returns the shadow quality (0..4, higher is better)
---@return integer
function UGameUserSettings:GetShadowQuality() end

---Returns the shading quality (0..4, higher is better)
---@return integer
function UGameUserSettings:GetShadingQuality() end

---Returns the user setting for game screen resolution, in pixels.
---@return FIntPoint
function UGameUserSettings:GetScreenResolution() end

---Gets the current resolution scale as a normalized 0..1 value between MinScaleValue and MaxScaleValue
---@return number
function UGameUserSettings:GetResolutionScaleNormalized() end

---Returns the current resolution scale and the range
---@param CurrentScaleNormalized number @[out] 
---@param CurrentScaleValue number @[out] 
---@param MinScaleValue number @[out] 
---@param MaxScaleValue number @[out] 
function UGameUserSettings:GetResolutionScaleInformationEx(CurrentScaleNormalized, CurrentScaleValue, MinScaleValue, MaxScaleValue) end

---Returns the reflection quality (0..4, higher is better)
---@return integer
function UGameUserSettings:GetReflectionQuality() end

---Gets the recommended resolution quality based on LastRecommendedScreenWidth/Height and the current screen resolution
---@return number
function UGameUserSettings:GetRecommendedResolutionScale() end

---Returns the user setting for game window fullscreen mode.
---@return integer
function UGameUserSettings:GetPreferredFullscreenMode() end

---Returns the post-processing quality (0..4, higher is better)
---@return integer
function UGameUserSettings:GetPostProcessingQuality() end

---Returns the overall scalability level (can return -1 if the settings are custom)
---@return integer
function UGameUserSettings:GetOverallScalabilityLevel() end

---Returns the last confirmed user setting for game screen resolution, in pixels.
---@return FIntPoint
function UGameUserSettings:GetLastConfirmedScreenResolution() end

---Returns the last confirmed user setting for game window fullscreen mode.
---@return integer
function UGameUserSettings:GetLastConfirmedFullscreenMode() end

---Returns the global illumination quality (0..4, higher is better)
---@return integer
function UGameUserSettings:GetGlobalIlluminationQuality() end

---Returns the game local machine settings (resolution, windowing mode, scalability settings, etc...)
---@return UGameUserSettings
function UGameUserSettings.GetGameUserSettings() end

---Returns the user setting for game window fullscreen mode.
---@return integer
function UGameUserSettings:GetFullscreenMode() end

---Gets the user's frame rate limit (0 indiciates the frame rate limit is disabled)
---@return number
function UGameUserSettings:GetFrameRateLimit() end

---Gets the current frame pacing frame rate in fps, or 0 if none
---@return integer
function UGameUserSettings.GetFramePace() end

---Returns the foliage quality (0..4, higher is better)
---@return integer
function UGameUserSettings:GetFoliageQuality() end

---Returns user's desktop resolution, in pixels.
---@return FIntPoint
function UGameUserSettings:GetDesktopResolution() end

---Returns the default window position when no position is set
---@return FIntPoint
function UGameUserSettings.GetDefaultWindowPosition() end

---Returns the default window mode when no mode is set
---@return integer
function UGameUserSettings.GetDefaultWindowMode() end

---Gets the desired resolution quality based on DesiredScreenWidth/Height and the current screen resolution
---@return number
function UGameUserSettings:GetDefaultResolutionScale() end

---Returns the default resolution when no resolution is set
---@return FIntPoint
function UGameUserSettings.GetDefaultResolution() end

---Returns 0 if HDR isn't supported or is turned off
---@return integer
function UGameUserSettings:GetCurrentHDRDisplayNits() end

---Returns the user's audio quality level setting
---@return integer
function UGameUserSettings:GetAudioQualityLevel() end

---Returns the anti-aliasing quality (0..4, higher is better)
---@return integer
function UGameUserSettings:GetAntiAliasingQuality() end

---Enables or disables HDR display output. Can be called again to change the desired nit level
---@param bEnable boolean
---@param DisplayNits integer @[opt] 
function UGameUserSettings:EnableHDRDisplayOutput(bEnable, DisplayNits) end

---Mark current video mode settings (fullscreenmode/resolution) as being confirmed by the user
function UGameUserSettings:ConfirmVideoMode() end

---Applies all current user settings to the game and saves to permanent storage (e.g. file), optionally checking for command line overrides.
---@param bCheckForCommandLineOverrides boolean
function UGameUserSettings:ApplySettings(bCheckForCommandLineOverrides) end

---@param bCheckForCommandLineOverrides boolean
function UGameUserSettings:ApplyResolutionSettings(bCheckForCommandLineOverrides) end

function UGameUserSettings:ApplyNonResolutionSettings() end

---Applies the settings stored in ScalabilityQuality and saves settings
function UGameUserSettings:ApplyHardwareBenchmarkResults() end

