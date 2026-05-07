---We use this object to display plugin properties using details view.
---@class UPluginMetadataObject : UObject
---@field public Version integer @Version number for the plugin.  The version number must increase with every version of the plugin, so that the system       can determine whether one version of a plugin is newer than another, or to enforce other requirements.  This version       number is not displayed in front-facing UI.  Use the VersionName for that.
---@field public VersionName string @Name of the version for this plugin.  This is the front-facing part of the version number.  It doesn't need to match       the version number numerically, but should be updated when the version number is increased accordingly.
---@field public FriendlyName string @Friendly name of the plugin
---@field public Description string @Description of the plugin
---@field public Category string @The category that this plugin belongs to
---@field public CreatedBy string @The company or individual who created this plugin.  This is an optional field that may be displayed in the user interface.
---@field public CreatedByURL string @Hyperlink URL string for the company or individual who created this plugin.  This is optional.
---@field public DocsURL string @Documentation URL string.
---@field public MarketplaceURL string @Marketplace URL string.
---@field public SupportURL string @Support URL/email for this plugin. Email addresses must be prefixed with 'mailto:'
---@field public EditorCustomVirtualPath string @Optional custom virtual path to display in editor to better organize. Inserted just before this plugin's directory in the path: /All/Plugins/EditorCustomVirtualPath/PluginName
---@field public bCanContainContent boolean @Can this plugin contain content?
---@field public bIsBetaVersion boolean @Marks the plugin as beta in the UI
---@field public bIsEnabledByDefault boolean @If true, the plugin will be enabled by default without needing to modify the project file. This cannot be changed while the editor is running
---@field public bExplicitlyLoaded boolean @If true, the plugin will not load at startup and must be explicitly loaded. This cannot be changed while the editor is running
---@field public bIsSealed boolean @If true, prevents other plugins from depending on this plugin
---@field public bNoCode boolean
---@field public Plugins TArray<FPluginReferenceMetadata> @Plugins used by this plugin
---@field public DisallowedPlugins TArray<FPluginDisallowedMetadata> @Plugins that cannot be used by this plugin
local UPluginMetadataObject = {}

---@return TArray_string_
function UPluginMetadataObject:GetDisallowedPluginsOptions() end

---@return TArray_string_
function UPluginMetadataObject:GetAvailablePluginDependencies() end

