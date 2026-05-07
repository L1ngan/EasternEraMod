---* The EditorValidatorBase is a class which verifies that an asset meets a specific ruleset.
---* It should be used when checking engine-level classes, as UObject::IsDataValid requires
---* overriding the base class. You can create project-specific version of the validator base,
---* with custom logging and enabled logic.
---*
---* C++ and Blueprint validators will be gathered on editor start, while python validators need
---* to register themselves
---@class UEditorValidatorBase : UObject
---@field protected bIsEnabled boolean
---@field protected bIsConfigDisabled boolean @Allows disabling validators from config without checking in assets/modifying code.
---@field protected bOnlyPrintCustomMessage boolean @Whether we should also print out the source validator when printing validation errors.
---@field private CurrentObjectBeingValidated UObject
local UEditorValidatorBase = {}

---Override this in blueprint to validate assets
---@param InAsset UObject
---@return EDataValidationResult
function UEditorValidatorBase:K2_ValidateLoadedAsset(InAsset) end

---Override this to determine whether or not you can validate a given asset with this validator
---@param InAsset UObject
---@return boolean
function UEditorValidatorBase:K2_CanValidateAsset(InAsset) end

---Override this to determine whether or not you can use this validator given this usecase
---@param InUsecase EDataValidationUsecase
---@return boolean
function UEditorValidatorBase:K2_CanValidate(InUsecase) end

---@return EDataValidationResult
function UEditorValidatorBase:GetValidationResult() end

---Adds a message to this validation but doesn't mark it as failed.
---@param InAsset UObject
---@param InMessage string
function UEditorValidatorBase:AssetWarning(InAsset, InMessage) end

---Marks the validation as successful. Failure to call this will report the validator as not having checked the asset.
---@param InAsset UObject
function UEditorValidatorBase:AssetPasses(InAsset) end

---Marks the validation as failed and adds an error message.
---@param InAsset UObject
---@param InMessage string
function UEditorValidatorBase:AssetFails(InAsset, InMessage) end

