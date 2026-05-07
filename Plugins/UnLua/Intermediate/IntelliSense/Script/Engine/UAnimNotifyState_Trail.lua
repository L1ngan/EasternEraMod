---@class UAnimNotifyState_Trail : UAnimNotifyState
---@field public PSTemplate UParticleSystem @The particle system to use for this trail.
---@field public FirstSocketName string @Name of the first socket defining this trail.
---@field public SecondSocketName string @Name of the second socket defining this trail.
---@field public WidthScaleMode integer @Controls the way width scale is applied. In each method a width scale of 1.0 will mean the width is unchanged from the position of the sockets. A width scale of 0.0 will cause a trail of zero width. From Centre = Trail width is scaled outwards from the centre point between the two sockets. From First = Trail width is scaled outwards from the position of the first socket. From Second = Trail width is scaled outwards from the position of the Second socket.
---@field public WidthScaleCurve string @Name of the curve to drive the width scale.
---@field public bRecycleSpawnedSystems boolean
---@field public bRenderGeometry boolean @If true, render the trail geometry (this should typically be on)
---@field public bRenderSpawnPoints boolean @If true, render stars at each spawned particle point along the trail
---@field public bRenderTangents boolean @If true, render a line showing the tangent at each spawned particle point along the trail
---@field public bRenderTessellation boolean @If true, render the tessellated path between spawned particles
local UAnimNotifyState_Trail = {}

---@param MeshComp USkeletalMeshComponent
---@param Animation UAnimSequenceBase
---@return UParticleSystem
function UAnimNotifyState_Trail:OverridePSTemplate(MeshComp, Animation) end

