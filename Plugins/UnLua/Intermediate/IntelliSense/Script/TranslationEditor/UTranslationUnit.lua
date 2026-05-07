---@class UTranslationUnit : UObject
---@field public Namespace string @The localization namespace for this translation
---@field public Key string @The localization key for this translation
---@field public Source string @Original text from the source language
---@field public Translation string @Translations
---@field public Contexts TArray<FTranslationContextInfo> @Contexts the source was found in
---@field public HasBeenReviewed boolean @Whether the changes have been reviewed
---@field public TranslationBeforeImport string @If this Translation Unit had a different translation before import, it will be stored here
---@field public LocresPath string @Optional: Which Locres File this translation is in
local UTranslationUnit = {}

