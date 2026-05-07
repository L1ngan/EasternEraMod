---Component that allows you to specify custom triangle mesh geometry
---Beware! This feature is experimental and may be substantially changed in future releases.
---@class UProceduralMeshComponent : UMeshComponent
---@field public bUseComplexAsSimpleCollision boolean @Controls whether the complex (Per poly) geometry should be treated as 'simple' collision. Should be set to false if this component is going to be given simple collision and simulated.
---@field public bUseAsyncCooking boolean @Controls whether the physics cooking should be done off the game thread. This should be used when collision geometry doesn't have to be immediately up to date (For example streaming in far away objects)
---@field public ProcMeshBodySetup UBodySetup @Collision data
---@field private ProcMeshSections TArray<FProcMeshSection> @Array of sections of mesh
---@field private CollisionConvexElems TArray<FKConvexElem> @Convex shapes used for simple collision
---@field private LocalBounds FBoxSphereBounds @Local space bounds of mesh
---@field private AsyncBodySetupQueue TArray<UBodySetup> @Queue for async body setups that are being cooked
local UProceduralMeshComponent = {}

---Updates a section of this procedural mesh component. This is faster than CreateMeshSection, but does not let you change topology. Collision info is also updated.
---@param SectionIndex integer
---@param Vertices TArray_FVector_
---@param Normals TArray_FVector_
---@param UV0 TArray_FVector2D_
---@param UV1 TArray_FVector2D_
---@param UV2 TArray_FVector2D_
---@param UV3 TArray_FVector2D_
---@param VertexColors TArray_FLinearColor_
---@param Tangents TArray_FProcMeshTangent_
---@param bSRGBConversion boolean @[opt] 
function UProceduralMeshComponent:UpdateMeshSection_LinearColor(SectionIndex, Vertices, Normals, UV0, UV1, UV2, UV3, VertexColors, Tangents, bSRGBConversion) end

---Updates a section of this procedural mesh component. This is faster than CreateMeshSection, but does not let you change topology. Collision info is also updated.
---This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead.
---@param SectionIndex integer
---@param Vertices TArray_FVector_
---@param Normals TArray_FVector_
---@param UV0 TArray_FVector2D_
---@param VertexColors TArray_FColor_
---@param Tangents TArray_FProcMeshTangent_
function UProceduralMeshComponent:UpdateMeshSection(SectionIndex, Vertices, Normals, UV0, VertexColors, Tangents) end

---Control visibility of a particular section
---@param SectionIndex integer
---@param bNewVisibility boolean
function UProceduralMeshComponent:SetMeshSectionVisible(SectionIndex, bNewVisibility) end

---Returns whether a particular section is currently visible
---@param SectionIndex integer
---@return boolean
function UProceduralMeshComponent:IsMeshSectionVisible(SectionIndex) end

---Returns number of sections currently created for this component
---@return integer
function UProceduralMeshComponent:GetNumSections() end

---Create/replace a section for this procedural mesh component.
---@param SectionIndex integer
---@param Vertices TArray_FVector_
---@param Triangles TArray_integer_
---@param Normals TArray_FVector_
---@param UV0 TArray_FVector2D_
---@param UV1 TArray_FVector2D_
---@param UV2 TArray_FVector2D_
---@param UV3 TArray_FVector2D_
---@param VertexColors TArray_FLinearColor_
---@param Tangents TArray_FProcMeshTangent_
---@param bCreateCollision boolean
---@param bSRGBConversion boolean @[opt] 
function UProceduralMeshComponent:CreateMeshSection_LinearColor(SectionIndex, Vertices, Triangles, Normals, UV0, UV1, UV2, UV3, VertexColors, Tangents, bCreateCollision, bSRGBConversion) end

---Create/replace a section for this procedural mesh component.
---This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead.
---@param SectionIndex integer
---@param Vertices TArray_FVector_
---@param Triangles TArray_integer_
---@param Normals TArray_FVector_
---@param UV0 TArray_FVector2D_
---@param VertexColors TArray_FColor_
---@param Tangents TArray_FProcMeshTangent_
---@param bCreateCollision boolean
function UProceduralMeshComponent:CreateMeshSection(SectionIndex, Vertices, Triangles, Normals, UV0, VertexColors, Tangents, bCreateCollision) end

---Clear a section of the procedural mesh. Other sections do not change index.
---@param SectionIndex integer
function UProceduralMeshComponent:ClearMeshSection(SectionIndex) end

---Remove collision meshes from this component
function UProceduralMeshComponent:ClearCollisionConvexMeshes() end

---Clear all mesh sections and reset to empty state
function UProceduralMeshComponent:ClearAllMeshSections() end

---Add simple collision convex to this component
---@param ConvexVerts TArray_FVector_
function UProceduralMeshComponent:AddCollisionConvexMesh(ConvexVerts) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UProceduralMeshComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UProceduralMeshComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UProceduralMeshComponent:AddAssetUserDataOfClass(InUserDataClass) end

