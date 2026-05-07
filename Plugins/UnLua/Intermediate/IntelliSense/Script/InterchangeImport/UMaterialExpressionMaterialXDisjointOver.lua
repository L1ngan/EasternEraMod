---Merge nodes take two 4-channel (color4) inputs and use the built-in alpha channel(s) to control the
---compositing of the A and B inputs. "A" and "B" refer to the non-alpha channels of the A and B inputs respectively,
---and "a" and "b" refer to the alpha channels of the A and B inputs.
---Merge nodes are only defined for float4 inputs
---Merge nodes support an optional float input Alpha , which can be used to mix the
---original B value with the result of the blend operation.
---Operation: A + B        if a + b <= 1;
---           A + B(1-a)/b if a + b > 1
---Result: Lerp(B, Op, Alpha)
---@class UMaterialExpressionMaterialXDisjointOver : UMaterialExpression
---@field public A FExpressionInput
---@field public B FExpressionInput
---@field public Alpha FExpressionInput @Defaults to 'ConstAlpha' if not specified
---@field public ConstAlpha number @only used if Alpha is not hooked up
local UMaterialExpressionMaterialXDisjointOver = {}

