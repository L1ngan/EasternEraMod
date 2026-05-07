---Data for shared linked anim instances module
---@class FAnimSubsystem_SharedLinkedAnimLayers : FAnimSubsystemInstance
---@field private ClassesData TArray<FLinkedAnimLayerClassData>
---@field private PersistentClasses TArray<TSubclassOf<UAnimInstance>> @Anim instance classes that should be kept alive even when unlinked
local FAnimSubsystem_SharedLinkedAnimLayers = {}
