---Meter is rendered by using material instead of texture.
---* No Children
---@class UAudioMaterialMeter : UWidget
---@field public WidgetStyle FAudioMaterialMeterStyle @The meter's style
---@field public Orientation integer @The Meter's orientation.
---@field public MeterChannelInfoDelegate Delegate @A bindable delegate to allow logic to drive the value of the meter
---@field private MeterChannelInfo TArray<FMeterChannelInfo> @The current meter value to display.
local UAudioMaterialMeter = {}

---Sets the current meter values.
---@param InMeterChannelInfo TArray_FMeterChannelInfo_
function UAudioMaterialMeter:SetMeterChannelInfo(InMeterChannelInfo) end

---@return TArray_FMeterChannelInfo_
function UAudioMaterialMeter:GetMeterChannelInfo__DelegateSignature() end

---Gets the current linear values of the meter.
---@return TArray_FMeterChannelInfo_
function UAudioMaterialMeter:GetMeterChannelInfo() end

