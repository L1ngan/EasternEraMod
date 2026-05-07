---FieldSystemComponent
---@class UFieldSystemComponent : UPrimitiveComponent
---@field public FieldSystem UFieldSystem @Field system asset to be used to store the construction fields. This asset is not required anymore and will be deprecated soon.
---@field public bIsWorldField boolean @If enabled the field will be pushed to the world fields and will be available to materials and niagara
---@field public bIsChaosField boolean @If enabled the field will be used by all the chaos solvers
---@field public SupportedSolvers TArray<TSoftObjectPtr<AChaosSolverActor>> @List of chaos solvers that will use the field
---@field public ConstructionCommands FFieldObjectCommands @List of all the construction command
---@field public BufferCommands FFieldObjectCommands @List of all the buffer command
local UFieldSystemComponent = {}

---RemoveConstructionFields
---  This function will remove all the field component construction fields from chaos and from the world
function UFieldSystemComponent:ResetFieldSystem() end

---RemovePersistentFields
---  This function will remove all the field component persistent fields from chaos and from the world
function UFieldSystemComponent:RemovePersistentFields() end

---FalloffUniformForce
---  This function will dispatch a command to the physics thread to apply
---  a linear force in a uniform direction. The force vector is weaker as
---  it moves away from the center.
---  @@param Enabled Is this force enabled for evaluation.
---  @@param Position The origin point of the force
---  @@param Direction The direction of the linear force
---  @@param Radius Radial influence from the position, positions further away are weaker.
---  @@param Magnitude The size of the linear force.
---@param Enabled boolean
---@param Position FVector
---@param Direction FVector
---@param Radius number
---@param Magnitude number
function UFieldSystemComponent:ApplyUniformVectorFalloffForce(Enabled, Position, Direction, Radius, Magnitude) end

---ApplyExternalStran
---  This function will dispatch a command to the physics thread to apply
---  a strain field on a clustered set of geometry. This is used to trigger a
---  breaking event within the solver.
---  @@param Enabled Is this force enabled for evaluation.
---  @@param Position The origin point of the force
---  @@param Radius Radial influence from the position, positions further away are weaker.
---  @@param Magnitude The size of the linear force.
---  @@param Iterations Levels of evaluation into the cluster hierarchy.
---@param Enabled boolean
---@param Position FVector
---@param Radius number
---@param Magnitude number
---@param Iterations integer
function UFieldSystemComponent:ApplyStrainField(Enabled, Position, Radius, Magnitude, Iterations) end

---SetDynamicState
---  This function will dispatch a command to the physics thread to apply
---  a kinematic to dynamic state change for the particles within the field.
---  @@param Enabled Is this force enabled for evaluation.
---  @@param Position The location of the command
---  @@param Radius Radial influence from the position
---@param Enabled boolean
---@param Position FVector
---@param Radius number
function UFieldSystemComponent:ApplyStayDynamicField(Enabled, Position, Radius) end

---FalloffRadialForce
---  This function will dispatch a command to the physics thread to apply
---  a linear force from a position in space. The force vector is weaker as
---  it moves away from the center.
---  @@param Enabled Is this force enabled for evaluation.
---  @@param Position The origin point of the force
---  @@param Radius Radial influence from the position, positions further away are weaker.
---  @@param Magnitude The size of the linear force.
---@param Enabled boolean
---@param Position FVector
---@param Radius number
---@param Magnitude number
function UFieldSystemComponent:ApplyRadialVectorFalloffForce(Enabled, Position, Radius, Magnitude) end

---ApplyRadialForce
---  This function will dispatch a command to the physics thread to apply
---  a linear force that points away from a position.
---  @@param Enabled Is this force enabled for evaluation.
---  @@param Position The origin point of the force
---  @@param Magnitude The size of the linear force.
---@param Enabled boolean
---@param Position FVector
---@param Magnitude number
function UFieldSystemComponent:ApplyRadialForce(Enabled, Position, Magnitude) end

---AddTransientField
---  This function will dispatch a command to the physics thread to apply
---  a generic evaluation of a user defined transient field network. See documentation,
---  for examples of how to recreate variations of the above generic
---  fields using field networks
---  @@param Enabled Is this force enabled for evaluation.
---  @@param Target Type of field supported by the solver.
---  @@param MetaData Meta data used to assist in evaluation
---  @@param Field Base evaluation node for the field network.
---@param Enabled boolean
---@param Target integer
---@param MetaData UFieldSystemMetaData
---@param Field UFieldNodeBase
function UFieldSystemComponent:ApplyPhysicsField(Enabled, Target, MetaData, Field) end

---ApplyUniformForce
---  This function will dispatch a command to the physics thread to apply
---  a uniform linear force on each particle within the simulation.
---  @@param Enabled Is this force enabled for evaluation.
---  @@param Direction The direction of the linear force
---  @@param Magnitude The size of the linear force.
---@param Enabled boolean
---@param Direction FVector
---@param Magnitude number
function UFieldSystemComponent:ApplyLinearForce(Enabled, Direction, Magnitude) end

---AddPersistentField
---  This function will dispatch a command to the physics thread to apply
---  a generic evaluation of a user defined field network. This command will be persistent in time and will live until
---  the component is destroyed or until the RemovePersistenFields function is called. See documentation,
---  for examples of how to recreate variations of the above generic
---  fields using field networks
---  @@param Enabled Is this force enabled for evaluation.
---  @@param Target Type of field supported by the solver.
---  @@param MetaData Meta data used to assist in evaluation
---  @@param Field Base evaluation node for the field network.
---@param Enabled boolean
---@param Target integer
---@param MetaData UFieldSystemMetaData
---@param Field UFieldNodeBase
function UFieldSystemComponent:AddPersistentField(Enabled, Target, MetaData, Field) end

---AddConstructionField
---  This function will dispatch a command to the physics thread to apply
---  a generic evaluation of a user defined field network. This command will be used in a
---  construction script to setup some particles properties (anchors...). See documentation,
---  for examples of how to recreate variations of the above generic
---  fields using field networks
---  @@param Enabled Is this force enabled for evaluation.
---  @@param Target Type of field supported by the solver.
---  @@param MetaData Meta data used to assist in evaluation
---  @@param Field Base evaluation node for the field network.
---@param Enabled boolean
---@param Target integer
---@param MetaData UFieldSystemMetaData
---@param Field UFieldNodeBase
function UFieldSystemComponent:AddFieldCommand(Enabled, Target, MetaData, Field) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UFieldSystemComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UFieldSystemComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UFieldSystemComponent:AddAssetUserDataOfClass(InUserDataClass) end

