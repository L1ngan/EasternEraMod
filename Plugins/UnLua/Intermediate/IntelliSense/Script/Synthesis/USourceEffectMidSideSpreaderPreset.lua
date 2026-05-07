---USourceEffectMidSideSpreaderPreset
---This code exposes your preset settings and effect class to the editor.
---And allows for a handle to setting/updating effect settings dynamically.
---@class USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset
---@field public Settings FSourceEffectMidSideSpreaderSettings @The copy of the settings struct. Can't be written to in BP, but can be read. Note that the value read in BP is the serialized settings, will not reflect dynamic changes made in BP.
local USourceEffectMidSideSpreaderPreset = {}

---Change settings of your effect from blueprints. Will broadcast changes to active instances.
---@param InSettings FSourceEffectMidSideSpreaderSettings
function USourceEffectMidSideSpreaderPreset:SetSettings(InSettings) end

