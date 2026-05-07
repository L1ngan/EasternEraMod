---@class AUnLuaBenchmarkProxy : AActor
---@field public MeshID integer
---@field public MeshName string
---@field public COM FVector
---@field public Indices TArray<integer>
---@field public Positions TArray<FVector>
---@field public PredictedPositions TArray<FVector>
local AUnLuaBenchmarkProxy = {}

---@param NewPositions TArray_FVector_
function AUnLuaBenchmarkProxy:UpdatePositions(NewPositions) end

---@param NewName string
---@return string
function AUnLuaBenchmarkProxy:UpdateMeshName(NewName) end

---@param NewID integer
---@return integer
function AUnLuaBenchmarkProxy:UpdateMeshID(NewID) end

---@param NewIndices TArray_integer_
function AUnLuaBenchmarkProxy:UpdateIndices(NewIndices) end

---@param DeltaTime number
function AUnLuaBenchmarkProxy:Simulate(DeltaTime) end

---@param Origin FVector
---@param Direction FVector
---@return boolean
function AUnLuaBenchmarkProxy:Raycast(Origin, Direction) end

function AUnLuaBenchmarkProxy:NOP() end

---@return TArray_FVector_
function AUnLuaBenchmarkProxy:GetPredictedPositions() end

---@param OutPositions TArray_FVector_ @[out] 
function AUnLuaBenchmarkProxy:GetPositions(OutPositions) end

---@return string
function AUnLuaBenchmarkProxy:GetMeshName() end

---@param OutMeshID integer @[out] 
---@param OutMeshName string @[out] 
---@param OutCOM FVector @[out] 
---@param OutIndices TArray_integer_ @[out] 
---@param OutPositions TArray_FVector_ @[out] 
---@param OutPredictedPositions TArray_FVector_ @[out] 
---@return boolean
function AUnLuaBenchmarkProxy:GetMeshInfo(OutMeshID, OutMeshName, OutCOM, OutIndices, OutPositions, OutPredictedPositions) end

---@return integer
function AUnLuaBenchmarkProxy:GetMeshID() end

---@param OutIndices TArray_integer_ @[out] 
function AUnLuaBenchmarkProxy:GetIndices(OutIndices) end

---@return FVector
function AUnLuaBenchmarkProxy:GetCOM() end

