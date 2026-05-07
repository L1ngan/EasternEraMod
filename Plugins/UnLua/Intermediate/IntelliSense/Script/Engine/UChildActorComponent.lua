---A component that spawns an Actor when registered, and destroys it when unregistered.
---@class UChildActorComponent : USceneComponent
---@field private ChildActorClass TSubclassOf<AActor> @The class of Actor to spawn
---@field private ChildActor AActor @The actor that we spawned and own
---@field private ChildActorTemplate AActor @Property to point to the template child actor for details panel purposes
---@field private EditorTreeViewVisualizationMode EChildActorComponentTreeViewVisualizationMode @Indicates how this component will be visualized for editing in a tree view. Users can change this setting per instance via the context menu in the Blueprint/SCS editor.
---@field private bChildActorIsTransient boolean @Should the spawned actor be marked as transient?
---@field private bSetOwner boolean @Should the owner of this component be set as the owner of the child actor?
local UChildActorComponent = {}

---Sets the class to use for the child actor.
---If called on a template component (owned by a CDO), the properties of any existing child actor template will be copied as best possible to the template.
---If called on a component instance in a world (and the class is changing), the created ChildActor will use the class defaults as template.
---@param InClass TSubclassOf_AActor_
function UChildActorComponent:SetChildActorClass(InClass) end

function UChildActorComponent:OnRep_ChildActor() end

---@param Actor AActor
function UChildActorComponent:OnChildActorDestroyed(Actor) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UChildActorComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UChildActorComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UChildActorComponent:AddAssetUserDataOfClass(InUserDataClass) end

