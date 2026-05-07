---@class UNiagaraDataChannelWriter : UObject
---@field public Owner UNiagaraDataChannelHandler
local UNiagaraDataChannelWriter = {}

---@param VarName string
---@param Index integer
---@param InData FVector4
function UNiagaraDataChannelWriter:WriteVector4(VarName, Index, InData) end

---@param VarName string
---@param Index integer
---@param InData FVector2D
function UNiagaraDataChannelWriter:WriteVector2D(VarName, Index, InData) end

---@param VarName string
---@param Index integer
---@param InData FVector
function UNiagaraDataChannelWriter:WriteVector(VarName, Index, InData) end

---@param VarName string
---@param Index integer
---@param InData FNiagaraSpawnInfo
function UNiagaraDataChannelWriter:WriteSpawnInfo(VarName, Index, InData) end

---@param VarName string
---@param Index integer
---@param InData FQuat
function UNiagaraDataChannelWriter:WriteQuat(VarName, Index, InData) end

---@param VarName string
---@param Index integer
---@param InData FVector
function UNiagaraDataChannelWriter:WritePosition(VarName, Index, InData) end

---@param VarName string
---@param Index integer
---@param InData FLinearColor
function UNiagaraDataChannelWriter:WriteLinearColor(VarName, Index, InData) end

---@param VarName string
---@param Index integer
---@param InData integer
function UNiagaraDataChannelWriter:WriteInt(VarName, Index, InData) end

---@param VarName string
---@param Index integer
---@param InData FNiagaraID
function UNiagaraDataChannelWriter:WriteID(VarName, Index, InData) end

---@param VarName string
---@param Index integer
---@param InData number
function UNiagaraDataChannelWriter:WriteFloat(VarName, Index, InData) end

---@param VarName string
---@param Index integer
---@param InData integer
function UNiagaraDataChannelWriter:WriteEnum(VarName, Index, InData) end

---@param VarName string
---@param Index integer
---@param InData boolean
function UNiagaraDataChannelWriter:WriteBool(VarName, Index, InData) end

---@return integer
function UNiagaraDataChannelWriter:Num() end

---Call before each batch of writes to allocate the data we'll be writing to.
---@param SearchParams FNiagaraDataChannelSearchParameters
---@param Count integer
---@param bVisibleToGame boolean
---@param bVisibleToCPU boolean
---@param bVisibleToGPU boolean
---@param DebugSource string
---@return boolean
function UNiagaraDataChannelWriter:InitWrite(SearchParams, Count, bVisibleToGame, bVisibleToCPU, bVisibleToGPU, DebugSource) end

