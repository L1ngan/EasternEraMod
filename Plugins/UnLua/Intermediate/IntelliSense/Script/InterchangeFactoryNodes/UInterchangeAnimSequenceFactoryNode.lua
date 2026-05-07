---@class UInterchangeAnimSequenceFactoryNode : UInterchangeFactoryBaseNode
local UInterchangeAnimSequenceFactoryNode = {}

---Set the optional existing USkeleton this animation must use. If this attribute is set and the skeleton is valid,
---the AnimSequence factory uses this skeleton instead of the one imported from GetCustomSkeletonFactoryNodeUid.
---Pipelines set this attribute when the user wants to specify an existing skeleton.
---@param AttributeValue FSoftObjectPath
---@return boolean
function UInterchangeAnimSequenceFactoryNode:SetCustomSkeletonSoftObjectPath(AttributeValue) end

---Set the unique ID of the skeleton factory node. Return false if the attribute cannot be set.
---@param AttributeValue string
---@return boolean
function UInterchangeAnimSequenceFactoryNode:SetCustomSkeletonFactoryNodeUid(AttributeValue) end

---Set the custom attribute RemoveCurveRedundantKeys. Return false if the attribute could not be set.
---@param AttributeValue boolean
---@return boolean
function UInterchangeAnimSequenceFactoryNode:SetCustomRemoveCurveRedundantKeys(AttributeValue) end

---Set the custom attribute MaterialDriveParameterOnCustomAttribute. Return false if the attribute could not be set.
---Note: If true, sets Material Curve Type for all custom attributes.
---@param AttributeValue boolean
---@return boolean
function UInterchangeAnimSequenceFactoryNode:SetCustomMaterialDriveParameterOnCustomAttribute(AttributeValue) end

---Set the import bone tracks sample rate. Return false if the attribute could not be set.
---@param AttributeValue number
---@return boolean
function UInterchangeAnimSequenceFactoryNode:SetCustomImportBoneTracksSampleRate(AttributeValue) end

---Set the import bone tracks end time in seconds. Return false if the attribute could not be set.
---@param AttributeValue number
---@return boolean
function UInterchangeAnimSequenceFactoryNode:SetCustomImportBoneTracksRangeStop(AttributeValue) end

---Set the import bone tracks start time in seconds. Return false if the attribute could not be set.
---@param AttributeValue number
---@return boolean
function UInterchangeAnimSequenceFactoryNode:SetCustomImportBoneTracksRangeStart(AttributeValue) end

---Set the import bone tracks state. Pass true to import bone tracks, or false to not import bone tracks.
---@param AttributeValue boolean
---@return boolean
function UInterchangeAnimSequenceFactoryNode:SetCustomImportBoneTracks(AttributeValue) end

---Set the import attribute curves state. Return false if the attribute could not be set.
---@param AttributeValue boolean
---@return boolean
function UInterchangeAnimSequenceFactoryNode:SetCustomImportAttributeCurves(AttributeValue) end

---Set the custom attribute DoNotImportCurveWithZero. Return false if the attribute could not be set.
---Note - If this attribute is enabled, only curves that have a value other than zero will be imported. This is to avoid adding extra curves to evaluate.
---@param AttributeValue boolean
---@return boolean
function UInterchangeAnimSequenceFactoryNode:SetCustomDoNotImportCurveWithZero(AttributeValue) end

---Set the custom attribute DeleteExistingNonCurveCustomAttributes. Return false if the attribute could not be set.
---Note - If true, all previous non-curve custom attributes are deleted if you reimport.
---@param AttributeValue boolean
---@return boolean
function UInterchangeAnimSequenceFactoryNode:SetCustomDeleteExistingNonCurveCustomAttributes(AttributeValue) end

---Set the custom attribute DeleteExistingMorphTargetCurves. Return false if the attribute could not be set.
---Note: If true, all previous morph target curves are deleted if you reimport.
---@param AttributeValue boolean
---@return boolean
function UInterchangeAnimSequenceFactoryNode:SetCustomDeleteExistingMorphTargetCurves(AttributeValue) end

---Set the custom attribute DeleteExistingCustomAttributeCurves. Return false if the attribute could not be set.
---Note - If true, all previous custom attribute curves are deleted if you reimport.
---@param AttributeValue boolean
---@return boolean
function UInterchangeAnimSequenceFactoryNode:SetCustomDeleteExistingCustomAttributeCurves(AttributeValue) end

---Set the custom attribute AddCurveMetadataToSkeleton. Return false if the attribute could not be set.
---Note - If this setting is disabled, curve metadata will be added to skeletal meshes for morph targets, but no metadata entry will be created for general curves.
---@param AttributeValue boolean
---@return boolean
function UInterchangeAnimSequenceFactoryNode:SetCustomAddCurveMetadataToSkeleton(AttributeValue) end

