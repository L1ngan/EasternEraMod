---A Virtual subject is made up of one or more real subjects from a source
---@class ULiveLinkVirtualSubject : UObject
---@field protected Role TSubclassOf<ULiveLinkRole> @The role the subject was build with.
---@field protected Subjects TArray<FLiveLinkSubjectName> @Names of the real subjects to combine into a virtual subject
---@field protected FrameTranslators TArray<ULiveLinkFrameTranslator> @List of available translator the subject can use.
---@field protected bRebroadcastSubject boolean @If enabled, rebroadcast this subject
local ULiveLinkVirtualSubject = {}

