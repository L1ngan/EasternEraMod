---Builder Document UObject, which is only used for registration purposes when attempting
---async registration whereby the original document is serialized and must not be mutated.
---@class UMetaSoundBuilderDocument : UObject
---@field private Document FMetasoundFrontendDocument
---@field private MetaSoundUClass TSubclassOf<UObject>
---@field private BuilderUClass TSubclassOf<UObject>
local UMetaSoundBuilderDocument = {}

