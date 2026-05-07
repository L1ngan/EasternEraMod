---User Interface settings that control Slate and UMG.
---@class UUserInterfaceSettings : UDeveloperSettings
---@field public RenderFocusRule ERenderFocusRule @Rule to determine if we should render the Focus Brush for widgets that have user focus.
---@field public HardwareCursors TMap<integer, FHardwareCursorReference>
---@field public SoftwareCursors TMap<integer, FSoftClassPath>
---@field public ApplicationScale number @An optional application scale to apply on top of the custom scaling rules.  So if you want to expose a property in your game title, you can modify this underlying value to scale the entire UI.
---@field public UIScaleRule EUIScalingRule @The rule used when trying to decide what scale to apply.
---@field public CustomScalingRuleClass FSoftClassPath @Set DPI Scale Rule to Custom, and this class will be used instead of any of the built-in rules.
---@field public UIScaleCurve FRuntimeFloatCurve @Controls how the UI is scaled at different resolutions based on the DPI Scale Rule
---@field public bAllowHighDPIInGameMode boolean @If true, game window on desktop platforms will be created with high-DPI awareness enabled. Recommended to be enabled only if the game's UI allows users to modify 3D resolution scaling.
---@field public DesignScreenSize FIntPoint @Used only with ScaleToFit scaling rule. Defines native resolution for which were source UI textures created. DPI scaling will be 1.0 at this screen resolution.
---@field public bLoadWidgetsOnDedicatedServer boolean @If false, widget references will be stripped during cook for server builds and not loaded at runtime.
---@field public bAuthorizeAutomaticWidgetVariableCreation boolean @Setting to authorize or not automatic variable creation. If true, variables will be created automatically, if the type created allows it. Drawback: it's easier to have a bad data architecture because various blueprint graph will have access to many variables. If false, variables are never created automatically, and you have to create them manually on a case by case basis.
---@field private CustomFontDPI integer @Controls the relationship between UMG font size and pixel height.
---@field private FontDPIPreset EFontDPI @Controls the relationship between UMG font size and pixel height.
---@field private bUseCustomFontDPI boolean @To set your own custom value, check this box, then enter the value in the text box.
---@field public bEnableDistanceFieldFontRasterization boolean
---@field private CursorClasses TArray<UObject> @This is just holding on to references to prevent GC in the Editor (tied to the lifetime of this object)
---@field private CustomScalingRuleClassInstance TSubclassOf<UObject>
---@field private CustomScalingRule UDPICustomScalingRule
local UUserInterfaceSettings = {}

---@return boolean
function UUserInterfaceSettings.ShouldDisplayDistanceFieldFontSettings() end

