---Represents the serialized version of variant literal types.
---@class FMetasoundFrontendLiteral
---@field private Type EMetasoundFrontendLiteralType @The set type of this literal.
---@field private AsNumDefault integer
---@field private AsBoolean TArray<boolean>
---@field private AsInteger TArray<integer>
---@field private AsFloat TArray<number>
---@field private AsString TArray<string>
---@field private AsUObject TArray<UObject>
local FMetasoundFrontendLiteral = {}
