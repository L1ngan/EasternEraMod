---@class UMetaHumanComponentBase : UActorComponent
---@field protected BodyComponentName string
---@field protected BodyType EMetaHumanBodyType
---@field protected bEnableBodyCorrectives boolean @* Enable evaluation of the body procedural control rig, the head movement IK control rig and the arm and finger pose drivers. * When enabled, evaluation for LODs can still be controlled via the Body LOD threshold. * When disabled, the body procedural control rig, the head movement IK control rig and the arm and finger pose drivers will not be evaluated which will result in higher performance but decreases mesh deformation quality.
---@field protected FaceComponentName string @Face
---@field protected RigLogicLODThreshold integer @* Max LOD level where Rig Logic is evaluated. * For example if you have the threshold set to 2, it will evaluate until including LOD 2 (based on 0 index). In case the LOD level gets set to 3, it will stop evaluating Rig Logic. * Setting it to -1 will always evaluate it and disable LODing.
---@field protected bEnableNeckCorrectives boolean @* Enable evaluation of neck correctives. * When enabled, evaluation for LODs can still be controlled via the LOD threshold. * When disabled, neck correctives will not be evaluated which will result in higher performance but decreases mesh deformation quality.
---@field protected NeckCorrectivesLODThreshold integer @* Max LOD level where neck correctives (pose drivers) are evaluated. * For example if you have the threshold set to 2, it will evaluate until including LOD 2 (based on 0 index). In case the LOD level gets set to 3, it will stop evaluating neck correctives. * Setting it to -1 will always evaluate it and disable LODing.
---@field protected bEnableNeckProcControlRig boolean @* Enable evaluation of the neck procedural control rig. * When enabled, evaluation for LODs can still be controlled via the LOD threshold. * When disabled, the neck procedural control rig will not be evaluated which will result in higher performance but decreases mesh deformation quality.
---@field protected NeckProcControlRigLODThreshold integer @* Max LOD level where the neck procedural control rig is evaluated. * For example if you have the threshold set to 2, it will evaluate until including LOD 2 (based on 0 index). In case the LOD level gets set to 3, it will stop evaluating the neck procedural control rig. * Setting it to -1 will always evaluate it and disable LODing.
---@field protected Torso FMetaHumanCustomizableBodyPart @Body Parts
---@field protected Legs FMetaHumanCustomizableBodyPart
---@field protected Feet FMetaHumanCustomizableBodyPart
local UMetaHumanComponentBase = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMetaHumanComponentBase:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UMetaHumanComponentBase:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMetaHumanComponentBase:AddAssetUserDataOfClass(InUserDataClass) end

