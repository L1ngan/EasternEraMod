---@class FNetworkMetricConfig
---@field public MetricName string @The name of the metric to register the listener.
---@field public Class TSoftClassPtr<UNetworkMetricsBaseListener> @A sub-class of UNetworkMetricBaseListener.
---@field public EnableMode ENetworkMetricEnableMode
local FNetworkMetricConfig = {}
