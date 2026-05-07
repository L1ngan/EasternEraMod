---@class UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary
local UBlueprintGameplayTagLibrary = {}

---Remove a single tag from the passed in tag container, returns true if found
---@param TagContainer FGameplayTagContainer @[out] 
---@param Tag FGameplayTag
---@return boolean
function UBlueprintGameplayTagLibrary.RemoveGameplayTag(TagContainer, Tag) end

---Checks if a gameplay tag's name and a string are not equal to one another
---@param A FGameplayTag
---@param B string
---@return boolean
function UBlueprintGameplayTagLibrary.NotEqual_TagTag(A, B) end

---Checks if a gameplay tag containers's name and a string are not equal to one another
---@param A FGameplayTagContainer
---@param B string
---@return boolean
function UBlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer(A, B) end

---Returns true if the values are not equal (A != B)
---@param A FGameplayTagContainer
---@param B FGameplayTagContainer
---@return boolean
function UBlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer(A, B) end

---Returns true if the values are not equal (A != B)
---@param A FGameplayTag
---@param B FGameplayTag
---@return boolean
function UBlueprintGameplayTagLibrary.NotEqual_GameplayTag(A, B) end

---Determine if TagOne matches against TagTwo
---@param TagOne FGameplayTag
---@param TagTwo FGameplayTag
---@param bExactMatch boolean
---@return boolean
function UBlueprintGameplayTagLibrary.MatchesTag(TagOne, TagTwo, bExactMatch) end

---Determine if TagOne matches against any tag in OtherContainer
---@param TagOne FGameplayTag
---@param OtherContainer FGameplayTagContainer
---@param bExactMatch boolean
---@return boolean
function UBlueprintGameplayTagLibrary.MatchesAnyTags(TagOne, OtherContainer, bExactMatch) end

---Creates a literal FGameplayTagContainer
---@param Value FGameplayTagContainer
---@return FGameplayTagContainer
function UBlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer(Value) end

---Creates a literal FGameplayTag
---@param Value FGameplayTag
---@return FGameplayTag
function UBlueprintGameplayTagLibrary.MakeLiteralGameplayTag(Value) end

---Creates a literal FGameplayTagQuery with a prepopulated NoTagsMatch expression
---@param InTags FGameplayTagContainer
---@return FGameplayTagQuery
function UBlueprintGameplayTagLibrary.MakeGameplayTagQuery_MatchNoTags(InTags) end

---Creates a literal FGameplayTagQuery with a prepopulated AnyTagsMatch expression
---@param InTags FGameplayTagContainer
---@return FGameplayTagQuery
function UBlueprintGameplayTagLibrary.MakeGameplayTagQuery_MatchAnyTags(InTags) end

---Creates a literal FGameplayTagQuery with a prepopulated AllTagsMatch expression
---@param InTags FGameplayTagContainer
---@return FGameplayTagQuery
function UBlueprintGameplayTagLibrary.MakeGameplayTagQuery_MatchAllTags(InTags) end

---Creates a literal FGameplayTagQuery
---@param TagQuery FGameplayTagQuery
---@return FGameplayTagQuery
function UBlueprintGameplayTagLibrary.MakeGameplayTagQuery(TagQuery) end

---Creates a FGameplayTagContainer containing a single tag
---@param SingleTag FGameplayTag
---@return FGameplayTagContainer
function UBlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag(SingleTag) end

---Creates a FGameplayTagContainer from the array of passed in tags
---@param GameplayTags TArray_FGameplayTag_
---@return FGameplayTagContainer
function UBlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray(GameplayTags) end

---Check if the specified tag query is empty
---@param TagQuery FGameplayTagQuery
---@return boolean
function UBlueprintGameplayTagLibrary.IsTagQueryEmpty(TagQuery) end

---Returns true if the passed in gameplay tag is non-null
---@param GameplayTag FGameplayTag
---@return boolean
function UBlueprintGameplayTagLibrary.IsGameplayTagValid(GameplayTag) end

---Check if the tag container has the specified tag
---@param TagContainer FGameplayTagContainer
---@param Tag FGameplayTag
---@param bExactMatch boolean
---@return boolean
function UBlueprintGameplayTagLibrary.HasTag(TagContainer, Tag, bExactMatch) end

---Check if the specified tag container has ANY of the tags in the other container
---@param TagContainer FGameplayTagContainer
---@param OtherContainer FGameplayTagContainer
---@param bExactMatch boolean
---@return boolean
function UBlueprintGameplayTagLibrary.HasAnyTags(TagContainer, OtherContainer, bExactMatch) end

