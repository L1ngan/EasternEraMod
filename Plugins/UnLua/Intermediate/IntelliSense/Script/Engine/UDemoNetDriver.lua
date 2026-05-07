---Simulated network driver for recording and playing back game sessions.
---@class UDemoNetDriver : UNetDriver
---@field private RollbackNetStartupActors TMap<string, FRollbackNetStartupActorInfo> @Net startup actors that need to be rolled back during scrubbing by being destroyed and re-spawned NOTE - DeletedNetStartupActors will take precedence here, and destroy the actor instead
---@field private CheckpointSaveMaxMSPerFrame number @Maximum time allowed each frame to spend on saving a checkpoint. If 0, it will save the checkpoint in a single frame, regardless of how long it takes. See also demo.CheckpointSaveMaxMSPerFrameOverride.
---@field private MulticastRecordOptions TArray<FMulticastRecordOptions> @Config data for multicast RPCs we might want to skip recording.
---@field private SpectatorControllers TArray<APlayerController> @An array of all the spectator controllers (the main one and all splitscreen ones) that currently exist
local UDemoNetDriver = {}

