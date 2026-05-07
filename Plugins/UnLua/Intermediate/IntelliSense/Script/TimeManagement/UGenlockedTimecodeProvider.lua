---This timecode provider base class will try to use the engine genlock sync to adjust its count.
---@class UGenlockedTimecodeProvider : UTimecodeProvider
---@field public bUseGenlockToCount boolean @Use Genlock Sync to update Timecode count
local UGenlockedTimecodeProvider = {}

