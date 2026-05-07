---A metrics listener that reports a metric to a single Stat.
---The function SetStatName() is expected to be called before the listener is registered with
---FNetworkMetricsDatabase::Register(). This function will associate the instance of UNetworkMetricStats
---with a specific Stat.
---Since each instance of this class is associated with a single Stat it can only be registered
---as a listener to a single metric in FNetworkMetricsDatabase.
---UNetworkMetricsStats is not intended to be used from configuration files!
---@class UNetworkMetricsStats : UNetworkMetricsBaseListener
local UNetworkMetricsStats = {}

