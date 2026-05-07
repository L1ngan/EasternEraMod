---Library of functions that can be used by the Python API to trigger VariantManager operations
---@class UVariantManagerBlueprintLibrary : UBlueprintFunctionLibrary
local UVariantManagerBlueprintLibrary = {}

---@param Property UPropertyValue
---@param InValue FVector4
function UVariantManagerBlueprintLibrary.SetValueVector4(Property, InValue) end

---@param Property UPropertyValue
---@param InValue FVector2D
function UVariantManagerBlueprintLibrary.SetValueVector2D(Property, InValue) end

---@param Property UPropertyValue
---@param InValue FVector
function UVariantManagerBlueprintLibrary.SetValueVector(Property, InValue) end

---@param Property UPropertyValue
---@param InValue string
function UVariantManagerBlueprintLibrary.SetValueString(Property, InValue) end

---@param Property UPropertyValue
---@param InValue FRotator
function UVariantManagerBlueprintLibrary.SetValueRotator(Property, InValue) end

---@param Property UPropertyValue
---@param InValue FQuat
function UVariantManagerBlueprintLibrary.SetValueQuat(Property, InValue) end

---@param Property UPropertyValue
---@param InValue UObject
function UVariantManagerBlueprintLibrary.SetValueObject(Property, InValue) end

---@param Property UPropertyValue
---@param InValue FLinearColor
function UVariantManagerBlueprintLibrary.SetValueLinearColor(Property, InValue) end

---@param Property UPropertyValue
---@param InValue FIntPoint
function UVariantManagerBlueprintLibrary.SetValueIntPoint(Property, InValue) end

---@param Property UPropertyValue
---@param InValue integer
function UVariantManagerBlueprintLibrary.SetValueInt(Property, InValue) end

---@param Property UPropertyValue
---@param InValue number
function UVariantManagerBlueprintLibrary.SetValueFloat(Property, InValue) end

---@param Property UPropertyValue
---@param InValue FColor
function UVariantManagerBlueprintLibrary.SetValueColor(Property, InValue) end

---@param Property UPropertyValue
---@param InValue boolean
function UVariantManagerBlueprintLibrary.SetValueBool(Property, InValue) end

---@param Variant UVariant
---@param Index integer
---@param Dependency FVariantDependency @[out] 
function UVariantManagerBlueprintLibrary.SetDependency(Variant, Index, Dependency) end

---Looks for a variant set with VariantSetName within LevelVariantSets and removes it, if it exists
---@param LevelVariantSets ULevelVariantSets
---@param VariantSetName string
function UVariantManagerBlueprintLibrary.RemoveVariantSetByName(LevelVariantSets, VariantSetName) end

---Removes VariantSet from LevelVariantSets, if that is its parent
---@param LevelVariantSets ULevelVariantSets
---@param VariantSet UVariantSet
function UVariantManagerBlueprintLibrary.RemoveVariantSet(LevelVariantSets, VariantSet) end

---Looks for a variant with VariantName within VariantSet and removes it, if it exists
---@param VariantSet UVariantSet
---@param VariantName string
function UVariantManagerBlueprintLibrary.RemoveVariantByName(VariantSet, VariantName) end

---Removes Variant from VariantSet, if that is its parent
---@param VariantSet UVariantSet
---@param Variant UVariant
function UVariantManagerBlueprintLibrary.RemoveVariant(VariantSet, Variant) end

---Removes property capture with PropertyPath from Actor's binding within Variant, if it exists
---@param Variant UVariant
---@param Actor AActor
---@param PropertyPath string
function UVariantManagerBlueprintLibrary.RemoveCapturedPropertyByName(Variant, Actor, PropertyPath) end

---Removes a property capture from an actor binding within Variant, if it exists
---@param Variant UVariant
---@param Actor AActor
---@param Property UPropertyValue
function UVariantManagerBlueprintLibrary.RemoveCapturedProperty(Variant, Actor, Property) end

---Looks for an actor binding to an actor with ActorLabel within Variant and removes it, if it exists
---@param Variant UVariant
---@param ActorName string
function UVariantManagerBlueprintLibrary.RemoveActorBindingByName(Variant, ActorName) end

---Removes an actor binding to Actor from Variant, if it exists
---@param Variant UVariant
---@param Actor AActor
function UVariantManagerBlueprintLibrary.RemoveActorBinding(Variant, Actor) end

---Records new data for PropVal from the actor from which it was captured
---@param PropVal UPropertyValue
function UVariantManagerBlueprintLibrary.Record(PropVal) end

