---Movie scene animation for Actors.
---@class ULevelSequence : UMovieSceneSequence
---@field public MovieScene UMovieScene @Pointer to the movie scene that controls this animation.
---@field protected BindingReferences FUpgradedLevelSequenceBindingReferences @References to bound objects.
---@field protected DirectorBlueprint UBlueprint @A pointer to the director blueprint that generates this sequence's DirectorClass.
---@field protected DirectorClass TSubclassOf<UObject> @The class that is used to spawn this level sequence's director instance. Director instances are allocated on-demand one per sequence during evaluation and are used by event tracks for triggering events.
---@field private MetaDataObjects TArray<UObject> @Array of meta-data objects associated with this level sequence. Each pointer may implement the ILevelSequenceMetaData interface in order to hook into default ULevelSequence functionality.
---@field protected AssetUserData TArray<UAssetUserData> @Array of user data stored with the asset
local ULevelSequence = {}

---Remove meta-data of a particular type for this level sequence instance, if it exists
---@param InClass TSubclassOf_UObject_
function ULevelSequence:RemoveMetaDataByClass(InClass) end

---Find meta-data of a particular type for this level sequence instance, adding it if it doesn't already exist.
---@param InClass TSubclassOf_UObject_
---@return UObject
function ULevelSequence:FindOrAddMetaDataByClass(InClass) end

---Find meta-data of a particular type for this level sequence instance.
---@param InClass TSubclassOf_UObject_
---@return UObject
function ULevelSequence:FindMetaDataByClass(InClass) end

---Copy the specified meta data into this level sequence, overwriting any existing meta-data of the same type
---Meta-data may implement the ILevelSequenceMetaData interface in order to hook into default ULevelSequence functionality.
---@param InMetaData UObject
---@return UObject
function ULevelSequence:CopyMetaData(InMetaData) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULevelSequence:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function ULevelSequence:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULevelSequence:AddAssetUserDataOfClass(InUserDataClass) end

