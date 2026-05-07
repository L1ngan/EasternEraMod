---@class FDelegateEditorBinding
---@field public ObjectName string @The member widget the binding is on, must be a direct variable of the UUserWidget.
---@field public PropertyName string @The property on the ObjectName that we are binding to.
---@field public FunctionName string @The function that was generated to return the SourceProperty
---@field public SourceProperty string @The property we are bindings to directly on the source object.
---@field public SourcePath FEditorPropertyPath
---@field public MemberGuid FGuid @If it's an actual Function Graph in the blueprint that we're bound to, there's a GUID we can use to lookup that function, to deal with renames better.  This is that GUID.
---@field public Kind EBindingKind
local FDelegateEditorBinding = {}
