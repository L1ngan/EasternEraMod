---Stores data from a USoftObjectProperty.
---It will store it's recorded data as a raw UObject*, and use the usual UPropertyValue
---facilities for serializing it as a Soft object ptr. This derived class handles converting
---to and from the property's underlying FSoftObjectPtr to our UObject*.
---We can't keep a FSoftObjectPtr ourselves, neither as a temp member nor as raw bytes, as it has
---internal heap-allocated data members like FName and FString.
---@class UPropertyValueSoftObject : UPropertyValue
local UPropertyValueSoftObject = {}