---@param Property UPropertyValue
---@return FVector4
function UVariantManagerBlueprintLibrary.GetValueVector4(Property) end

---@param Property UPropertyValue
---@return FVector2D
function UVariantManagerBlueprintLibrary.GetValueVector2D(Property) end

---@param Property UPropertyValue
---@return FVector
function UVariantManagerBlueprintLibrary.GetValueVector(Property) end

---@param Property UPropertyValue
---@return string
function UVariantManagerBlueprintLibrary.GetValueString(Property) end

---@param Property UPropertyValue
---@return FRotator
function UVariantManagerBlueprintLibrary.GetValueRotator(Property) end

---@param Property UPropertyValue
---@return FQuat
function UVariantManagerBlueprintLibrary.GetValueQuat(Property) end

---@param Property UPropertyValue
---@return UObject
function UVariantManagerBlueprintLibrary.GetValueObject(Property) end

---@param Property UPropertyValue
---@return FLinearColor
function UVariantManagerBlueprintLibrary.GetValueLinearColor(Property) end

---@param Property UPropertyValue
---@return FIntPoint
function UVariantManagerBlueprintLibrary.GetValueIntPoint(Property) end

---@param Property UPropertyValue
---@return integer
function UVariantManagerBlueprintLibrary.GetValueInt(Property) end

---@param Property UPropertyValue
---@return number
function UVariantManagerBlueprintLibrary.GetValueFloat(Property) end

---@param Property UPropertyValue
---@return FColor
function UVariantManagerBlueprintLibrary.GetValueColor(Property) end

---@param Property UPropertyValue
---@return boolean
function UVariantManagerBlueprintLibrary.GetValueBool(Property) end

---This allows the scripting language to get the type of the C++ property its dealing with
---@param PropVal UPropertyValue
---@return string
function UVariantManagerBlueprintLibrary.GetPropertyTypeString(PropVal) end

---Returns which properties have been captured for this actor in Variant
---@param Variant UVariant
---@param Actor AActor
---@return TArray_UPropertyValue_
function UVariantManagerBlueprintLibrary.GetCapturedProperties(Variant, Actor) end

---Returns a property path for all the properties we can capture for an actor. Will also
---handle receiving the actor's class instead.
---@param ActorOrClass UObject
---@return TArray_string_
function UVariantManagerBlueprintLibrary.GetCapturableProperties(ActorOrClass) end

---@param Variant UVariant
---@param Index integer
function UVariantManagerBlueprintLibrary.DeleteDependency(Variant, Index) end

---Creates a new LevelVariantSetsAsset named AssetName (e.g. 'MyLevelVariantSets') in the content path AssetPath (e.g. '/Game')
---@param AssetName string
---@param AssetPath string
---@return ULevelVariantSets
function UVariantManagerBlueprintLibrary.CreateLevelVariantSetsAsset(AssetName, AssetPath) end

---Creates a new ALevelVariantSetsActor in the current scene and assigns LevelVariantSetsAsset to it
---@param LevelVariantSetsAsset ULevelVariantSets
---@return ALevelVariantSetsActor
function UVariantManagerBlueprintLibrary.CreateLevelVariantSetsActor(LevelVariantSetsAsset) end

---Finds the actor binding to Actor within Variant and tries capturing a property with PropertyPath
---Returns the captured UPropertyValue if succeeded or nullptr if it failed.
---@param Variant UVariant
---@param Actor AActor
---@param PropertyPath string
---@return UPropertyValue
function UVariantManagerBlueprintLibrary.CaptureProperty(Variant, Actor, PropertyPath) end

---Applies the recorded data from PropVal to the actor from which it was captured
---@param PropVal UPropertyValue
function UVariantManagerBlueprintLibrary.Apply(PropVal) end

---Adds VariantSet to the LevelVariantSets' list of VariantSets
---@param LevelVariantSets ULevelVariantSets
---@param VariantSet UVariantSet
function UVariantManagerBlueprintLibrary.AddVariantSet(LevelVariantSets, VariantSet) end

---Adds Variant to the VariantSet's list of Variants
---@param VariantSet UVariantSet
---@param Variant UVariant
function UVariantManagerBlueprintLibrary.AddVariant(VariantSet, Variant) end

---@param Variant UVariant
---@param Dependency FVariantDependency @[out] 
---@return integer
function UVariantManagerBlueprintLibrary.AddDependency(Variant, Dependency) end

---Binds the Actor to the Variant, internally creating a VariantObjectBinding
---@param Variant UVariant
---@param Actor AActor
function UVariantManagerBlueprintLibrary.AddActorBinding(Variant, Actor) end

