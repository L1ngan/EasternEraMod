---@class UFbxFactory : UFactory
---@field public ImportUI UFbxImportUI
---@field public OriginalImportUI UFbxImportUI @Prevent garbage collection of original when overriding ImportUI property
local UFbxFactory = {}

