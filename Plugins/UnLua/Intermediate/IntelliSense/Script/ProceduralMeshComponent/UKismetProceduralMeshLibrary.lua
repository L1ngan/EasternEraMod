---@class UKismetProceduralMeshLibrary : UBlueprintFunctionLibrary
local UKismetProceduralMeshLibrary = {}

---Slice the ProceduralMeshComponent (including simple convex collision) using a plane. Optionally create 'cap' geometry.
---@param InProcMesh UProceduralMeshComponent
---@param PlanePosition FVector
---@param PlaneNormal FVector
---@param bCreateOtherHalf boolean
---@param OutOtherHalfProcMesh UProceduralMeshComponent @[out] 
---@param CapOption EProcMeshSliceCapOption
---@param CapMaterial UMaterialInterface
function UKismetProceduralMeshLibrary.SliceProceduralMesh(InProcMesh, PlanePosition, PlaneNormal, bCreateOtherHalf, OutOtherHalfProcMesh, CapOption, CapMaterial) end

---Grab geometry data from a StaticMesh asset.
---@param InMesh UStaticMesh
---@param LODIndex integer
---@param SectionIndex integer
---@param Vertices TArray_FVector_ @[out] 
---@param Triangles TArray_integer_ @[out] 
---@param Normals TArray_FVector_ @[out] 
---@param UVs TArray_FVector2D_ @[out] 
---@param Tangents TArray_FProcMeshTangent_ @[out] 
function UKismetProceduralMeshLibrary.GetSectionFromStaticMesh(InMesh, LODIndex, SectionIndex, Vertices, Triangles, Normals, UVs, Tangents) end

---Grab geometry data from a ProceduralMeshComponent.
---@param InProcMesh UProceduralMeshComponent
---@param SectionIndex integer
---@param Vertices TArray_FVector_ @[out] 
---@param Triangles TArray_integer_ @[out] 
---@param Normals TArray_FVector_ @[out] 
---@param UVs TArray_FVector2D_ @[out] 
---@param Tangents TArray_FProcMeshTangent_ @[out] 
function UKismetProceduralMeshLibrary.GetSectionFromProceduralMesh(InProcMesh, SectionIndex, Vertices, Triangles, Normals, UVs, Tangents) end

---Generate vertex and index buffer for a simple box, given the supplied dimensions. Normals, UVs and tangents are also generated for each vertex.
---@param BoxRadius FVector
---@param Vertices TArray_FVector_ @[out] 
---@param Triangles TArray_integer_ @[out] 
---@param Normals TArray_FVector_ @[out] 
---@param UVs TArray_FVector2D_ @[out] 
---@param Tangents TArray_FProcMeshTangent_ @[out] 
function UKismetProceduralMeshLibrary.GenerateBoxMesh(BoxRadius, Vertices, Triangles, Normals, UVs, Tangents) end

---Generate a vertex buffer, index buffer and UVs for a tessellated grid mesh.
---@param NumX integer
---@param NumY integer
---@param Triangles TArray_integer_ @[out] 
---@param Vertices TArray_FVector_ @[out] 
---@param UVs TArray_FVector2D_ @[out] 
---@param GridSpacing number @[opt] 
function UKismetProceduralMeshLibrary.CreateGridMeshWelded(NumX, NumY, Triangles, Vertices, UVs, GridSpacing) end

---Generate an index buffer for a grid of quads.
---@param NumX integer
---@param NumY integer
---@param bWinding boolean
---@param Triangles TArray_integer_ @[out] 
function UKismetProceduralMeshLibrary.CreateGridMeshTriangles(NumX, NumY, bWinding, Triangles) end

---Generate a vertex buffer, index buffer and UVs for a grid mesh where each quad is split, with standard 0-1 UVs on UV0 and point sampled texel center UVs for UV1.
---@param NumX integer
---@param NumY integer
---@param Triangles TArray_integer_ @[out] 
---@param Vertices TArray_FVector_ @[out] 
---@param UVs TArray_FVector2D_ @[out] 
---@param UV1s TArray_FVector2D_ @[out] 
---@param GridSpacing number @[opt] 
function UKismetProceduralMeshLibrary.CreateGridMeshSplit(NumX, NumY, Triangles, Vertices, UVs, UV1s, GridSpacing) end

---Copy materials from StaticMeshComponent to ProceduralMeshComponent.
---@param StaticMeshComponent UStaticMeshComponent
---@param LODIndex integer
---@param ProcMeshComponent UProceduralMeshComponent
---@param bCreateCollision boolean
function UKismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent(StaticMeshComponent, LODIndex, ProcMeshComponent, bCreateCollision) end

---Add a quad, specified by four indices, to a triangle index buffer as two triangles.
---@param Triangles TArray_integer_ @[out] 
---@param Vert0 integer
---@param Vert1 integer
---@param Vert2 integer
---@param Vert3 integer
function UKismetProceduralMeshLibrary.ConvertQuadToTriangles(Triangles, Vert0, Vert1, Vert2, Vert3) end

---Automatically generate normals and tangent vectors for a mesh
---UVs are required for correct tangent generation.
---@param Vertices TArray_FVector_
---@param Triangles TArray_integer_
---@param UVs TArray_FVector2D_
---@param Normals TArray_FVector_ @[out] 
---@param Tangents TArray_FProcMeshTangent_ @[out] 
function UKismetProceduralMeshLibrary.CalculateTangentsForMesh(Vertices, Triangles, UVs, Normals, Tangents) end

