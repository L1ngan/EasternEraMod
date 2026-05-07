---Level Sequence With Shots Settings.
---@class ULevelSequenceWithShotsSettings : UObject
---@field public Name string @Sequence With Shots name.
---@field public Suffix string @Sequence With Shots suffix.
---@field public BasePath FDirectoryPath @Sequence With Shots path.
---@field public NumShots integer @Sequence With Shots number of shots.
---@field public SequenceToDuplicate TLazyObjectPtr<ULevelSequence> @Sequence With Shots level sequence to duplicate when creating shots.
---@field public SubSequenceNames TArray<string> @Array of sub sequence names, each will result in a level sequence asset in the shot.
---@field public bInstanceSubSequences boolean @Whether to instance sub sequences based on the first created sub sequences.
local ULevelSequenceWithShotsSettings = {}

