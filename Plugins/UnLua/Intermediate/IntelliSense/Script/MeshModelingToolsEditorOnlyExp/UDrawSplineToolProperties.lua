---@class UDrawSplineToolProperties : UInteractiveToolPropertySet
---@field public bLoop boolean @Determines whether the created spline is a loop. This can be toggled using "Closed Loop" in the detail panel after spline creation.
---@field public OutputMode EDrawSplineOutputMode @Determines how the resulting spline is emitted on tool accept.
---@field public TargetActor TWeakObjectPtr<AActor> @Actor to attach to when Output Mode is "Existing Actor"
---@field public BlueprintToCreate TWeakObjectPtr<UBlueprint> @Blueprint to create when Output Mode is "Create Blueprint"
---@field public ExistingSplineIndexToReplace integer @When attaching to an existing actor or creating a blueprint, controls whether the drawn spline replaces one of the target's existing components or gets added as a new one (if the index is out of bounds).
---@field public DrawMode EDrawSplineDrawMode @How the spline is drawn in the tool.
---@field public MinPointSpacing number @Point spacing when Draw Mode is "Free Draw"
---@field public ClickOffset number @How far to offset spline points from the clicked surface, along the surface normal
---@field public OffsetMethod ESplineOffsetMethod @How to choose the direction to offset points from the clicked surface
---@field public OffsetDirection FVector @Manually-specified click offset direction. Note: Will be normalized. If it is a zero vector, a default Up vector will be used instead.
---@field public FrameVisualizationWidth number @When nonzero, allows a visualization of the rotation of the spline. Can be controlled in the detail panel after creation via "Scale Visualization Width" property.
---@field public UpVectorMode EDrawSplineUpVectorMode @How the spline rotation is set. It is suggested to use a nonzero FrameVisualizationWidth to see the effects.
---@field public bPreviewUsingActorCopy boolean @When modifying existing actors, whether the result should be previewed using a copy of that actor (rather than just drawing the spline by itself). Could be toggled off if something about duplicating the given actor is problematic.
---@field public bHitWorld boolean @Whether to place spline points on the surface of objects in the world
---@field public bHitCustomPlane boolean @Whether to place spline points on a custom, user-adjustable plane
---@field public bHitGroundPlanes boolean @Whether to place spline points on a plane through the origin aligned with the Z axis in perspective views, or facing the camera in othographic views
---@field public bRerunConstructionScriptOnDrag boolean @If modifying a blueprint actor, whether to run the construction script while dragging or only at the end of a drag. Can be toggled off for expensive construction scripts.
local UDrawSplineToolProperties = {}

