---@class UAnimSequenceBase : UAnimationAsset
---@field public Notifies TArray<FAnimNotifyEvent> @Animation notifies, sorted by time (earliest notification first).
---@field protected SequenceLength number
---@field protected RawCurveData FRawCurveTracks
---@field public RateScale number @Number for tweaking playback rate of this animation globally.
---@field public bLoop boolean @The default looping behavior of this animation. Asset players can override this
---@field public AnimNotifyTracks TArray<FAnimNotifyTrack> @if you change Notifies array, this will need to be rebuilt
---@field protected DataModel UAnimDataModel
---@field protected DataModelInterface TScriptInterface<UAnimationDataModel> @IAnimationDataModel instance containing (source) animation data
---@field protected Controller TScriptInterface<UAnimationDataController> @UAnimDataController instance set to operate on DataModel
local UAnimSequenceBase = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAnimSequenceBase:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UAnimSequenceBase:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAnimSequenceBase:AddAssetUserDataOfClass(InUserDataClass) end

