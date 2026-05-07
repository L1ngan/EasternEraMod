---This validator checks the format of the package on disk to make sure that is has not become corrupted since it was last saved.
---To disable the validator entirely, set ini:Editor:[/Script/DataValidation.PackageFileValidator]:bIsConfigDisabled=true
---To disable validation of payload hashes (which is much slower than the rest of the validation) set
---ini:Editor:[/Script/DataValidation.PackageFileValidator]:bValidatePayloadHashes=true
---@class UPackageFileValidator : UEditorValidatorBase
---@field private bValidatePayloadHashes boolean
local UPackageFileValidator = {}

