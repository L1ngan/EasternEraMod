---Base structure to inherit from to facilitate operations on property bindings.
---@class FPropertyBindingBindingCollection
---@field protected CopyBatches TArray<FPropertyBindingCopyInfoBatch> @Array of copy batches.
---@field protected PropertyCopies TArray<FPropertyBindingCopyInfo> @Array of property copies
---@field private PropertyIndirections TArray<FPropertyBindingPropertyIndirection> @Array of property indirections, indexed by accesses
---@field protected BindingsOwner TScriptInterface<UPropertyBindingBindingCollectionOwner>
local FPropertyBindingBindingCollection = {}
