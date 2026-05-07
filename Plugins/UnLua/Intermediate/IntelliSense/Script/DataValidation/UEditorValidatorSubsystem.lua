---UEditorValidatorSubsystem manages all the asset validation in the engine.
---The first validation handled is UObject::IsDataValid and its overridden functions.
---Those validations require custom classes and are most suited to project-specific
---classes.
---The next validation set is of all registered UEditorValidationBases. These validators
---have a function to determine if they can validate a given asset, and if they are
---currently enabled. They are good candidates for validating engine classes or
---very specific project logic.
---Finally, this subsystem may be subclassed to change the overally behavior of
---validation in your project. If a subclass exist in your project module, it will
---supercede the engine validation subsystem.
---@class UEditorValidatorSubsystem : UEditorSubsystem
---@field protected ExcludedDirectories TArray<FDirectoryPath> @Directories to ignore for data validation. Useful for test assets
---@field protected bValidateOnSave boolean @Whether it should validate assets on save inside the editor
---@field protected Validators TMap<FTopLevelAssetPath, UEditorValidatorBase> @Active validator instances, mapped from their class.
---@field protected bAllowBlueprintValidators boolean @Specifies whether or not to allow Blueprint validators
local UEditorValidatorSubsystem = {}

---@param InChangelists TArray_UDataValidationChangelist_
---@param InSettings FValidateAssetsSettings
---@param OutResults FValidateAssetsResults @[out] 
---@return EDataValidationResult
function UEditorValidatorSubsystem:ValidateChangelists(InChangelists, InSettings, OutResults) end

---Called to validate assets from either the UI or a commandlet.
---Loads the specified assets and runs all registered validators on them.
---Populates the message log with errors and warnings with clickable links.
---@param InChangelist UDataValidationChangelist
---@param InSettings FValidateAssetsSettings
---@param OutResults FValidateAssetsResults @[out] 
---@return EDataValidationResult
function UEditorValidatorSubsystem:ValidateChangelist(InChangelist, InSettings, OutResults) end

---Called to validate assets from either the UI or a commandlet.
---Loads the specified assets and runs all registered validators on them.
---Populates the message log with errors and warnings with clickable links.
---@param AssetDataList TArray_FAssetData_
---@param InSettings FValidateAssetsSettings
---@param OutResults FValidateAssetsResults @[out] 
---@return integer
function UEditorValidatorSubsystem:ValidateAssetsWithSettings(AssetDataList, InSettings, OutResults) end

---* Removes a validator
---* Should be called during module shutdown if a validator was added.
---@param InValidator UEditorValidatorBase
function UEditorValidatorSubsystem:RemoveValidator(InValidator) end

---Runs registered validators on the provided object.
---Does not add anything to any FMessageLog tabs.
---@param InObject UObject
---@param ValidationErrors TArray_string_ @[out] 
---@param ValidationWarnings TArray_string_ @[out] 
---@param InValidationUsecase EDataValidationUsecase
---@return EDataValidationResult
function UEditorValidatorSubsystem:IsObjectValid(InObject, ValidationErrors, ValidationWarnings, InValidationUsecase) end

---Loads the object referred to by the provided AssetData and runs registered validators on it.
---Does not add anything to any FMessageLog tabs.
---@param AssetData FAssetData
---@param ValidationErrors TArray_string_ @[out] 
---@param ValidationWarnings TArray_string_ @[out] 
---@param InValidationUsecase EDataValidationUsecase
---@return EDataValidationResult
function UEditorValidatorSubsystem:IsAssetValid(AssetData, ValidationErrors, ValidationWarnings, InValidationUsecase) end

---* Adds a validator to the list, making sure it is a unique instance
---@param InValidator UEditorValidatorBase
function UEditorValidatorSubsystem:AddValidator(InValidator) end

