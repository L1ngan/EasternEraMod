---An intermediary to make UBaseSound available for Slate to play sounds
---@class FSlateSound
---@field protected ResourceObject UObject @Pointer to the USoundBase. Holding onto it as a UObject because USoundBase is not available in Slate core. Edited via FSlateSoundStructCustomization to ensure you can only set USoundBase assets on it.
local FSlateSound = {}
