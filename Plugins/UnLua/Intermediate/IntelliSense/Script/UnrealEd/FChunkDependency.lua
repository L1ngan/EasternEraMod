---A single dependency, read from ini file
---@class FChunkDependency
---@field public ChunkID integer @The child chunk
---@field public ParentChunkID integer @Parent chunk, anything in both Parent and Child is only placed into Parent
local FChunkDependency = {}
