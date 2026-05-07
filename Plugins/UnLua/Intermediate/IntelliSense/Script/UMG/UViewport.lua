---@class UViewport : UContentWidget
---@field public BackgroundColor FLinearColor
local UViewport = {}

---@param ActorClass TSubclassOf_AActor_
---@return AActor
function UViewport:Spawn(ActorClass) end

---@param Rotation FRotator
function UViewport:SetViewRotation(Rotation) end

---@param Location FVector
function UViewport:SetViewLocation(Location) end

---@param LightIntensity number
function UViewport:SetSkyIntensity(LightIntensity) end

---@param InShowFlagName string
---@param InValue boolean
function UViewport:SetShowFlag(InShowFlagName, InValue) end

---@param LightIntensity number
function UViewport:SetLightIntensity(LightIntensity) end

---@param InEnableAdvancedFeatures boolean
function UViewport:SetEnableAdvancedFeatures(InEnableAdvancedFeatures) end

---@return FRotator
function UViewport:GetViewRotation() end

---@return FMatrix
function UViewport:GetViewProjectionMatrix() end

---@return UWorld
function UViewport:GetViewportWorld() end

---@return FVector
function UViewport:GetViewLocation() end

