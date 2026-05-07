---Base class used for a blueprint node that calls a function and provides asynchronous exec pins when the function is complete.
---The created proxy object should have RF_StrongRefOnFrame flag.
---@class UK2Node_BaseAsyncTask : UK2Node
---@field protected ProxyFactoryFunctionName string @The name of the function to call to create a proxy object
---@field protected ProxyFactoryClass TSubclassOf<UObject> @The class containing the proxy object functions
---@field protected ProxyClass TSubclassOf<UObject> @The type of proxy object that will be created
---@field protected ProxyActivateFunctionName string @The name of the 'go' function on the proxy object that will be called after delegates are in place, can be NAME_None
local UK2Node_BaseAsyncTask = {}

