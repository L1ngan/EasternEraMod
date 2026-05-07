---FCreateComponentParams is a collection of input data intended to be passed to
---UModelingObjectsCreationAPI::CreateNewComponentOnActor().
---@class FCreateComponentParams
---@field public HostActor AActor @An actor to host the new component
---@field public ComponentClass TSubclassOf<UObject> @A component class to instantiate a new component instance of.
---@field public BaseName string @The base name of the new Component
---@field public bSetAsRoot boolean @If true, and if the component class is derived from USceneComponent, set this component as the root of the Actor.
---@field public bTransact boolean @If true, wrap the creation operation in a transaction, and create the component with the RF_Transactional object flag set.
local FCreateComponentParams = {}
