---@class USCS_Node : UObject
---@field public ComponentClass TSubclassOf<UObject> @Component class
---@field public ComponentTemplate UActorComponent @Template for the component to create
---@field public CookedComponentInstancingData FBlueprintCookedComponentInstancingData @Cached data for faster runtime instancing (only used in cooked builds)
---@field public CategoryName string @If non-None, the assigned category name
---@field public AttachToName string @Socket/Bone that Node might attach to
---@field public ParentComponentOrVariableName string @Component template or variable that Node might be parented to
---@field public ParentComponentOwnerClassName string @If the node is attached to another node inherited from a parent Blueprint, this contains the name of the Blueprint parent class that owns the component template //@@TODO: We can potentially remove this if/when inherited SCS component template instances are included in subobject serialization, as we could then infer that the owner class is always the same as the BP class.
---@field public bIsParentComponentNative boolean @If the node is parented, this indicates whether or not the template is found in the CDO's Components array
---@field public ChildNodes TArray<USCS_Node> @Set of child nodes
---@field public MetaDataArray TArray<FBPVariableMetaDataEntry> @Metadata information for this Node
---@field public VariableGuid FGuid
---@field private InternalVariableName string @Internal variable name. This is used for:                       a) Generating the component template (archetype) object name.                       b) A FObjectProperty in the generated Blueprint class. This holds a reference to the component instance created at Actor construction time.                       c) Archetype lookup through the generated Blueprint class. All instances route back to the archetype through the variable name (i.e. not the template name).
local USCS_Node = {}

