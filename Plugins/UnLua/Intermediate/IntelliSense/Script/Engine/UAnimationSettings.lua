---Default animation settings.
---@class UAnimationSettings : UDeveloperSettings
---@field public CompressCommandletVersion integer @Compression version for recompress commandlet, bump this to trigger full recompressed, otherwise only new imported animations will be recompressed
---@field public KeyEndEffectorsMatchNameArray TArray<string> @List of bone names to treat with higher precision, in addition to any bones with sockets
---@field public ForceRecompression boolean @If true, this will forcibly recompress every animation, this should not be checked in enabled
---@field public bForceBelowThreshold boolean @If true and the existing compression error is greater than Alternative Compression Threshold, then any compression technique (even one that increases the size) with a lower error will be used until it falls below the threshold
---@field public bFirstRecompressUsingCurrentOrDefault boolean @If true, then the animation will be first recompressed with its current compressor if non-NULL, or with the global default compressor (specified in the engine ini) Also known as "Run Current Default Compressor"
---@field public bRaiseMaxErrorToExisting boolean @, EditAnywhere, Category = Compression
---@field public bEnablePerformanceLog boolean @If true, recompression will log performance information
---@field public bStripAnimationDataOnDedicatedServer boolean @If true, animation track data will be stripped from dedicated server cooked data
---@field public bTickAnimationOnSkeletalMeshInit boolean @If true, pre-4.19 behavior of zero-ticking animations during skeletal mesh init
---@field public BoneTimecodeCustomAttributeNameSettings FTimecodeCustomAttributeNameSettings @Names that identify bone animation attributes representing the individual components of a timecode and a subframe along with a take name.           These will be included in the list of bone custom attribute names to import.
---@field public BoneCustomAttributesNames TArray<FCustomAttributeSetting> @List of animation attribute names to import directly on their corresponding bone names. The meaning field allows to contextualize the attribute name and customize tooling for it.
---@field public BoneNamesWithCustomAttributes TArray<string> @List of bone names for which all animation attributes are directly imported on the bone.
---@field public AttributeBlendModes TMap<string, ECustomAttributeBlendType> @Animation Attribute specific blend types (by name)
---@field public DefaultAttributeBlendMode ECustomAttributeBlendType @Default Animation Attribute blend type
---@field public TransformAttributeNames TArray<string> @Names to match against when importing FBX node transform curves as attributes (can use ? and * wildcards)
---@field public UserDefinedStructAttributes TArray<TSoftObjectPtr<UUserDefinedStruct>> @Register user defined structs as animation attributes
---@field public MirrorFindReplaceExpressions TArray<FMirrorFindReplaceExpression> @Find and Replace Expressions used for mirroring
---@field public DefaultFrameRate FFrameRate @Project specific default frame-rate used when (re)initializing any animation based data
---@field public bEnforceSupportedFrameRates boolean @Whether to enforce the project to only use entries from SupportedFrameRates for the animation assets, if disable will warn instead
local UAnimationSettings = {}

---Gets the complete list of bone animation attribute names to consider for import.
---          This includes the designated timecode animation attributes as well as other bone animation attributes identified in the settings.
---@return TArray_string_
function UAnimationSettings:GetBoneCustomAttributeNamesToImport() end

