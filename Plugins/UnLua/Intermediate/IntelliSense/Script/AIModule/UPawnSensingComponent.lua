---@class UPawnSensingComponent : UActorComponent
---@field public HearingThreshold number @Max distance at which a makenoise(1.0) loudness sound can be heard, regardless of occlusion
---@field public LOSHearingThreshold number @Max distance at which a makenoise(1.0) loudness sound can be heard if unoccluded (LOSHearingThreshold should be > HearingThreshold)
---@field public SightRadius number @Maximum sight distance.
---@field public SensingInterval number @Amount of time between pawn sensing updates. Use SetSensingInterval() to adjust this at runtime. A value <= 0 prevents any updates.
---@field public HearingMaxSoundAge number @Max age of sounds we can hear. Should be greater than SensingInterval, or you might miss hearing some sounds!
---@field public bEnableSensingUpdates boolean @If true, component will perform sensing updates. At runtime change this using SetSensingUpdatesEnabled().
---@field public bOnlySensePlayers boolean @If true, will only sense player-controlled pawns in the world. Default: true
---@field public bSeePawns boolean @If true, we will perform visibility tests and will trigger notifications when a Pawn is visible. Default: true
---@field public bHearNoises boolean @If true, we will perform audibility tests and will be notified when a Pawn makes a noise that can be heard. Default: true IMPORTANT NOTE: If we can see pawns (bSeePawns is true), and the pawn is visible, noise notifications are not triggered.
---@field public OnSeePawn MulticastDelegate @Delegate to execute when we see a Pawn.
---@field public OnHearNoise MulticastDelegate @Delegate to execute when we hear a noise from a Pawn's PawnNoiseEmitterComponent.
---@field protected PeripheralVisionAngle number @How far to the side AI can see, in degrees. Use SetPeripheralVisionAngle to change the value at runtime.
---@field protected PeripheralVisionCosine number @Cosine of limits of peripheral vision. Computed from PeripheralVisionAngle.
local UPawnSensingComponent = {}

---Enables or disables sensing updates. The timer is reset in either case.
---@param bEnabled boolean
function UPawnSensingComponent:SetSensingUpdatesEnabled(bEnabled) end

---Changes the SensingInterval.
---If we are currently waiting for an interval, this can either extend or shorten that interval.
---A value <= 0 prevents any updates.
---@param NewSensingInterval number
function UPawnSensingComponent:SetSensingInterval(NewSensingInterval) end

---Sets PeripheralVisionAngle. Calculates PeripheralVisionCosine from PeripheralVisionAngle
---@param NewPeripheralVisionAngle number
function UPawnSensingComponent:SetPeripheralVisionAngle(NewPeripheralVisionAngle) end

---@param Pawn APawn
function UPawnSensingComponent:SeePawnDelegate__DelegateSignature(Pawn) end

---@param Instigator APawn
---@param Location FVector
---@param Volume number
function UPawnSensingComponent:HearNoiseDelegate__DelegateSignature(Instigator, Location, Volume) end

---@return number
function UPawnSensingComponent:GetPeripheralVisionCosine() end

---@return number
function UPawnSensingComponent:GetPeripheralVisionAngle() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPawnSensingComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPawnSensingComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPawnSensingComponent:AddAssetUserDataOfClass(InUserDataClass) end

