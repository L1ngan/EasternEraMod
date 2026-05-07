---UTickableWorldSubsystem
---Base class for auto instanced and initialized systems that share the lifetime of a UWorld and are ticking along with it.
---With the default implementation, it will start ticking after Initialize and stop during Deinitialize,
---and it will call IsTickable every frame (defaults to true) before calling Tick.
---Subclasses must forward calls to the Initialize/Deinitialize functions to correctly enable ticking.
---@class UTickableWorldSubsystem : UWorldSubsystem
local UTickableWorldSubsystem = {}

