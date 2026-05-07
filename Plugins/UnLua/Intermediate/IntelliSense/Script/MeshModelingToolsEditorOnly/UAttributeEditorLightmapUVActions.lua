---@class UAttributeEditorLightmapUVActions : UAttributeEditorActionPropertySet
---@field public bGenerateLightmapUVs boolean @Whether or not Lightmap UVs are enabled in the Static Mesh Build Settings. Use the Static Mesh Editor to change this value.
---@field public SourceUVIndex integer @Source UV channel used to compute Lightmap UVs. Use the Static Mesh Editor to change this value.
---@field public DestinationUVIndex integer @Lightmap UVs are stored in this UV Channel. Use the Static Mesh Editor to change this value.
local UAttributeEditorLightmapUVActions = {}

---Reset Lightmap UV channels to Source Channel UV0 and Destination as UVMax+1
function UAttributeEditorLightmapUVActions:Reset() end

function UAttributeEditorLightmapUVActions:Enable() end

function UAttributeEditorLightmapUVActions:Disable() end