---Check if the specified tag container has ALL of the tags in the other container
---@param TagContainer FGameplayTagContainer
---@param OtherContainer FGameplayTagContainer
---@param bExactMatch boolean
---@return boolean
function UBlueprintGameplayTagLibrary.HasAllTags(TagContainer, OtherContainer, bExactMatch) end

---Check Gameplay tags in the interface has all of the specified tags in the tag container (expands to include parents of asset tags)
---@param TagContainerInterface TScriptInterface_UGameplayTagAssetInterface_
---@param OtherContainer FGameplayTagContainer
---@return boolean
function UBlueprintGameplayTagLibrary.HasAllMatchingGameplayTags(TagContainerInterface, OtherContainer) end

---Returns FName of this tag
---@param GameplayTag FGameplayTag
---@return string
function UBlueprintGameplayTagLibrary.GetTagName(GameplayTag) end

---
---@param TagContainerInterface TScriptInterface_UGameplayTagAssetInterface_
---@return FGameplayTagContainer
function UBlueprintGameplayTagLibrary.GetOwnedGameplayTags(TagContainerInterface) end

---Get the number of gameplay tags in the specified container
---@param TagContainer FGameplayTagContainer
---@return integer
function UBlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer(TagContainer) end

---Returns an FString listing all of the gameplay tags in the tag container for debugging purposes.
---@param TagContainer FGameplayTagContainer
---@return string
function UBlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer(TagContainer) end

---Returns an FString representation of a gameplay tag for debugging purposes.
---@param GameplayTag FGameplayTag
---@return string
function UBlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag(GameplayTag) end

---Get an array of all actors of a specific class (or subclass of that class) which match the specified gameplay tag query.
---@param WorldContextObject UObject
---@param ActorClass TSubclassOf_AActor_
---@param GameplayTagQuery FGameplayTagQuery
---@param OutActors TArray_AActor_ @[out] 
function UBlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery(WorldContextObject, ActorClass, GameplayTagQuery, OutActors) end

---Returns a filtered version of this container, returns all tags that match against any of the tags in OtherContainer
---@param TagContainer FGameplayTagContainer
---@param OtherContainer FGameplayTagContainer
---@param bExactMatch boolean
---@return FGameplayTagContainer
function UBlueprintGameplayTagLibrary.Filter(TagContainer, OtherContainer, bExactMatch) end

---Returns true if the values are equal (A == B)
---@param A FGameplayTagContainer
---@param B FGameplayTagContainer
---@return boolean
function UBlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer(A, B) end

---Returns true if the values are equal (A == B)
---@param A FGameplayTag
---@param B FGameplayTag
---@return boolean
function UBlueprintGameplayTagLibrary.EqualEqual_GameplayTag(A, B) end

---Check if the specified tag container has the specified tag, using the specified tag matching types
---@param TagContainerInterface TScriptInterface_UGameplayTagAssetInterface_
---@param Tag FGameplayTag
---@return boolean
function UBlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag(TagContainerInterface, Tag) end

---Check if the specified tag container matches the given Tag Query
---@param TagContainer FGameplayTagContainer
---@param TagQuery FGameplayTagQuery
---@return boolean
function UBlueprintGameplayTagLibrary.DoesContainerMatchTagQuery(TagContainer, TagQuery) end

---Converts a UObject to a GameplayTagAssetInterface. This specialty Autocast function exists so we can auto-convert the GameplayTagAssetInterface member functions to static Blueprint functions using redirects.
---@param InObject UObject
---@return TScriptInterface_UGameplayTagAssetInterface_
function UBlueprintGameplayTagLibrary.Conv_ObjectToGameplayTagAssetInterface(InObject) end

---Breaks tag container into explicit array of tags
---@param GameplayTagContainer FGameplayTagContainer
---@param GameplayTags TArray_FGameplayTag_ @[out] 
function UBlueprintGameplayTagLibrary.BreakGameplayTagContainer(GameplayTagContainer, GameplayTags) end

---Appends all tags in the InTagContainer to InOutTagContainer
---@param InOutTagContainer FGameplayTagContainer @[out] 
---@param InTagContainer FGameplayTagContainer
function UBlueprintGameplayTagLibrary.AppendGameplayTagContainers(InOutTagContainer, InTagContainer) end

---Adds a single tag to the passed in tag container
---@param TagContainer FGameplayTagContainer @[out] 
---@param Tag FGameplayTag
function UBlueprintGameplayTagLibrary.AddGameplayTag(TagContainer, Tag) end

