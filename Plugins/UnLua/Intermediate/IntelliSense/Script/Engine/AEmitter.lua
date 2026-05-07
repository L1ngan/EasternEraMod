---@class AEmitter : AActor
---@field private ParticleSystemComponent UParticleSystemComponent
---@field public bDestroyOnSystemFinish boolean
---@field public bPostUpdateTickGroup boolean
---@field public bCurrentlyActive boolean @used to update status of toggleable level placed emitters on clients
---@field public OnParticleSpawn MulticastDelegate
---@field public OnParticleBurst MulticastDelegate
---@field public OnParticleDeath MulticastDelegate
---@field public OnParticleCollide MulticastDelegate
---@field private SpriteComponent UBillboardComponent
---@field private ArrowComponent UArrowComponent
local AEmitter = {}

function AEmitter:ToggleActive() end

---@param ParameterName string
---@param Param FVector
function AEmitter:SetVectorParameter(ParameterName, Param) end

---@param NewTemplate UParticleSystem
function AEmitter:SetTemplate(NewTemplate) end

---@param ParameterName string
---@param Param UMaterialInterface
function AEmitter:SetMaterialParameter(ParameterName, Param) end

---@param ParameterName string
---@param Param number
function AEmitter:SetFloatParameter(ParameterName, Param) end

---@param ParameterName string
---@param Param FLinearColor
function AEmitter:SetColorParameter(ParameterName, Param) end

---@param ParameterName string
---@param Param AActor
function AEmitter:SetActorParameter(ParameterName, Param) end

---Replication Notification Callbacks
function AEmitter:OnRep_bCurrentlyActive() end

---@param FinishedComponent UParticleSystemComponent
function AEmitter:OnParticleSystemFinished(FinishedComponent) end

---@return boolean
function AEmitter:IsActive() end

function AEmitter:Deactivate() end

---BEGIN DEPRECATED (use component functions now in level script)
function AEmitter:Activate() end

