---Namespaced user data which provides access to a linked shape library
---@class UControlRigShapeLibraryLink : UNameSpacedUserData
---@field public ShapeLibrary TSoftObjectPtr<UControlRigShapeLibrary> @If assigned, the data asset link will provide access to the data asset's content.
---@field protected ShapeNames TArray<string>
---@field protected ShapeLibraryCached UControlRigShapeLibrary
local UControlRigShapeLibraryLink = {}

---@param InShapeLibrary TSoftObjectPtr_UControlRigShapeLibrary_
function UControlRigShapeLibraryLink:SetShapeLibrary(InShapeLibrary) end

---@return TSoftObjectPtr_UControlRigShapeLibrary_
function UControlRigShapeLibraryLink:GetShapeLibrary() end

