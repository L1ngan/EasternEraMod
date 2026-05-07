---Base class for an extension for the World Metrics subsystem.
---World Metrics subsystem extensions provide custom data/functionality to world metrics and other extensions (one to
---many) and have the following characteristics:
---1. Unique: there can only be a single instance of each extension class.
---2. Exclusively managed and owned by the  World Metrics subsystem.. These should never be created directly.
---3. Implement acquired/release semantics. The World Metrics subsystem automatically initializes extensions on
---acquisition and deinitializes them on release. The subsystem may deallocate an extension that have no acquisitions.
---@class UWorldMetricsExtension : UObject
local UWorldMetricsExtension = {}

