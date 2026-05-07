---Manages ULevelSequence meta data that is common for rating shots in cinematic workflows.
---Manages access to UMovieSceneShotsMetaData for ULevelSequences.
---@class ULevelSequenceShotMetaDataLibrary : UBlueprintFunctionLibrary
local ULevelSequenceShotMetaDataLibrary = {}

---Sets whether this is a subsequence.
---@param InLevelSequence ULevelSequence
---@param bInIsSubSequence boolean
function ULevelSequenceShotMetaDataLibrary.SetIsSubSequence(InLevelSequence, bInIsSubSequence) end

---Sets whether this sequence was recorded.
---@param InLevelSequence ULevelSequence
---@param bInIsRecorded boolean
function ULevelSequenceShotMetaDataLibrary.SetIsRecorded(InLevelSequence, bInIsRecorded) end

---Sets whether the user has marked this shot as no good.
---@param InLevelSequence ULevelSequence
---@param bInIsNoGood boolean
function ULevelSequenceShotMetaDataLibrary.SetIsNoGood(InLevelSequence, bInIsNoGood) end

---Sets whether this was flagged by a user.
---@param InLevelSequence ULevelSequence
---@param bInIsFlagged boolean
function ULevelSequenceShotMetaDataLibrary.SetIsFlagged(InLevelSequence, bInIsFlagged) end

---Sets the favorite rating. The favorite rating is like a star rating, usually 1-3 if it was rated.
---@param InLevelSequence ULevelSequence
---@param InFavoriteRating integer
function ULevelSequenceShotMetaDataLibrary.SetFavoriteRating(InLevelSequence, InFavoriteRating) end

---
---@param InAssetData FAssetData
---@return boolean
function ULevelSequenceShotMetaDataLibrary.HasIsSubSequenceByAssetData(InAssetData) end

---
---@param InLevelSequence ULevelSequence
---@return boolean
function ULevelSequenceShotMetaDataLibrary.HasIsSubSequence(InLevelSequence) end

---
---@param InAssetData FAssetData
---@return boolean
function ULevelSequenceShotMetaDataLibrary.HasIsRecordedByAssetData(InAssetData) end

---
---@param InLevelSequence ULevelSequence
---@return boolean
function ULevelSequenceShotMetaDataLibrary.HasIsRecorded(InLevelSequence) end

---
---@param InAssetData FAssetData
---@return boolean
function ULevelSequenceShotMetaDataLibrary.HasIsNoGoodByAssetData(InAssetData) end

---
---@param InLevelSequence ULevelSequence
---@return boolean
function ULevelSequenceShotMetaDataLibrary.HasIsNoGood(InLevelSequence) end

---
---@param InAssetData FAssetData
---@return boolean
function ULevelSequenceShotMetaDataLibrary.HasIsFlaggedByAssetData(InAssetData) end

---
---@param InLevelSequence ULevelSequence
---@return boolean
function ULevelSequenceShotMetaDataLibrary.HasIsFlagged(InLevelSequence) end

---
---@param InAssetData FAssetData
---@return boolean
function ULevelSequenceShotMetaDataLibrary.HasFavoriteRatingByAssetData(InAssetData) end

---
---@param InLevelSequence ULevelSequence
---@return boolean
function ULevelSequenceShotMetaDataLibrary.HasFavoriteRating(InLevelSequence) end

---Gets whether this was recorded as a sub sequence.
---@param InAssetData FAssetData
---@param bOutIsSubSequence boolean @[out] 
---@return boolean
function ULevelSequenceShotMetaDataLibrary.GetIsSubSequenceByAssetData(InAssetData, bOutIsSubSequence) end

---
---@return string
function ULevelSequenceShotMetaDataLibrary.GetIsSubSequenceAssetTag() end

