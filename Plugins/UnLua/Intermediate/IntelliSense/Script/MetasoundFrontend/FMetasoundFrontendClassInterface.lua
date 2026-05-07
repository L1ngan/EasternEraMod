---@class FMetasoundFrontendClassInterface
---@field private InputStyle FMetasoundFrontendInterfaceStyle @Style info for inputs.
---@field private OutputStyle FMetasoundFrontendInterfaceStyle @Style info for outputs.
---@field public Inputs TArray<FMetasoundFrontendClassInput> @Description of class inputs.
---@field public Outputs TArray<FMetasoundFrontendClassOutput> @Description of class outputs.
---@field public Environment TArray<FMetasoundFrontendClassEnvironmentVariable> @Description of class environment variables.
---@field private ChangeID FGuid
local FMetasoundFrontendClassInterface = {}
