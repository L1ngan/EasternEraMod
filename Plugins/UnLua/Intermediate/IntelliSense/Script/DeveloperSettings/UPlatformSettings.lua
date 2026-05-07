---The base class of any per platform settings.  The pattern for using these is as follows.
---Step 1) Subclass UPlatformSettings, UMyPerPlatformSettings : public UPlatformSettings.
---Step 2) For your system should already have a UDeveloperSettings that you created so that
---        users can customize other properties for your system in the project.  On that class
---        you need to create a property of type FPerPlatformSettings, e.g.
---        UPROPERTY(EditAnywhere, Category=Platform)
---        FPerPlatformSettings PlatformOptions
---Step 3) In your UDeveloperSettings subclasses construct, there should be a line like this,
---        PlatformOptions.Settings.Initialize(UMyPerPlatformSettings::StaticClass());
---        This will actually ensure that you initialize the settings exposed in the editor to whatever
---        the current platform configuration is for them.
---Step 4) Nothing else needed.  In your system code, you will just call
---        UMyPerPlatformSettings* MySettings = UPlatformSettingsManager::Get().GetSettingsForPlatform<UMyPerPlatformSettings>()
---        that will get you the current settings for the active platform, or the simulated platform in the editor.
---@class UPlatformSettings : UObject
local UPlatformSettings = {}

