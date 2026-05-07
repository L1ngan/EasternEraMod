---Configuration for FRPCDoSDetection - using PerObjectConfig, to hack a single hardcoded section name
---@class URPCDoSDetectionConfig : UObject
---@field public bRPCDoSDetection boolean @Whether or not RPC DoS detection is presently enabled
---@field public bRPCDoSAnalytics boolean @Whether or not analytics for RPC DoS detection is enabled
---@field public HitchTimeQuotaMS integer @The amount of time since the previous frame, for detecting hitches, to prevent false positives from built-up packets
---@field public HitchSuspendDetectionTimeMS integer @The amount of time to suspend RPC DoS Detection, once a hitch is encountered, prevent false positives from built-up packets
---@field public DetectionSeverity TArray<string> @Names of the different RPC DoS detection states, for escalating severity, depending on the amount of RPC spam
---@field public InitialConnectToleranceMS integer @The amount of time since the client connected, before time-based checks should become active (to reduce false positives)
---@field public RPCBlockWhitelist TArray<string>
---@field public RPCBlockAllowlist TArray<string> @List of RPC's which should never be blocked
---@field public RPCAnalyticsThresholds TArray<FRPCAnalyticsThreshold> @Custom thresholds for when specific RPC's should be included in analytics
---@field public RPCAnalyticsOverrideChance number @Specifies a random chance, between 0.0 and 1.0, for when RPCAnalyticsThresholds should be overridden (adds to separate analytics)
local URPCDoSDetectionConfig = {}

