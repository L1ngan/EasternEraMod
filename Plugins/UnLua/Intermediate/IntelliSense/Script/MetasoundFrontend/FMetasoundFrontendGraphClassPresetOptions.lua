---Preset options related to a parent graph class.  A graph class with bIsPreset set to true
---auto-updates to mirror the interface members (inputs & outputs) of the single, referenced
---node. It also connects all of these nodes' interface members on update to corresponding inputs
---& outputs, and inherits input defaults from the referenced node unless otherwise specified.
---@class FMetasoundFrontendGraphClassPresetOptions
---@field public bIsPreset boolean @Whether or not graph class is a preset or not.
---@field public InputsInheritingDefault TSet<string> @Names of all inputs inheriting default values from the referenced node. All input names in this set have their default value set on update when registered with the Frontend Class Registry.  Omitted inputs remain using the pre-existing, serialized default values.
local FMetasoundFrontendGraphClassPresetOptions = {}