---@param SceneNodeAnimationPayloadKeyUids TMap_string__string_
---@param SceneNodeAnimationPayloadKeyTypes TMap_string__integer_
function UInterchangeAnimSequenceFactoryNode:SetAnimationPayloadKeysForSceneNodeUids(SceneNodeAnimationPayloadKeyUids, SceneNodeAnimationPayloadKeyTypes) end

---@param MorphTargetAnimationPayloadKeyUids TMap_string__string_
---@param MorphTargetAnimationPayloadKeyTypes TMap_string__integer_
function UInterchangeAnimSequenceFactoryNode:SetAnimationPayloadKeysForMorphTargetNodeUids(MorphTargetAnimationPayloadKeyUids, MorphTargetAnimationPayloadKeyTypes) end

---Add an animated material curve suffix.
---@param MaterialCurveSuffixe string
---@return boolean
function UInterchangeAnimSequenceFactoryNode:SetAnimatedMaterialCurveSuffixe(MaterialCurveSuffixe) end

---Add an animated attribute step curve name.
---@param AttributeStepCurveName string
---@return boolean
function UInterchangeAnimSequenceFactoryNode:SetAnimatedAttributeStepCurveName(AttributeStepCurveName) end

---Add an animated attribute curve name.
---@param AttributeCurveName string
---@return boolean
function UInterchangeAnimSequenceFactoryNode:SetAnimatedAttributeCurveName(AttributeCurveName) end

---Remove the specified animated material curve suffix.
---@param MaterialCurveSuffixe string
---@return boolean
function UInterchangeAnimSequenceFactoryNode:RemoveAnimatedMaterialCurveSuffixe(MaterialCurveSuffixe) end

---Remove the specified animated attribute step curve name.
---@param AttributeStepCurveName string
---@return boolean
function UInterchangeAnimSequenceFactoryNode:RemoveAnimatedAttributeStepCurveName(AttributeStepCurveName) end

---Remove the specified animated attribute curve name.
---@param AttributeCurveName string
---@return boolean
function UInterchangeAnimSequenceFactoryNode:RemoveAnimatedAttributeCurveName(AttributeCurveName) end

---Initialize node data.
---@param UniqueID string
---@param DisplayLabel string
---@param NodeContainer UInterchangeBaseNodeContainer
function UInterchangeAnimSequenceFactoryNode:InitializeAnimSequenceNode(UniqueID, DisplayLabel, NodeContainer) end

---@param OutSceneNodeAnimationPayloadKeys TMap_string__FInterchangeAnimationPayLoadKey_ @[out] 
function UInterchangeAnimSequenceFactoryNode:GetSceneNodeAnimationPayloadKeys(OutSceneNodeAnimationPayloadKeys) end

---@param OutMorphTargetNodeAnimationPayloads TMap_string__FInterchangeAnimationPayLoadKey_ @[out] 
function UInterchangeAnimSequenceFactoryNode:GetMorphTargetNodeAnimationPayloadKeys(OutMorphTargetNodeAnimationPayloads) end

---Query the optional existing USkeleton this animation must use. If this attribute is set and the skeleton is valid,
---the AnimSequence factory uses this skeleton instead of the one imported from GetCustomSkeletonFactoryNodeUid.
---Pipelines set this attribute when the user wants to specify an existing skeleton.
---Return false if the attribute was not set.
---@param AttributeValue FSoftObjectPath @[out] 
---@return boolean
function UInterchangeAnimSequenceFactoryNode:GetCustomSkeletonSoftObjectPath(AttributeValue) end

---Get the unique ID of the skeleton factory node. Return false if the attribute is not set.
---@param AttributeValue string @[out] 
---@return boolean
function UInterchangeAnimSequenceFactoryNode:GetCustomSkeletonFactoryNodeUid(AttributeValue) end

---Get the custom attribute RemoveCurveRedundantKeys. Return false if the attribute is not set.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeAnimSequenceFactoryNode:GetCustomRemoveCurveRedundantKeys(AttributeValue) end

---Get the custom attribute MaterialDriveParameterOnCustomAttribute. Return false if the attribute is not set.
---Note: If true, sets Material Curve Type for all custom attributes.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeAnimSequenceFactoryNode:GetCustomMaterialDriveParameterOnCustomAttribute(AttributeValue) end

---Get the import bone tracks sample rate. Return false if the attribute is not set.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeAnimSequenceFactoryNode:GetCustomImportBoneTracksSampleRate(AttributeValue) end

