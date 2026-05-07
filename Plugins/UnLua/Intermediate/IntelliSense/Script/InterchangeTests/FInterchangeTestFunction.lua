---@class FInterchangeTestFunction
---@field public AssetClass TSubclassOf<UObject> @Type of the asset being tested
---@field public OptionalAssetName string @Optional name of the asset to test, if there are various contenders
---@field public CheckFunction UFunction @A function to be called to determine whether the result is correct
---@field public Parameters TMap<string, string> @Parameters and their bound values as text
local FInterchangeTestFunction = {}
