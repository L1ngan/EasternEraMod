---Network physics component to add to actors or pawns that control their physic simulation through applying inputs,
---and should support networking through physics resimulation.
---@class UNetworkPhysicsComponent : UActorComponent
---@field protected ReplicatedDeltaSourceInput FNetworkPhysicsRewindDataDeltaSourceInputProxy @replicated physics input, used for delta serialization
---@field protected ReplicatedDeltaSourceState FNetworkPhysicsRewindDataDeltaSourceStateProxy @replicated physics states, used for delta serialization
---@field protected ReplicatedImportantInput FNetworkPhysicsRewindDataImportantInputProxy @replicated important physics input
---@field protected ReplicatedImportantState FNetworkPhysicsRewindDataImportantStateProxy @replicated important physics state
---@field protected ReplicatedInputs FNetworkPhysicsRewindDataInputProxy @replicated physics inputs for owner client
---@field protected ReplicatedRemoteInputs FNetworkPhysicsRewindDataRemoteInputProxy @replicated physics inputs for remote clients
---@field protected ReplicatedStates FNetworkPhysicsRewindDataStateProxy @replicated physics states
---@field private InputsToNetwork_Owner integer @The number of inputs the owning client should send to the server with each RPC, replicated from the server. This is dynamically scaled based on when there are holes in the inputs buffer if np2.Resim.DynamicInputScaling.Enabled is enabled
local UNetworkPhysicsComponent = {}

---Server RPC to receive inputs from client
---@param ClientInputs FNetworkPhysicsRewindDataInputProxy
function UNetworkPhysicsComponent:ServerReceiveInputData(ClientInputs) end

---Server RPC to receive important inputs from client
---@param ClientInputs FNetworkPhysicsRewindDataImportantInputProxy
function UNetworkPhysicsComponent:ServerReceiveImportantInputData(ClientInputs) end

---Server RPC to acknowledge which Delta Source State Frame the owning client has received
---@param Frame integer
function UNetworkPhysicsComponent:ServerReceiveDeltaSourceStateFrame(Frame) end

---Server RPC to acknowledge which Delta Source Input Frame the owning client has received
---@param Frame integer
function UNetworkPhysicsComponent:ServerReceiveDeltaSourceInputFrame(Frame) end

---repnotify for the states on the client
function UNetworkPhysicsComponent:OnRep_SetReplicatedStates() end

---repnotify for inputs on remote clients
function UNetworkPhysicsComponent:OnRep_SetReplicatedRemoteInputs() end

---repnotify for inputs on owner client
function UNetworkPhysicsComponent:OnRep_SetReplicatedInputs() end

---repnotify for state, used for delta serialization
function UNetworkPhysicsComponent:OnRep_SetReplicatedDeltaSourceState() end

---repnotify for input, used for delta serialization
function UNetworkPhysicsComponent:OnRep_SetReplicatedDeltaSourceInput() end

---Client RPC to receive important states from server
---@param ServerStates FNetworkPhysicsRewindDataImportantStateProxy
function UNetworkPhysicsComponent:MulticastReceiveImportantStateData(ServerStates) end

---Client RPC to receive important inputs from server
---@param ServerInputs FNetworkPhysicsRewindDataImportantInputProxy
function UNetworkPhysicsComponent:MulticastReceiveImportantInputData(ServerInputs) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UNetworkPhysicsComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UNetworkPhysicsComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UNetworkPhysicsComponent:AddAssetUserDataOfClass(InUserDataClass) end

