---Selection state data that will be captured by scoped transactions.
---@class USplineComponentVisualizerSelectionState : UObject
---@field protected SplinePropertyPath FComponentPropertyPath @Property path from the parent actor to the component
---@field protected SelectedKeys TSet<integer> @Indices of keys we have selected
---@field protected LastKeyIndexSelected integer @Index of the last key we selected
---@field protected SelectedSegmentIndex integer @Index of segment we have selected
---@field protected SelectedTangentHandle integer @Index of tangent handle we have selected
---@field protected SelectedTangentHandleType ESelectedTangentHandle @The type of the selected tangent handle
---@field protected SelectedSplinePosition FVector @Position on spline we have selected
---@field protected CachedRotation FQuat @Cached rotation for this point
local USplineComponentVisualizerSelectionState = {}

