---@class UWorldPartitionSettings : UDeveloperSettings
---@field protected NewMapsDataLayersLogicOperator EWorldPartitionDataLayersLogicOperator @Set the default logical operator for actor data layers activation for new maps
---@field protected bNewMapsEnableWorldPartition boolean @Set the default to whether enable world partition for new maps created in the content broswer
---@field protected bNewMapsEnableWorldPartitionStreaming boolean @Set the default to whether enable world partition streaming for new maps created in the content broswer
---@field protected EditorHashDefaultClass TSubclassOf<UWorldPartitionEditorHash> @Set the default editor hash class to use for the editor
---@field protected RuntimeHashDefaultClass TSubclassOf<UWorldPartitionRuntimeHash> @Set the default runtime hash class to use for new maps
---@field protected PropertyOverridePolicy UWorldPartitionPropertyOverridePolicy
local UWorldPartitionSettings = {}

