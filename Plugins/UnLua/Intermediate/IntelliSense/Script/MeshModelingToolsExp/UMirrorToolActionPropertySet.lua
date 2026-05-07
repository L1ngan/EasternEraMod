---@class UMirrorToolActionPropertySet : UInteractiveToolPropertySet
---@field public bButtonsOnlyChangeOrientation boolean @If true the "Preset Mirror Directions" buttons only change the plane orientation, not location.
local UMirrorToolActionPropertySet = {}

---Move the mirror plane and adjust its normal to mirror entire selection upward.
function UMirrorToolActionPropertySet:Up() end

---Move the mirror plane to center of bounding box without changing its normal.
function UMirrorToolActionPropertySet:ShiftToCenter() end

---Move the mirror plane and adjust its normal to mirror entire selection rightward.
function UMirrorToolActionPropertySet:Right() end

---Move the mirror plane and adjust its normal to mirror entire selection leftward.
function UMirrorToolActionPropertySet:Left() end

---Move the mirror plane and adjust its normal to mirror entire selection forward.
function UMirrorToolActionPropertySet:Forward() end

---Move the mirror plane and adjust its normal to mirror entire selection downward.
function UMirrorToolActionPropertySet:Down() end

---Move the mirror plane and adjust its normal to mirror entire selection backward.
function UMirrorToolActionPropertySet:Backward() end

