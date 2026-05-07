---Initial simple API for reading and writing data in a data channel from game code / BP.
---Likely to be replaced in the near future with a custom BP node and a helper struct.
---@class UNiagaraDataChannelReader : UObject
---@field public Owner UNiagaraDataChannelHandler
local UNiagaraDataChannelReader = {}

---@param VarName string
---@param Index integer
---@param IsValid boolean @[out] 
---@return FVector4
function UNiagaraDataChannelReader:ReadVector4(VarName, Index, IsValid) end

---@param VarName string
---@param Index integer
---@param IsValid boolean @[out] 
---@return FVector2D
function UNiagaraDataChannelReader:ReadVector2D(VarName, Index, IsValid) end

---@param VarName string
---@param Index integer
---@param IsValid boolean @[out] 
---@return FVector
function UNiagaraDataChannelReader:ReadVector(VarName, Index, IsValid) end

---@param VarName string
---@param Index integer
---@param IsValid boolean @[out] 
---@return FNiagaraSpawnInfo
function UNiagaraDataChannelReader:ReadSpawnInfo(VarName, Index, IsValid) end

---@param VarName string
---@param Index integer
---@param IsValid boolean @[out] 
---@return FQuat
function UNiagaraDataChannelReader:ReadQuat(VarName, Index, IsValid) end

---@param VarName string
---@param Index integer
---@param IsValid boolean @[out] 
---@return FVector
function UNiagaraDataChannelReader:ReadPosition(VarName, Index, IsValid) end

---@param VarName string
---@param Index integer
---@param IsValid boolean @[out] 
---@return FLinearColor
function UNiagaraDataChannelReader:ReadLinearColor(VarName, Index, IsValid) end

---@param VarName string
---@param Index integer
---@param IsValid boolean @[out] 
---@return integer
function UNiagaraDataChannelReader:ReadInt(VarName, Index, IsValid) end

---@param VarName string
---@param Index integer
---@param IsValid boolean @[out] 
---@return FNiagaraID
function UNiagaraDataChannelReader:ReadID(VarName, Index, IsValid) end

---@param VarName string
---@param Index integer
---@param IsValid boolean @[out] 
---@return number
function UNiagaraDataChannelReader:ReadFloat(VarName, Index, IsValid) end

---@param VarName string
---@param Index integer
---@param IsValid boolean @[out] 
---@return integer
function UNiagaraDataChannelReader:ReadEnum(VarName, Index, IsValid) end

---@param VarName string
---@param Index integer
---@param IsValid boolean @[out] 
---@return boolean
function UNiagaraDataChannelReader:ReadBool(VarName, Index, IsValid) end

---@return integer
function UNiagaraDataChannelReader:Num() end

---Call before each access to the data channel to grab the correct data to read.
---@param SearchParams FNiagaraDataChannelSearchParameters
---@param bReadPrevFrameData boolean
---@return boolean
function UNiagaraDataChannelReader:InitAccess(SearchParams, bReadPrevFrameData) end

