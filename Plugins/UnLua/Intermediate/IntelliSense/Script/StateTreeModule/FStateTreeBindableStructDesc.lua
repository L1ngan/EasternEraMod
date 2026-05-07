---Descriptor for a struct or class that can be a binding source or target.
---Each struct has unique identifier, which is used to distinguish them, and name that is mostly for debugging and UI.
---@class FStateTreeBindableStructDesc : FPropertyBindingBindableStructDescriptor
---@field public DataHandle FStateTreeDataHandle @Runtime data the struct represents.
---@field public DataSource EStateTreeBindableStructSource @Type of the source.
---@field public StatePath string @In Editor path to State containing the data.
local FStateTreeBindableStructDesc = {}
