---Prioritizer definition. Configurable via UNetObjectPrioritizerDefinitions.
---@class FNetObjectPrioritizerDefinition
---@field public PrioritizerName string @Prioritizer identifier. Used to uniquely identify a prioritizer in various APIs.
---@field public ClassName string @UClass name, specified by its fully qualified path, used to create the UNetObjectPrioritizer. You can have multiple instances of the same prioritizer as long as their PrioritizerNames are unique.
---@field public Class TSubclassOf<UObject> @UClass used to create the UNetObjectPrioritizer. Filled in automatically when reading the config.
---@field public ConfigClassName string @Optional UClass, specified by its fully qualified path, used to create the UNetObjectPrioritizerConfig. The class default instance will be passed at prioritizer initialization. If you want multiple instances of the same prioritizer then use subclassing to create unique prioritizer configs.
---@field public ConfigClass TSubclassOf<UObject> @UClass used to create the UNetObjectPrioritizerConfig. Filled in automatically when reading the config.
local FNetObjectPrioritizerDefinition = {}
