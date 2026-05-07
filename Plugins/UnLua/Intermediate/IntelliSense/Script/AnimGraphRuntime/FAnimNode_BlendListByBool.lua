---This node is effectively a 'branch', picking one of two input poses based on an input Boolean value
---@class FAnimNode_BlendListByBool : FAnimNode_BlendListBase
---@field private BlendProfileForFalse UBlendProfile @Used in conjunction with bUseSeperateBlendProfileForFalse
---@field private bUseSeperateBlendProfileForFalse boolean @Specify whether to use a different blend profile for the 'false' branch than the true branch.       *       * If bUseSeperateBlendProfileForFalse is false (default), then the 'BlendProfile' is used when ActiveValue is both true or false       * If bUseSeperateBlendProfileForFalse is true, then the 'BlendProfileForFalse' value is used when the ActiveValue is false, but 'BlendProfile' is used when ActiveValue is true
---@field private bActiveValue boolean @Which input should be connected to the output?
local FAnimNode_BlendListByBool = {}
