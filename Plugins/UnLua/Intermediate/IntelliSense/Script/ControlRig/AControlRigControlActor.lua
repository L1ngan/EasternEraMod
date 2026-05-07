---@class AControlRigControlActor : AActor
---@field public ActorToTrack AActor
---@field public ControlRigClass TSubclassOf<UControlRig>
---@field public bRefreshOnTick boolean
---@field public bIsSelectable boolean
---@field public MaterialOverride UMaterialInterface
---@field public ColorParameter string
---@field public bCastShadows boolean
---@field private ActorRootComponent USceneComponent
---@field private ControlRig TSoftObjectPtr<UControlRig>
---@field private ControlNames TArray<string>
---@field private ShapeTransforms TArray<FTransform>
---@field private Components TArray<UStaticMeshComponent>
---@field private Materials TArray<UMaterialInstanceDynamic>
---@field private ColorParameterName string
local AControlRigControlActor = {}

function AControlRigControlActor:ResetControlActor() end

function AControlRigControlActor:Refresh() end

function AControlRigControlActor:Clear() end

