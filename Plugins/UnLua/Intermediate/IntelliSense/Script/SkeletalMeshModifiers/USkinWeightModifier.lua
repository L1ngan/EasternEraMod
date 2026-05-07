---API used to modify skin weights on a Skeletal Mesh asset.
---To use:
---1. Instantiate an instance of USkinWeightModifier
---2. Call "SetSkeletalMesh(MyMeshAsset)", passing in the skeletal mesh you want to edit weights on
---3. Use Get/Set weights functions, and Normalize/Prune to edit the weights as desired
---4. When ready to commit to the asset, call CommitWeightsToSkeletalMesh() and save the asset if desired
---This API can be used from C++, Blueprint or Python. Here is a sample usage of the API in Python:
---import unreal
---# create a weight modifier for a given skeletal mesh
---skel_mesh = unreal.EditorAssetLibrary().load_asset("/Game/Characters/Wolf/Meshes/SK_Wolf")
---weight_modifier = unreal.SkinWeightModifier()
---weight_modifier.set_skeletal_mesh(skel_mesh)
---# get weight of vertex 1234
---vertex_weights = weight_modifier.get_vertex_weights(1234)
---print(vertex_weights)
---# remove neck2 as an influence on this vertex
---vertex_weights.pop("neck2")
---weight_modifier.set_vertex_weights(vertex_weights, True)
---print(vertex_weights)
---# commit change to the skeletal mesh
---weight_modifier.commit_weights_to_skeletal_mesh()
---OUTPUT:
---{"head": 0.6, "neck1": 0.3, "neck2": 0.1}
---{"head": 0.6, "neck1": 0.3}
---In Python, the per-vertex weights are stored as a dictionary mapping Bone Names to float weight values.
---The "SetVertexWeights()" function expects the same data structure. You can add/remove/edit influences as needed.
---The SetVertexWeights() function does not normalize the weights. So you can make multiple modifications
---and call NormalizeVertexWeights() or NormalizeAllWeights() as desired.
---The PruneVertexWeights() and EnforceMaxInfluences() functions can be used to trim small influences
---and clamp the total number of influences per vertex as needed.
---Note that it is not required to normalize the weights by calling any of the normalize functions. Or manually before
---calling SetVertexWeights(). Committing the weights to the skeletal mesh will always enforce normalization.
---Though it may be useful to normalize while editing.
---@class USkinWeightModifier : UObject
---@field private Mesh USkeletalMesh @the skeletal mesh that was loaded by SetSkeletalMesh
local USkinWeightModifier = {}

---Set bone weights for a single vertex. The weights are stored as supplied and not normalized until
---either "CommitWeightsToSkeletalMesh()" or "NormalizeVertexWeights()" is called.
---@param VertexID integer
---@param InWeights TMap_string__number_
---@param bReplaceAll boolean @[opt] 
---@return boolean
function USkinWeightModifier:SetVertexWeights(VertexID, InWeights, bReplaceAll) end

---Call this first to load the weights for a skeletal mesh for fast editing.
---@param InMesh USkeletalMesh
---@return boolean
function USkinWeightModifier:SetSkeletalMesh(InMesh) end

---Remove all weights below the given threshold value, on the given vertex.
---Influences that are pruned will no longer receive weight from normalization.
---@param VertexID integer
---@param WeightThreshold number
---@return boolean
function USkinWeightModifier:PruneVertexWeights(VertexID, WeightThreshold) end

---Remove all weights below the given threshold value, on all vertices.
---@param WeightThreshold number
---@return boolean
function USkinWeightModifier:PruneAllWeights(WeightThreshold) end

---Normalize weights on the specified vertex.
---@param VertexID integer
---@return boolean
function USkinWeightModifier:NormalizeVertexWeights(VertexID) end

---Normalize weights on all vertices in the mesh.
---@return boolean
function USkinWeightModifier:NormalizeAllWeights() end

---Get all bone weights for a single vertex.
---@param VertexID integer
---@return TMap_string__number_
function USkinWeightModifier:GetVertexWeights(VertexID) end

---Get a reference to the skeletal mesh that was loaded
---@return USkeletalMesh
function USkinWeightModifier:GetSkeletalMesh() end

---Get the total number of vertices in the skeletal mesh.
---@return integer
function USkinWeightModifier:GetNumVertices() end

---Get an array of all bone names in the skeletal mesh.
---@return TArray_string_
function USkinWeightModifier:GetAllBoneNames() end

---Strips out smallest influences to ensure each vertex does not have weight on more influences than MaxInfluences.
---Influences with the smallest weight are culled first.
---@param MaxInfluences integer @[opt] 
---@return boolean
function USkinWeightModifier:EnforceMaxInfluences(MaxInfluences) end

---Actually applies the weight modifications to the skeletal mesh. This action creates an undo transaction.
---The skeletal mesh asset will be dirtied, but it is up to the user to save the asset if required.
---@return boolean
function USkinWeightModifier:CommitWeightsToSkeletalMesh() end

