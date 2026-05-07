---Edit layer renderer added at the bottom of the stack to provide the default value for every requested target layer (heightmaps and weightmaps)
--- It could have been handled with a simple clear as the first operation when performing the merge, but doing it through a renderer turns out to be an elegant way to resolve the
--- situation where the first actual edit layer's render item declares dependencies between each component and others (e.g. say you have only a ULandscapeHeightmapNormalsEditLayerRenderer
--- in the renderer stack, which requires each component's immediate neighbors). In such a situation, the component dependencies would be skipped because dependencies are
--- between a renderer and its previous one in the stack and since in the case described above (a single renderer in the stack), there's no previous renderer, then the dependencies
--- would simply not be registered, and the render batches would end up being incorrect as a result.
---@class ULandscapeDefaultEditLayerRenderer : UObject
local ULandscapeDefaultEditLayerRenderer = {}

