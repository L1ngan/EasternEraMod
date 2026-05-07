---A metrics listener that reports an array of metrics to PerfCounters.
---To use UNetworkMetricsPerfCounters in a configuration file, the class must be used when registering a listener:
---    [/Script/Engine.NetworkMetricsConfig]
---    +Listeners=(MetricName=ExampleMetric, ClassName=/Script/Engine.NetworkMetricsPerfCounters)
---@class UNetworkMetricsPerfCounters : UNetworkMetricsBaseListener
local UNetworkMetricsPerfCounters = {}

