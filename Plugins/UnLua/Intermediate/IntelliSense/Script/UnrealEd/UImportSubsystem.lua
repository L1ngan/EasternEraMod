---UImportSubsystem
---Subsystem for importing assets in the editor,
---Contains utility functions and callbacks for hooking into importing.
---@class UImportSubsystem : UEditorSubsystem
---@field private OnAssetPreImport_BP MulticastDelegate
---@field private OnAssetPostImport_BP MulticastDelegate
---@field private OnAssetReimport_BP MulticastDelegate
---@field private OnAssetPostLODImport_BP MulticastDelegate
local UImportSubsystem = {}

---delegate type fired when new assets have been reimported. Note: InCreatedObject can be NULL if import failed. Params: UObject* InCreatedObject
---@param InCreatedObject UObject
function UImportSubsystem:OnAssetReimport_Dyn__DelegateSignature(InCreatedObject) end

---delegate type fired when new assets are being (re-)imported. Params: UFactory* InFactory, UClass* InClass, UObject* InParent, const FName& Name, const TCHAR* Type
---@param InFactory UFactory
---@param InClass TSubclassOf_UObject_
---@param InParent UObject
---@param Name string
---@param Type string
function UImportSubsystem:OnAssetPreImport_Dyn__DelegateSignature(InFactory, InClass, InParent, Name, Type) end

---delegate type fired when new LOD have been imported to an asset.
---@param InObject UObject
---@param InLODIndex integer
function UImportSubsystem:OnAssetPostLODImport_Dyn__DelegateSignature(InObject, InLODIndex) end

---delegate type fired when new assets have been (re-)imported. Note: InCreatedObject can be NULL if import failed. Params: UFactory* InFactory, UObject* InCreatedObject
---@param InFactory UFactory
---@param InCreatedObject UObject
function UImportSubsystem:OnAssetPostImport_Dyn__DelegateSignature(InFactory, InCreatedObject) end

