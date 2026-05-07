---An audio meter widget.
---Supports displaying a slower moving peak-hold value as well as the current meter value.
---A clipping value is also displayed which shows a customizable color to indicate clipping.
---Internal values are stored and interacted with as linear volume values.
---@class UAudioMeter : UWidget
---@field public MeterChannelInfo TArray<FMeterChannelInfo> @The current meter value to display.
---@field public MeterChannelInfoDelegate Delegate @A bindable delegate to allow logic to drive the value of the meter
---@field public WidgetStyle FAudioMeterStyle @The audio meter style
---@field public Orientation integer @The slider's orientation.
---@field public BackgroundColor FLinearColor @The color to draw the background.
---@field public MeterBackgroundColor FLinearColor @The color to draw the meter background.
---@field public MeterValueColor FLinearColor @The color to draw the meter value.
---@field public MeterPeakColor FLinearColor @The color to draw the meter peak value.
---@field public MeterClippingColor FLinearColor @The color to draw the meter clipping value.
---@field public MeterScaleColor FLinearColor @The color to draw the meter scale hashes.
---@field public MeterScaleLabelColor FLinearColor @The color to draw the meter scale label.
local UAudioMeter = {}

---Sets the meter value color
---@param InValue FLinearColor
function UAudioMeter:SetMeterValueColor(InValue) end

---Sets the meter scale color
---@param InValue FLinearColor
function UAudioMeter:SetMeterScaleLabelColor(InValue) end

---Sets the meter scale color
---@param InValue FLinearColor
function UAudioMeter:SetMeterScaleColor(InValue) end

---Sets the meter peak color
---@param InValue FLinearColor
function UAudioMeter:SetMeterPeakColor(InValue) end

---Sets the meter clipping color
---@param InValue FLinearColor
function UAudioMeter:SetMeterClippingColor(InValue) end

---Sets the current meter values.
---@param InMeterChannelInfo TArray_FMeterChannelInfo_
function UAudioMeter:SetMeterChannelInfo(InMeterChannelInfo) end

---Sets the meter background color
---@param InValue FLinearColor
function UAudioMeter:SetMeterBackgroundColor(InValue) end

---Sets the background color
---@param InValue FLinearColor
function UAudioMeter:SetBackgroundColor(InValue) end

---@return TArray_FMeterChannelInfo_
function UAudioMeter:GetMeterChannelInfo__DelegateSignature() end

---Gets the current linear value of the meter.
---@return TArray_FMeterChannelInfo_
function UAudioMeter:GetMeterChannelInfo() end

