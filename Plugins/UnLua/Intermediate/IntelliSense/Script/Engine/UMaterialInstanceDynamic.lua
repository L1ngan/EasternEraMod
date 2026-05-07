---@class UMaterialInstanceDynamic : UMaterialInstance
local UMaterialInstanceDynamic = {}

---Set an MID vector parameter value, using MPI (to allow access to layer parameters)
---@param ParameterInfo FMaterialParameterInfo
---@param Value FLinearColor
function UMaterialInstanceDynamic:SetVectorParameterValueByInfo(ParameterInfo, Value) end

---Set an MID vector parameter value
---@param ParameterName string
---@param Value FLinearColor
function UMaterialInstanceDynamic:SetVectorParameterValue(ParameterName, Value) end

---Set an MID texture parameter value using MPI (to allow access to layer parameters)
---@param ParameterInfo FMaterialParameterInfo
---@param Value UTexture
function UMaterialInstanceDynamic:SetTextureParameterValueByInfo(ParameterInfo, Value) end

---Set an MID texture parameter value
---@param ParameterName string
---@param Value UTexture
function UMaterialInstanceDynamic:SetTextureParameterValue(ParameterName, Value) end

---Set an MID texture collection parameter value using MPI (to allow access to layer parameters)
---@param ParameterInfo FMaterialParameterInfo
---@param Value UTextureCollection
function UMaterialInstanceDynamic:SetTextureCollectionParameterValueByInfo(ParameterInfo, Value) end

---Set an MID texture collection parameter value
---@param ParameterName string
---@param Value UTextureCollection
function UMaterialInstanceDynamic:SetTextureCollectionParameterValue(ParameterName, Value) end

---Set an MID texture parameter value
---@param ParameterName string
---@param Value USparseVolumeTexture
function UMaterialInstanceDynamic:SetSparseVolumeTextureParameterValue(ParameterName, Value) end

---Set a MID scalar (float) parameter value using MPI (to allow access to layer parameters)
---@param ParameterInfo FMaterialParameterInfo
---@param Value number
function UMaterialInstanceDynamic:SetScalarParameterValueByInfo(ParameterInfo, Value) end

---Set a MID scalar (float) parameter value
---@param ParameterName string
---@param Value number
function UMaterialInstanceDynamic:SetScalarParameterValue(ParameterName, Value) end

---Use the cached value of OutParameterIndex from InitializeScalarParameterAndGetIndex to set the scalar parameter
---ONLY on the exact same MID.  Do NOT presume the index can be used from one instance on another.  Only use this
---pair of functions when optimization is critical; otherwise use either SetScalarParameterValueByInfo or
---SetScalarParameterValue.
---@param ParameterIndex integer
---@param Value number
---@return boolean
function UMaterialInstanceDynamic:SetScalarParameterByIndex(ParameterIndex, Value) end

---Set an MID texture parameter value using MPI (to allow access to layer parameters)
---@param ParameterInfo FMaterialParameterInfo
---@param Value URuntimeVirtualTexture
function UMaterialInstanceDynamic:SetRuntimeVirtualTextureParameterValueByInfo(ParameterInfo, Value) end

---Set an MID texture parameter value
---@param ParameterName string
---@param Value URuntimeVirtualTexture
function UMaterialInstanceDynamic:SetRuntimeVirtualTextureParameterValue(ParameterName, Value) end

---Set an MID vector parameter value
---@param ParameterName string
---@param Value FVector4
function UMaterialInstanceDynamic:SetDoubleVectorParameterValue(ParameterName, Value) end

---Interpolates the scalar and vector parameters of this material instance based on two other material instances, and an alpha blending factor
---The output is the object itself (this).
---Supports the case SourceA==this || SourceB==this
---Both material have to be from the same base material
---@param SourceA UMaterialInstance
---@param SourceB UMaterialInstance
---@param Alpha number
function UMaterialInstanceDynamic:K2_InterpolateMaterialInstanceParams(SourceA, SourceB, Alpha) end

---Get the current MID vector parameter value, using MPI (to allow access to layer parameters)
---@param ParameterInfo FMaterialParameterInfo
---@return FLinearColor
function UMaterialInstanceDynamic:K2_GetVectorParameterValueByInfo(ParameterInfo) end

---Get the current MID vector parameter value
---@param ParameterName string
---@return FLinearColor
function UMaterialInstanceDynamic:K2_GetVectorParameterValue(ParameterName) end

---Get the current MID texture parameter value, using MPI (to allow access to layer parameters)
---@param ParameterInfo FMaterialParameterInfo
---@return UTexture
function UMaterialInstanceDynamic:K2_GetTextureParameterValueByInfo(ParameterInfo) end

---Get the current MID texture parameter value
---@param ParameterName string
---@return UTexture
function UMaterialInstanceDynamic:K2_GetTextureParameterValue(ParameterName) end

---Get the current MID texture collection parameter value, using MPI (to allow access to layer parameters)
---@param ParameterInfo FMaterialParameterInfo
---@return UTextureCollection
function UMaterialInstanceDynamic:K2_GetTextureCollectionParameterValueByInfo(ParameterInfo) end

---Get the current MID texture collection parameter value
---@param ParameterName string
---@return UTextureCollection
function UMaterialInstanceDynamic:K2_GetTextureCollectionParameterValue(ParameterName) end

---Get the current scalar (float) parameter value from an MID, using MPI (to allow access to layer parameters)
---@param ParameterInfo FMaterialParameterInfo
---@return number
function UMaterialInstanceDynamic:K2_GetScalarParameterValueByInfo(ParameterInfo) end

---Get the current scalar (float) parameter value from an MID
---@param ParameterName string
---@return number
function UMaterialInstanceDynamic:K2_GetScalarParameterValue(ParameterName) end

---Copies over parameters given a material interface (copy each instance following the hierarchy)
---Very slow implementation, avoid using at runtime. Hopefully we can replace it later with something like CopyInterpParameters()
---The output is the object itself (this). Copying 'quick parameters only' will result in a much
---faster copy process but will only copy dynamic scalar, vector and texture parameters on clients.
---@param Source UMaterialInterface
---@param bQuickParametersOnly boolean @[opt] 
function UMaterialInstanceDynamic:K2_CopyMaterialInstanceParameters(Source, bQuickParametersOnly) end

---Use this function to set an initial value and fetch the index for use in SetScalarParameterByIndex.  This
---function should only be called once for a particular name, and then use SetScalarParameterByIndex for subsequent
---calls.  However, beware using this except in cases where optimization is critical, which is generally only if
---you're using an unusually high number of parameters in a material and setting a large number of parameters in the
---same frame.  Also, if the material is changed in any way that can change the parameter list, the index can be
---invalidated.
---@param ParameterName string
---@param Value number
---@param OutParameterIndex integer @[out] 
---@return boolean
function UMaterialInstanceDynamic:InitializeScalarParameterAndGetIndex(ParameterName, Value, OutParameterIndex) end

---Copy parameter values from another material instance. This will copy only
---parameters explicitly overridden in that material instance!!
---@param MaterialInstance UMaterialInstance
function UMaterialInstanceDynamic:CopyParameterOverrides(MaterialInstance) end

---Copies over parameters given a material instance (only copy from the instance, not following the hierarchy)
---much faster than K2_CopyMaterialInstanceParameters(),
---The output is the object itself (this).
---@param Source UMaterialInstance
function UMaterialInstanceDynamic:CopyInterpParameters(Source) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMaterialInstanceDynamic:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UMaterialInstanceDynamic:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMaterialInstanceDynamic:AddAssetUserDataOfClass(InUserDataClass) end

