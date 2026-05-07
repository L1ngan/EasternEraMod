---Object within PlayerController that processes player input.
---Only exists on the client in network games.
---@class UPlayerInput : UObject
---@field public DebugExecBindings TArray<FKeyBind> @Generic bindings of keys to Exec()-compatible strings for development purposes only
---@field public InvertedAxis TArray<string> @List of Axis Mappings that have been inverted
local UPlayerInput = {}

---Sets both X and Y axis sensitivity to the supplied value.
---@param Sensitivity number
function UPlayerInput:SetMouseSensitivity(Sensitivity) end

---Exec function to add a debug exec command
---@param BindName string
---@param Command string
function UPlayerInput:SetBind(BindName, Command) end

---Exec function to invert an axis key
---@param AxisKey FKey
function UPlayerInput:InvertAxisKey(AxisKey) end

---Exec function to invert an axis mapping
---@param AxisName string
function UPlayerInput:InvertAxis(AxisName) end

---Return's this object casted to a player controller. This can be null if there is no player controller.
---@return APlayerController
function UPlayerInput:GetOuterAPlayerController() end

---Exec function to reset mouse smoothing values
function UPlayerInput:ClearSmoothing() end

