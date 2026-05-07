---Base class for live link source settings (can be replaced by sources themselves)
---@class ULiveLinkSourceSettings : UObject
---@field public Mode ELiveLinkSourceMode @The the subject how to create the frame snapshot.
---@field public BufferSettings FLiveLinkSourceBufferManagementSettings @How the frame buffers are managed.
---@field public ConnectionString string @Connection information that is needed by the factory to recreate the source from a preset.
---@field public Factory TSubclassOf<ULiveLinkSourceFactory> @Factory used to create the source.
---@field public ParentSubject FLiveLinkSubjectName @Which subject should be used as a synchronization source for this source. If this is set, this source's subjects will only be rebroadcast when the parent subject receives data. Additionally this source's subjects' timecode will match the parent's subject received timecode. This can be useful for synchronizing a higher frequency source to a lower frequency one.
local ULiveLinkSourceSettings = {}

