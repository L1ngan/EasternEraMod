---A mesh to be instanced as a part of a Nanite Assembly
---@class FNaniteAssemblyPart
---@field public MeshObjectPath FSoftObjectPath @The static mesh to render for the part
---@field public MaterialRemap TArray<integer> @The mapping of the part's materials to the final material list (Empty means material indices map 1:1)
local FNaniteAssemblyPart = {}
