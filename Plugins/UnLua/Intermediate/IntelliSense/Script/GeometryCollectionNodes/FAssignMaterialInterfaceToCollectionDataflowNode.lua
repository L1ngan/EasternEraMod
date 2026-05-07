---Assign material to a set of face in a geometry collection
---@class FAssignMaterialInterfaceToCollectionDataflowNode : FDataflowNode
---@field private Collection FManagedArrayCollection @Collection to assign material to
---@field private FaceSelection FDataflowFaceSelection @Faces that will be set with this material index, if no selection is connected , all faces will be set
---@field private MaterialArray TArray<UMaterialInterface> @Array holding the materials objects
---@field private Material UMaterialInterface @Material to assign to the selection
---@field private MaterialIndex integer @Index where the material was set in the array
---@field private bMergeDuplicateMaterials boolean @If true, detect duplicate in the material array and only add the material in the array if it does not yet exists
local FAssignMaterialInterfaceToCollectionDataflowNode = {}
