---A movie scene section containing data for material parameters.
---@class UMovieSceneComponentMaterialParameterSection : UMovieSceneSection
---@field public ScalarParameterInfosAndCurves TArray<FScalarMaterialParameterInfoAndCurve> @The scalar parameter infos and their associated curves.
---@field public ColorParameterInfosAndCurves TArray<FColorMaterialParameterInfoAndCurves> @The color parameter infos and their associated curves.
local UMovieSceneComponentMaterialParameterSection = {}

---Removes a scalar parameter from this section.
---@param InParameterInfo FMaterialParameterInfo
---@return boolean
function UMovieSceneComponentMaterialParameterSection:RemoveScalarParameter(InParameterInfo) end

---Removes a color parameter from this section.
---@param InParameterInfo FMaterialParameterInfo
---@return boolean
function UMovieSceneComponentMaterialParameterSection:RemoveColorParameter(InParameterInfo) end

---Adds a a key for a specific scalar parameter at the specified time with the specified value.
---@param InParameterInfo FMaterialParameterInfo
---@param InTime FFrameNumber
---@param InValue number
---@param InLayerName string
---@param InAssetName string
function UMovieSceneComponentMaterialParameterSection:AddScalarParameterKey(InParameterInfo, InTime, InValue, InLayerName, InAssetName) end

---Adds a a key for a specific color parameter at the specified time with the specified value.
---@param InParameterInfo FMaterialParameterInfo
---@param InTime FFrameNumber
---@param InValue FLinearColor
---@param InLayerName string
---@param InAssetName string
---@param InChannelNames FParameterChannelNames @[opt] 
function UMovieSceneComponentMaterialParameterSection:AddColorParameterKey(InParameterInfo, InTime, InValue, InLayerName, InAssetName, InChannelNames) end

