---Fbx translator class support import of texture, material, static mesh, skeletal mesh,
---@class UInterchangeFbxTranslatorSettings : UInterchangeTranslatorSettings
---@field public bConvertScene boolean @Whether to convert FBX scene axis system to Unreal axis system.
---@field public bForceFrontXAxis boolean @Whether to force the front axis to be align with X instead of -Y default.
---@field public bConvertSceneUnit boolean @Whether to convert the scene from FBX unit to UE unit (centimeter).
---@field public bKeepFbxNamespace boolean @Whether to keep the name space from FBX name.
local UInterchangeFbxTranslatorSettings = {}

