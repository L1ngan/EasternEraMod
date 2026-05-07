---Csv metrics subsystem
---This subsystem registers/unregisters its CSV metric collection whenever a CSV profiler capture is performed.
---@class UCsvMetricsSubsystem : UWorldSubsystem
---@field public MetricClasses TArray<TSubclassOf<UWorldMetricInterface>> @The CSV metric collection to add/remove when a CSV profiler capture stats/ends.
local UCsvMetricsSubsystem = {}

