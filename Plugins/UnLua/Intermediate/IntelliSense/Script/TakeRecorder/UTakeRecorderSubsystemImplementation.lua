---@class UTakeRecorderSubsystemImplementation : UObject
---@field private TransientPreset UTakePreset @A transient preset available for the subsystem.
---@field private SuppliedLevelSequence ULevelSequence @Current supplied level sequence.
---@field private RecordIntoLevelSequence ULevelSequence @Current record into level sequence.
---@field private RecordingLevelSequence ULevelSequence @Current recording level sequence.
---@field private LastRecordedLevelSequence TWeakObjectPtr<ULevelSequence> @The last recorded level sequence.
---@field private TakeMetaData UTakeMetaData @Take meta-data cached from the level sequence if it exists.
---@field private TransientTakeMetaData UTakeMetaData @Transient take meta-data owned by this subsystem. Only used if none exists on the level sequence already.
---@field private NamingTokensData UTakeRecorderNamingTokensData @Stored data relevant to our naming tokens. Managed as UObject for transactions.
local UTakeRecorderSubsystemImplementation = {}

