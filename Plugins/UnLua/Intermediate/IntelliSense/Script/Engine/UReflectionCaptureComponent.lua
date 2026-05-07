----> will be exported to EngineDecalClasses.h
---@class UReflectionCaptureComponent : USceneComponent
---@field public CaptureOffsetComponent UBillboardComponent
---@field public ReflectionSourceType EReflectionSourceType @Indicates where to get the reflection source from.
---@field public Cubemap UTextureCube @Cubemap to use for reflection if ReflectionSourceType is set to RS_SpecifiedCubemap.
---@field public SourceCubemapAngle number @Angle to rotate the source cubemap when SourceType is set to SLS_SpecifiedCubemap.
---@field public Brightness number @A brightness control to scale the captured scene's reflection intensity.
---@field public CaptureOffset FVector @World space offset to apply before capturing.
---@field public MapBuildDataId FGuid @Guid for map build data
local UReflectionCaptureComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UReflectionCaptureComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UReflectionCaptureComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UReflectionCaptureComponent:AddAssetUserDataOfClass(InUserDataClass) end

