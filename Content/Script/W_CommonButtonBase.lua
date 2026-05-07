--
-- DESCRIPTION
--
-- @COMPANY **
-- @AUTHOR **
-- @DATE ${date} ${time}
--

---@type W_CommonButtonBase_C
local M = UnLua.Class()
local ECommonButtonType = UE.ECommonButtonType

local function HandleDestroyBuilding(self)
    local selectInventorySubstituteSystem = UE.ASelectInventorySubstituteSystem.GetSelectInventorySubstituteSystem(self)
    if not selectInventorySubstituteSystem then
        return
    end

    local operateObjects = selectInventorySubstituteSystem:GetOperateObjects()
    if not operateObjects then
        return
    end

    local count = 0
    if operateObjects.Num then
        count = operateObjects:Num()
    elseif operateObjects.Length then
        count = operateObjects:Length()
    end

    for i = 1, count do
        local object = operateObjects:Get(i)
        if not object and operateObjects.Get then
            object = operateObjects:Get(i - 1)
        end
        if object and object.DestoryBuilding then
            object:DestoryBuilding()
        end
    end
end

--function M:Initialize(Initializer)
--end

--function M:PreConstruct(IsDesignTime)
--end

-- function M:Construct()
-- end

--function M:Tick(MyGeometry, InDeltaTime)
--end

function M:K2_PreHandleNativeOnClicked()
    if self.CommonButtonInfo and self.CommonButtonInfo.CommonButtonType == ECommonButtonType.DestoryBuilding then
        HandleDestroyBuilding(self)
        return true
    end

    return false
end

return M