---Gets whether this was recorded as a subsequence.
---@param InLevelSequence ULevelSequence
---@param bOutIsSubSequence boolean @[out] 
---@return boolean
function ULevelSequenceShotMetaDataLibrary.GetIsSubSequence(InLevelSequence, bOutIsSubSequence) end

---Gets whether this was recorded.
---@param InAssetData FAssetData
---@param bOutIsRecorded boolean @[out] 
---@return boolean
function ULevelSequenceShotMetaDataLibrary.GetIsRecordedByAssetData(InAssetData, bOutIsRecorded) end

---
---@return string
function ULevelSequenceShotMetaDataLibrary.GetIsRecordedAssetTag() end

---Gets whether this was recorded.
---@param InLevelSequence ULevelSequence
---@param bOutIsRecorded boolean @[out] 
---@return boolean
function ULevelSequenceShotMetaDataLibrary.GetIsRecorded(InLevelSequence, bOutIsRecorded) end

---Gets whether the user has marked this shot as no good.
---@param InAssetData FAssetData
---@param bOutNoGood boolean @[out] 
---@return boolean
function ULevelSequenceShotMetaDataLibrary.GetIsNoGoodByAssetData(InAssetData, bOutNoGood) end

---
---@return string
function ULevelSequenceShotMetaDataLibrary.GetIsNoGoodAssetTag() end

---Gets whether the user has marked this shot as no good.
---@param InLevelSequence ULevelSequence
---@param bOutNoGood boolean @[out] 
---@return boolean
function ULevelSequenceShotMetaDataLibrary.GetIsNoGood(InLevelSequence, bOutNoGood) end

---Gets whether this was flagged by a user.
---@param InAssetData FAssetData
---@param bOutIsFlagged boolean @[out] 
---@return boolean
function ULevelSequenceShotMetaDataLibrary.GetIsFlaggedByAssetData(InAssetData, bOutIsFlagged) end

---
---@return string
function ULevelSequenceShotMetaDataLibrary.GetIsFlaggedAssetTag() end

---Gets whether this was flagged by a user.
---@param InLevelSequence ULevelSequence
---@param bOutIsFlagged boolean @[out] 
---@return boolean
function ULevelSequenceShotMetaDataLibrary.GetIsFlagged(InLevelSequence, bOutIsFlagged) end

---Gets the favorite rating. The favorite rating is like a star rating, usually 1-3 if it was rated.
---@param InAssetData FAssetData
---@param OutFavoriteRating integer @[out] 
---@return boolean
function ULevelSequenceShotMetaDataLibrary.GetFavoriteRatingByAssetData(InAssetData, OutFavoriteRating) end

---
---@return string
function ULevelSequenceShotMetaDataLibrary.GetFavoriteRatingAssetTag() end

---Gets the favorite rating. The favorite rating is like a star rating, usually 1-3 if it was rated.
---@param InLevelSequence ULevelSequence
---@param OutFavoriteRating integer @[out] 
---@return boolean
function ULevelSequenceShotMetaDataLibrary.GetFavoriteRating(InLevelSequence, OutFavoriteRating) end

---Clear IsSubSequence flag.
---@param InLevelSequence ULevelSequence
function ULevelSequenceShotMetaDataLibrary.ClearIsSubSequence(InLevelSequence) end

---Clear IsRecorded flag.
---@param InLevelSequence ULevelSequence
function ULevelSequenceShotMetaDataLibrary.ClearIsRecorded(InLevelSequence) end

---Clear the IsNoGood flag.
---@param InLevelSequence ULevelSequence
function ULevelSequenceShotMetaDataLibrary.ClearIsNoGood(InLevelSequence) end

---Clear IsFlagged flag.
---@param InLevelSequence ULevelSequence
function ULevelSequenceShotMetaDataLibrary.ClearIsFlagged(InLevelSequence) end

---Clears the favorite rating.
---@param InLevelSequence ULevelSequence
function ULevelSequenceShotMetaDataLibrary.ClearFavoriteRating(InLevelSequence) end

