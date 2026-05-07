---Common properties for revolving a PolyPath to create a mesh.
---@class URevolveProperties : UInteractiveToolPropertySet
---@field public RevolveDegreesClamped number @Revolution extent in degrees. Clamped to a maximum of 360 if Height Offset Per Degree is set to 0.
---@field public RevolveDegrees number @Revolution extent in degrees. Clamped to a maximum of 360 if Height Offset Per Degree is set to 0.
---@field public RevolveDegreesOffset number @The angle by which to rotate the path around the axis before beginning the revolve.
---@field public StepsMaxDegrees number @Implicitly defines the number of steps in the revolution such that each step moves the revolution no more than the given number of degrees. This is only available if Explicit Steps is disabled.
---@field public bExplicitSteps boolean @If true, the number of steps can be specified explicitly via Steps. If false, the number of steps is adjusted automatically based on Steps Max Degrees.
---@field public NumExplicitSteps integer @Number of steps in the revolution. This is only available if Explicit Steps is enabled.
---@field public HeightOffsetPerDegree number @How far to move each step along the revolution axis per degree. Non-zero values are useful for creating spirals.
---@field public bReverseRevolutionDirection boolean @By default, revolution is done counterclockwise if looking down the revolution axis. This reverses the revolution direction to clockwise.
---@field public bFlipMesh boolean @Flips the mesh inside out.
---@field public bSharpNormals boolean @If true, normals are not averaged or shared between triangles beyond the Sharp Normals Degree Threshold.
---@field public SharpNormalsDegreeThreshold number @The threshold in degrees beyond which normals are not averaged or shared between triangles anymore. This is only available if Sharp Normals is enabled.
---@field public bPathAtMidpointOfStep boolean @If true, the path is placed at the midpoint of each step instead of at the start and/or end of a step. For example, this is useful for creating square columns.
---@field public PolygroupMode ERevolvePropertiesPolygroupMode @How PolyGroups are assigned to shape primitives. If caps are generated, they will always be in separate groups.
---@field public QuadSplitMode ERevolvePropertiesQuadSplit @How generated quads are split into triangles.
local URevolveProperties = {}

