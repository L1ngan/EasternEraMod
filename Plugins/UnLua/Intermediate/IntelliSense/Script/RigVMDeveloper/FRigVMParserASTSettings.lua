---* The settings to apply during the parse of the abstract syntax tree.
---* The folding settings can affect the performance of the parse dramatically.
---@class FRigVMParserASTSettings
---@field public bFoldAssignments boolean @fold assignments / copies
---@field public bFoldLiterals boolean @fold literals and share memory
---@field public bSetupTraits boolean
---@field public LinksToSkip TArray<URigVMLink> @links to be ignored during the parse
---@field public ExecuteContextStruct UScriptStruct
local FRigVMParserASTSettings = {}
