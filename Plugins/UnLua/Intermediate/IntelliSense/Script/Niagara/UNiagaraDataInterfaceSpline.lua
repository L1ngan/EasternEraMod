---Data Interface allowing sampling of in-world spline components. Note that this data interface is very experimental.
---@class UNiagaraDataInterfaceSpline : UNiagaraDataInterface
---@field public SoftSourceActor TSoftObjectPtr<AActor> @The source actor from which to sample.  Note that this can only be set when used as a user variable on a component in the world.
---@field public SplineUserParameter FNiagaraUserParameterBinding @Reference to a user parameter if we're reading one. This should  be an Object user parameter that is either a USplineComponent or an AActor containing a USplineComponent.
---@field public bUseLUT boolean
---@field public NumLUTSteps integer
local UNiagaraDataInterfaceSpline = {}

