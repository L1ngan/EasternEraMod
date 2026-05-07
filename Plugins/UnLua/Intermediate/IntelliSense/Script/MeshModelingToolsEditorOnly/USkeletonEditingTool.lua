---USkeletonEditingTool is a tool to edit a the ReferenceSkeleton of a SkeletalMesh (target)
---Changed are actually commit to the SkeletalMesh and it's mesh description on Accept.
---@class USkeletonEditingTool : USingleSelectionTool
---@field public Properties USkeletonEditingProperties
---@field public ProjectionProperties UProjectionProperties
---@field public MirroringProperties UMirroringProperties
---@field public OrientingProperties UOrientingProperties
---@field public SelectionMechanic UPolygonSelectionMechanic
---@field protected Modifier USkeletonModifier
---@field protected LeftClickBehavior USingleClickInputBehavior
---@field protected PreviewMesh UPreviewMesh
---@field protected TargetWorld TWeakObjectPtr<UWorld>
---@field protected ViewContext TWeakObjectPtr<UGizmoViewContext>
---@field protected Operation EEditingOperation
---@field protected GizmoContext TWeakObjectPtr<USkeletalMeshGizmoContextObjectBase> @gizmo
---@field protected GizmoWrapper USkeletalMeshGizmoWrapperBase
---@field protected EditorContext TWeakObjectPtr<USkeletalMeshEditorContextObjectBase>
local USkeletonEditingTool = {}

