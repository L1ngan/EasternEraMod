---@class UModularRigController : UObject
local UModularRigController = {}

---@param InModuleName string
---@param InVariableName string
---@param bSetupUndo boolean @[opt] 
---@return boolean
function UModularRigController:UnBindModuleVariable(InModuleName, InVariableName, bSetupUndo) end

---@param InOldClass TSubclassOf_UControlRig_
---@param InNewClass TSubclassOf_UControlRig_
---@param bSetupUndo boolean @[opt] 
---@return boolean
function UModularRigController:SwapModulesOfClass(InOldClass, InNewClass, bSetupUndo) end

---@param InModuleName string
---@param InNewClass TSubclassOf_UControlRig_
---@param bSetupUndo boolean @[opt] 
---@return boolean
function UModularRigController:SwapModuleClass(InModuleName, InNewClass, bSetupUndo) end

---@param InModuleNames TArray_string_
---@return boolean
function UModularRigController:SetModuleSelection(InModuleNames) end

---@param InModuleName string
---@param InVariableName string
---@param InValue string
---@param bSetupUndo boolean @[opt] 
---@return boolean
function UModularRigController:SetConfigValueInModule(InModuleName, InVariableName, InValue, bSetupUndo) end

---@param InModuleName string
---@param InSelected boolean @[opt] 
---@return boolean
function UModularRigController:SelectModule(InModuleName, InSelected) end

---@param InModuleName string
---@param InPath string
---@param bClearOverride boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@return boolean
function UModularRigController:ResetConfigValueInModule(InModuleName, InPath, bClearOverride, bSetupUndo) end

---@param InModuleName string
---@param InNewParentModuleName string
---@param bSetupUndo boolean @[opt] 
---@return boolean
function UModularRigController:ReparentModule(InModuleName, InNewParentModuleName, bSetupUndo) end

---@param InModuleName string
---@param InNewName string
---@param bSetupUndo boolean @[opt] 
---@return string
function UModularRigController:RenameModule(InModuleName, InNewName, bSetupUndo) end

---@param InModuleName string
---@param InSettings FRigVMMirrorSettings
---@param bSetupUndo boolean @[opt] 
---@return string
function UModularRigController:MirrorModule(InModuleName, InSettings, bSetupUndo) end

---@param InContent string
---@param InOptionalModuleNames TArray_string_
---@param bSetupUndo boolean @[opt] 
---@return boolean
function UModularRigController:ImportModuleSettingsFromString(InContent, InOptionalModuleNames, bSetupUndo) end

---@return TArray_string_
function UModularRigController:GetSelectedModules() end

---
---@param InModuleName string
---@return FRigModuleReference
function UModularRigController:GetModuleReference(InModuleName) end

---
---@param InModuleName string
---@return TArray_FRigElementKey_
function UModularRigController:GetConnectorsForModule(InModuleName) end

---@return TArray_string_
function UModularRigController:GetAllModules() end

---@param InModuleNames TArray_string_
---@return string
function UModularRigController:ExportModuleSettingsToString(InModuleNames) end

---@param bSetupUndo boolean @[opt] 
---@return TArray_FRigElementKey_
function UModularRigController:DisconnectCyclicConnectors(bSetupUndo) end

---@param InConnectorKey FRigElementKey
---@param bDisconnectSubModules boolean @[opt] 
---@param bSetupUndo boolean @[opt] 
---@return boolean
function UModularRigController:DisconnectConnector(InConnectorKey, bDisconnectSubModules, bSetupUndo) end

---@param InModuleName string
---@return boolean
function UModularRigController:DeselectModule(InModuleName) end

---@param InModuleName string
---@param bSetupUndo boolean @[opt] 
---@return boolean
function UModularRigController:DeleteModule(InModuleName, bSetupUndo) end

---@param InConnectorKey FRigElementKey
---@param InTargetKeys TArray_FRigElementKey_
---@param bSetupUndo boolean @[opt] 
---@param bAutoResolveOtherConnectors boolean @[opt] 
---@param bCheckValidConnection boolean @[opt] 
---@return boolean
function UModularRigController:ConnectConnectorToElements(InConnectorKey, InTargetKeys, bSetupUndo, bAutoResolveOtherConnectors, bCheckValidConnection) end

---@param InConnectorKey FRigElementKey
---@param InTargetKey FRigElementKey
---@param bSetupUndo boolean @[opt] 
---@param bAutoResolveOtherConnectors boolean @[opt] 
---@param bCheckValidConnection boolean @[opt] 
---@return boolean
function UModularRigController:ConnectConnectorToElement(InConnectorKey, InTargetKey, bSetupUndo, bAutoResolveOtherConnectors, bCheckValidConnection) end

---@param InConnectorKey FRigElementKey
---@param InTargetKeys TArray_FRigElementKey_
---@param OutErrorMessage string @[out] 
---@return boolean
function UModularRigController:CanConnectConnectorToElements(InConnectorKey, InTargetKeys, OutErrorMessage) end

---@param InConnectorKey FRigElementKey
---@param InTargetKey FRigElementKey
---@param OutErrorMessage string @[out] 
---@return boolean
function UModularRigController:CanConnectConnectorToElement(InConnectorKey, InTargetKey, OutErrorMessage) end

---@param InModuleName string
---@param InVariableName string
---@param InSourcePath string
---@param bSetupUndo boolean @[opt] 
---@return boolean
function UModularRigController:BindModuleVariable(InModuleName, InVariableName, InSourcePath, bSetupUndo) end

---@param InConnectorKeys TArray_FRigElementKey_
---@param bReplaceExistingConnections boolean
---@param bSetupUndo boolean @[opt] 
---@return boolean
function UModularRigController:AutoConnectSecondaryConnectors(InConnectorKeys, bReplaceExistingConnections, bSetupUndo) end

---@param InModuleNames TArray_string_
---@param bReplaceExistingConnections boolean
---@param bSetupUndo boolean @[opt] 
---@return boolean
function UModularRigController:AutoConnectModules(InModuleNames, bReplaceExistingConnections, bSetupUndo) end

---@param InConnectorKey FRigElementKey
---@param InTargetKey FRigElementKey
---@param bSetupUndo boolean @[opt] 
---@param bAutoResolveOtherConnectors boolean @[opt] 
---@param bCheckValidConnection boolean @[opt] 
---@return boolean
function UModularRigController:AddTargetToArrayConnector(InConnectorKey, InTargetKey, bSetupUndo, bAutoResolveOtherConnectors, bCheckValidConnection) end

---@param InModuleName string
---@param InClass TSubclassOf_UControlRig_
---@param InParentModuleName string
---@param bSetupUndo boolean @[opt] 
---@return string
function UModularRigController:AddModule(InModuleName, InClass, InParentModuleName, bSetupUndo) end

