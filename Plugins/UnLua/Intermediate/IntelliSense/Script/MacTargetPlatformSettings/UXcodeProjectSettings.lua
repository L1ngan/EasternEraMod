---Implements the settings for Xcode projects
---@class UXcodeProjectSettings : UObject
---@field public bUseModernXcode boolean @Enable modernized Xcode, when building from Xcode, use native Xcode for bundle generation and archiving instead of UBT Restart required to apply this setting
---@field public CodeSigningTeam string @Team ID used for native Xcode code signing. This must be the 10 letters/numbers ID found in Membership Details tab found in https://developer.apple.com/account
---@field public BundleIdentifier string @Bundle ID used for nativr Xcode code signing
---@field public CodeSigningPrefix string @Bundle ID prefix used for native Xcode code signing. This is only needed if you use the default, pieced-together Bundle ID above. If you specify a full Bundle ID, you can ignore this field.
---@field public ApplicationDisplayName string @The name of the Mac .app when making an archived build (for uploading to App Store, etc). The Finder shows Mac apps by their .app name, and we don't name the .app  with "pretty" names during development. When packaging for distribution (or using Archive menu in Xcode) this will become the name of the .app, and will be what end users will have on their Mac. If this is not set, the .app will have the name of the .uproject file
---@field public AppCategory string @The App Category that will be used for Apple App Store submissions
---@field public TemplateMacPlist FFilePath @The template info.plist used for Mac game targets
---@field public TemplateIOSPlist FFilePath @The template info.plist used for iOS game targets
---@field public PremadeMacEntitlements FFilePath @The premade entitlement file used for development Mac builds
---@field public ShippingSpecificMacEntitlements FFilePath @The premade entitlement file used for shipping Mac builds
---@field public PremadeIOSEntitlements FFilePath @The premade entitlement file used for development IOS builds
---@field public ShippingSpecificIOSEntitlements FFilePath @The premade entitlement file used for shipping IOS builds
---@field public bUseAutomaticCodeSigning boolean @Enable native Xcode code signing
---@field public bMacSignToRunLocally boolean @If true, Mac will sign to run locally. Running on another Mac may bring up a dialog preventing running the app. If this and Use Automatic Code Signing are both false, you will need a certificate installed
---@field public MacSigningIdentity string @The name (prefix or full) of the certificate to use for Mac code signing.
---@field public IOSSigningIdentity string @The name (prefix or full) of the certificate to use for IOS and TVOS code signing
---@field public IOSProvisioningProfile FFilePath @The path to a .mobileprovision file to use for signing for IOS. Alternatively, if it's a single name or UUID (no .mobileprovision extension), it will use this as the name/UUID of an already installed provision to sign with
---@field public TVOSProvisioningProfile FFilePath @The path to a .mobileprovision file to use for signing for TVOS. Alternatively, if it's a single name or UUID (no .mobileprovision extension), it will use this as the name/UUID of an already installed provision to sign with
---@field public bUseAppStoreConnect boolean @If true, use AppStore Connect authentication for commandline builds. This allows for automatic codesigning functionality without needing to be signed in to Xcode. See the App Store Connect API section of the Keys tab in your Users and Access page in Apple dev center.
---@field public AppStoreConnectIssuerID string @The Issuer ID for your App Store Connect API
---@field public AppStoreConnectKeyID string @The Key ID for your App Store Connect generated API key, a 32 hex-character string, including dashes
---@field public AppStoreConnectKeyPath FFilePath @The path to the downloaded .p8 file shared with your team
---@field public AdditionalPrivacyInfoMac FFilePath @The path to the optional PrivacyInfo.xcprivacy file for your project
---@field public AdditionalPrivacyInfoIOS FFilePath @The path to the optional PrivacyInfo.xcprivacy file for your project
local UXcodeProjectSettings = {}

---@return boolean
function UXcodeProjectSettings.ShouldDisableIOSSettings() end

