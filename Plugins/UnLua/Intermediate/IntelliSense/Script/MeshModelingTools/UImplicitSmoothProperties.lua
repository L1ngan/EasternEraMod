---Properties for Implicit smoothing
---@class UImplicitSmoothProperties : UInteractiveToolPropertySet
---@field public SmoothSpeed number @Smoothing speed //UPROPERTY(EditAnywhere, Category = ImplicitSmoothing, meta = (UIMin = "0.0", UIMax = "1.0", ClampMin = "0.0", ClampMax = "1.0"))
---@field public Smoothness number @Desired Smoothness. This is not a linear quantity, but larger numbers produce smoother results
---@field public bPreserveUVs boolean @If this is false, the smoother will try to reshape the triangles to be more regular, which will distort UVs
---@field public VolumeCorrection number @Magic number that allows you to try to correct for shrinking caused by smoothing
local UImplicitSmoothProperties = {}

