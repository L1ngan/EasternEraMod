---A settings class used to store and retreive user settings related to the Dataflow Editor
---@class UDataflowEditorOptions : UDeveloperSettings
---@field public ConstructionViewFOV number @FOV for the Construction viewport camera
---@field public SimulationViewFOV number @FOV for the Simulation viewport camera
---@field public bConstructionViewFixedExposure boolean @Whether the Construction viewport has Auto or Fixed exposure
---@field public bSimulationViewFixedExposure boolean @Whether the Simulation viewport has Auto or Fixed exposure
---@field public ConstructionProfileName string @Preview Scene Profile for the Construction viewport
---@field public SimulationProfileName string @Preview Scene Profile for the Simulation viewport
---@field public ConstructionViewportMousePanButton EDataflowConstructionViewportMousePanButton @Which mouse button controls camera panning in the Construction Viewport in 2D view mode
---@field public EditorEvaluationMode EDataflowEditorEvaluationMode
local UDataflowEditorOptions = {}

