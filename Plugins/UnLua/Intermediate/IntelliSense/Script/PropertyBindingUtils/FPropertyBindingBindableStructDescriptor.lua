---Descriptor for a struct or class that can be a binding source or target.
---Each struct has unique identifier, which is used to distinguish them, and name that is mostly for debugging and UI.
---@class FPropertyBindingBindableStructDescriptor
---@field public Struct UStruct @The type of the struct or class.
---@field public Name string @Name of the struct (used for debugging, logging, cosmetic).
---@field public ID FGuid @Unique identifier of the struct.
---@field public Category string @Category of the bindable struct. Can be used to display the category in a menu.
local FPropertyBindingBindableStructDescriptor = {}
