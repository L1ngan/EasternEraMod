---The Field Notification system allows a user to know when a property value is modified at runtime (note that it can be a function return value).
---The class needs to implement the INotifyFieldValueChanged interface.
---The property' setter  usually follows this pattern "if (new value != old value) assign the new value; broadcast that the value changed;".
---The Blueprint implementation handles that setter logic automatically with SetPropertyValueAndBroadcast.
---When a property value is modified by replication, the RepNotify will call BroadcastFieldValueChanged.
---A function can also be a Field Notify. The function needs to be const and return a single value.
---@class UFieldNotificationLibrary : UBlueprintFunctionLibrary
local UFieldNotificationLibrary = {}

---@param NewValueByRef boolean
---@param OldValue integer
---@param NewValue integer
---@param Object UObject
---@param NetOwner UObject
---@param bHasLocalRepNotify boolean
---@param bShouldFlushDormancyOnSet boolean
---@param bIsNetProperty boolean
---@param ExtraFieldIds TArray_FFieldNotificationId_
---@return boolean
function UFieldNotificationLibrary.SetPropertyValueAndBroadcastFields(NewValueByRef, OldValue, NewValue, Object, NetOwner, bHasLocalRepNotify, bShouldFlushDormancyOnSet, bIsNetProperty, ExtraFieldIds) end

---@param NewValueByRef boolean
---@param OldValue integer
---@param NewValue integer
---@param Object UObject
---@param NetOwner UObject
---@param bHasLocalRepNotify boolean
---@param bShouldFlushDormancyOnSet boolean
---@param bIsNetProperty boolean
---@return boolean
function UFieldNotificationLibrary.SetPropertyValueAndBroadcast(NewValueByRef, OldValue, NewValue, Object, NetOwner, bHasLocalRepNotify, bShouldFlushDormancyOnSet, bIsNetProperty) end

---Broadcast that the Field value changed.
---@param Object UObject
---@param FieldId FFieldNotificationId
function UFieldNotificationLibrary.BroadcastFieldValueChanged(Object, FieldId) end

---Broadcast that a list of Field values changed.
---@param Object UObject
---@param FieldIds TArray_FFieldNotificationId_
function UFieldNotificationLibrary.BroadcastFieldsValueChanged(Object, FieldIds) end

