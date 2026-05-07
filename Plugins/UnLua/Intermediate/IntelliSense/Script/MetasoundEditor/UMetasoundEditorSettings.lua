---@class UMetasoundEditorSettings : UObject
---@field public bPinMetaSoundPatchInAssetMenu boolean @Whether to pin the MetaSound Patch asset type when creating new assets. Requires editor restart for change to take effect.
---@field public bPinMetaSoundSourceInAssetMenu boolean @Whether to pin the MetaSound Source asset type when creating new assets. Requires editor restart for change to take effect.
---@field public bApplyAuditionSettingsInPIE boolean @If true, uses editor page/platform audition settings in PIE. If false, uses project's defined values (see project 'MetaSound' setting 'TargetPage', which can be manipulated via code/Blueprint.)
---@field public DefaultAuthor string @Default author title to use when authoring a new MetaSound.  If empty, uses machine name by default.
---@field public AuditionPageMode EAuditionPageMode @Currently set page audition mode. Set by the MetaSound Asset Editor.
---@field public AuditionPlatform string @Name of platform to mock when previewing playback. This will limit playback to fallback only to paged data that are cooked for the given platform. (see project 'MetaSound' Settings --> 'Page Settings' array for order) If set to 'Editor', ignores cook settings and allows fallback to all page.
---@field public AuditionPage string @Name of the page to audition in editor. If unimplemented on the auditioned MetaSound, uses order of cooked pages (see project 'MetaSound' Settings --> 'Page Settings' array for order) falling back to lower index-ordered page implemented in MetaSound asset.
---@field public DefaultPinTypeColor FLinearColor @Default pin type color
---@field public AudioPinTypeColor FLinearColor @Audio pin type color
---@field public BooleanPinTypeColor FLinearColor @Boolean pin type color
---@field public FloatPinTypeColor FLinearColor @Floating-point pin type color
---@field public IntPinTypeColor FLinearColor @Integer pin type color
---@field public ObjectPinTypeColor FLinearColor @Object pin type color
---@field public StringPinTypeColor FLinearColor @String pin type color
---@field public TimePinTypeColor FLinearColor @Time pin type color
---@field public TriggerPinTypeColor FLinearColor @Trigger pin type color
---@field public WaveTablePinTypeColor FLinearColor @WaveTable pin type color
---@field public NativeNodeTitleColor FLinearColor @Native node class title color
---@field public AssetReferenceNodeTitleColor FLinearColor @Title color for references to MetaSound assets
---@field public InputNodeTitleColor FLinearColor @Input node title color
---@field public OutputNodeTitleColor FLinearColor @Output node title color
---@field public VariableNodeTitleColor FLinearColor @Variable node title color
---@field public SpectrogramSettings FSpectrogramRackUnitSettings @Settings for metasound output spectrogram widget
---@field public SpectrumAnalyzerSettings FSpectrumAnalyzerRackUnitSettings @Settings for metasound output spectrum analyzer widget
---@field public DefaultInputWidgetType EMetasoundMemberDefaultWidget @Widget type to show on input nodes by default
---@field public AnalyzerAnimationSettings FMetasoundAnalyzerAnimationSettings @Settings for visualizing analyzed MetaSound connections
---@field public DetailView EMetasoundActiveDetailView @Determines which details view to show in Metasounds Editor
---@field public bUseAudioMaterialWidgets boolean @Whether the AudioMaterialWidgets are used when possible in Metasound Editor
---@field public KnobStyleOverride FSoftObjectPath @Override the Knob Style used in the Metasound Editor.
---@field public SliderStyleOverride FSoftObjectPath @Override the Slider Style used in the Metasound Editor.
---@field public ButtonStyleOverride FSoftObjectPath @Override the Button Style used in the Metasound Editor.
---@field public MeterStyleOverride FSoftObjectPath @Override the Meter Style used in the Metasound Editor.
local UMetasoundEditorSettings = {}

---@return TArray_string_
function UMetasoundEditorSettings.GetAuditionPlatformNames() end

---@return TArray_string_
function UMetasoundEditorSettings.GetAuditionPageNames() end

