---Dynamic checkerboad actor
---@class ACameraCalibrationCheckerboard : AActor
---@field public Root USceneComponent @Root component, gives the Actor a transform
---@field public TopLeft UCalibrationPointComponent @TopLeft calibration point
---@field public TopRight UCalibrationPointComponent @TopRight calibration point
---@field public BottomLeft UCalibrationPointComponent @BottomLeft calibration point
---@field public BottomRight UCalibrationPointComponent @BottomRight calibration point
---@field public Center UCalibrationPointComponent @Center calibration point
---@field public NumCornerRows integer @Number of rows
---@field public NumCornerCols integer @Number of columns
---@field public SquareSideLength number @Length of the side of each square
---@field public Thickness number @Thickness of checkerboard. Not used for calibration purposes.
---@field public CubeMesh UStaticMesh @The static mesh that we are going to use for all the cubes
---@field public OddCubeMaterial UMaterialInterface @The material that we are going to use for all the odd cubes
---@field public EvenCubeMaterial UMaterialInterface @The material that we are going to use for all the even cubes
local ACameraCalibrationCheckerboard = {}

---Rebuilds the instanced components that make up this checkerboard
function ACameraCalibrationCheckerboard:Rebuild() end