---Get the import bone tracks end time in seconds. Return false if the attribute is not set.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeAnimSequenceFactoryNode:GetCustomImportBoneTracksRangeStop(AttributeValue) end

---Get the import bone tracks start time in seconds. Return false if the attribute is not set.
---@param AttributeValue number @[out] 
---@return boolean
function UInterchangeAnimSequenceFactoryNode:GetCustomImportBoneTracksRangeStart(AttributeValue) end

---Get the import bone tracks state. If the attribute is true, bone tracks are imported. If the attribute
---is false, bone tracks are not imported.
---Return false if the attribute is not set. Return true if the attribute exists and can be queried.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeAnimSequenceFactoryNode:GetCustomImportBoneTracks(AttributeValue) end

---Get the import attribute curves state. If true, all user custom attributes on nodes are imported.
---Return false if the attribute is not set.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeAnimSequenceFactoryNode:GetCustomImportAttributeCurves(AttributeValue) end

---Get the custom attribute DoNotImportCurveWithZero. Return false if the attribute is not set.
---Note - If this attribute is enabled, only curves that have a value other than zero will be imported. This is to avoid adding extra curves to evaluate.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeAnimSequenceFactoryNode:GetCustomDoNotImportCurveWithZero(AttributeValue) end

---Get the custom attribute DeleteExistingNonCurveCustomAttributes. Return false if the attribute is not set.
---Note - If true, all previous non-curve custom attributes are deleted if you reimport.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeAnimSequenceFactoryNode:GetCustomDeleteExistingNonCurveCustomAttributes(AttributeValue) end

---Get the custom attribute DeleteExistingMorphTargetCurves. Return false if the attribute is not set.
---Note: If true, all previous morph target curves are deleted if you reimport.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeAnimSequenceFactoryNode:GetCustomDeleteExistingMorphTargetCurves(AttributeValue) end

---Get the custom attribute DeleteExistingCustomAttributeCurves. Return false if the attribute is not set.
---Note - If true, all previous custom attribute curves are deleted if you reimport.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeAnimSequenceFactoryNode:GetCustomDeleteExistingCustomAttributeCurves(AttributeValue) end

---Get the custom attribute AddCurveMetadataToSkeleton. Return false if the attribute is not set.
---Note - If this setting is disabled, curve metadata will be added to skeletal meshes for morph targets, but no metadata entry will be created for general curves.
---@param AttributeValue boolean @[out] 
---@return boolean
function UInterchangeAnimSequenceFactoryNode:GetCustomAddCurveMetadataToSkeleton(AttributeValue) end

---Return the number of animated material curve suffixes this anim sequence drives. Curves are FRichCurve of type float.
---@return integer
function UInterchangeAnimSequenceFactoryNode:GetAnimatedMaterialCurveSuffixesCount() end

---Get all animated material curve suffixes.
---@param OutMaterialCurveSuffixes TArray_string_ @[out] 
function UInterchangeAnimSequenceFactoryNode:GetAnimatedMaterialCurveSuffixes(OutMaterialCurveSuffixes) end

---Get the animated material curve suffix with the specified index.
---@param Index integer
---@param OutMaterialCurveSuffixe string @[out] 
function UInterchangeAnimSequenceFactoryNode:GetAnimatedMaterialCurveSuffixe(Index, OutMaterialCurveSuffixe) end

---Return the number of animated attribute step curve names this anim sequence drives.
---@return integer
function UInterchangeAnimSequenceFactoryNode:GetAnimatedAttributeStepCurveNamesCount() end

---Get all animated attribute step curve names.
---@param OutAttributeStepCurveNames TArray_string_ @[out] 
function UInterchangeAnimSequenceFactoryNode:GetAnimatedAttributeStepCurveNames(OutAttributeStepCurveNames) end

---Get the animated attribute step curve name at the specified index.
---@param Index integer
---@param OutAttributeStepCurveName string @[out] 
function UInterchangeAnimSequenceFactoryNode:GetAnimatedAttributeStepCurveName(Index, OutAttributeStepCurveName) end

---Return the number of animated attribute curve names this anim sequence drives. Curves are FRichCurve of type float.
---@return integer
function UInterchangeAnimSequenceFactoryNode:GetAnimatedAttributeCurveNamesCount() end

---Get all animated attribute curve names.
---@param OutAttributeCurveNames TArray_string_ @[out] 
function UInterchangeAnimSequenceFactoryNode:GetAnimatedAttributeCurveNames(OutAttributeCurveNames) end

---Get the animated attribute curve name at the specified index.
---@param Index integer
---@param OutAttributeCurveName string @[out] 
function UInterchangeAnimSequenceFactoryNode:GetAnimatedAttributeCurveName(Index, OutAttributeCurveName) end

