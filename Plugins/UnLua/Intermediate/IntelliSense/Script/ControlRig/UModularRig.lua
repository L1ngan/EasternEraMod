---Runs logic for mapping input data to transforms (the "Rig")
---@class UModularRig : UControlRig
---@field public Modules TArray<FRigModuleInstance>
---@field public ModularRigSettings FModularRigSettings @END ControlRig
---@field public ModularRigModel FModularRigModel
---@field public ExecutionQueue TArray<FRigModuleExecutionElement>
local UModularRig = {}

---
---@param InModulePath string
---@return string
function UModularRig:GetParentPathForBP(InModulePath) end

---
---@param InModuleName string
---@return string
function UModularRig:GetParentModuleNameForBP(InModuleName) end

---
---@param InModuleName string
---@return UControlRig
function UModularRig:GetModuleRigByName(InModuleName) end

---
---@param InModulePath string
---@return UControlRig
function UModularRig:GetModuleRig(InModulePath) end

---
---@return TArray_string_
function UModularRig:GetModulePaths() end

---
---@return TArray_string_
function UModularRig:GetModuleNames() end

---
---@param InModuleName string
---@return TArray_string_
function UModularRig:GetEventsForModuleByName(InModuleName) end

---
---@param InModulePath string
---@return TArray_string_
function UModularRig:GetEventsForModule(InModulePath) end

---
---@return TArray_string_
function UModularRig:GetEventsForAllModules() end

---
---@param InEvent string
---@param InModulePath string
---@return boolean
function UModularRig:ExecuteEventOnModuleForBP(InEvent, InModulePath) end

---
---@param InEvent string
---@param InModuleName string
---@return boolean
function UModularRig:ExecuteEventOnModuleByNameForBP(InEvent, InModuleName) end

---
---@param InEvent string
---@return TArray_string_
function UModularRig:ExecuteEventOnAllModules(InEvent) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UModularRig:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UModularRig:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UModularRig:AddAssetUserDataOfClass(InUserDataClass) end

