---Data Interface which can control or read from a scene capture component.
---@class UNiagaraDataInterfaceSceneCapture2D : UNiagaraDataInterface
---@field public SourceMode ENDISceneCapture2DSourceMode @How should we find the scene capture component to use?
---@field public SceneCaptureUserParameter FNiagaraUserParameterBinding @When valid should point to either a Scene Capture 2D Component or a Scene Capture 2D Actor.
---@field public bAutoMoveWithComponent boolean @When enabled the scene capture component will be automatically moved to the location of the NiagaraComponent with an optional offset.
---@field public AutoMoveOffsetLocationMode ENDISceneCapture2DOffsetMode @Should we apply the auto move offset in local or world space?
---@field public AutoMoveOffsetLocation FVector @Location offset when applying auto movement.
---@field public AutoMoveOffsetRotationMode ENDISceneCapture2DOffsetMode @How we should apply the rotation
---@field public AutoMoveOffsetRotation FRotator @Rotation offset when applying auto movement.
---@field public ManagedCaptureSource integer
---@field public ManagedTextureSize FIntPoint
---@field public ManagedTextureFormat integer
---@field public ManagedProjectionType integer
---@field public ManagedFOVAngle number
---@field public ManagedOrthoWidth number
---@field public bManagedCaptureEveryFrame boolean
---@field public bManagedCaptureOnMovement boolean
---@field public ManagedShowOnlyActors TArray<AActor>
---@field protected ManagedCaptureComponents TMap<integer, USceneCaptureComponent2D>
local UNiagaraDataInterfaceSceneCapture2D = {}

---Allows you to set the show only actors when Niagara manages the component.  If Niagara does not manage the component use the regular BP methods.
---@param NiagaraSystem UNiagaraComponent
---@param ParameterName string
---@param ShowOnlyActors TArray_AActor_
function UNiagaraDataInterfaceSceneCapture2D.SetSceneCapture2DManagedShowOnlyActors(NiagaraSystem, ParameterName, ShowOnlyActors) end

