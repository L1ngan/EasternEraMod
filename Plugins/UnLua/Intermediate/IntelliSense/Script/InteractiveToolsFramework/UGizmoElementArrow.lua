---@class UGizmoElementArrow : UGizmoElementBase
---@field protected CylinderElement UGizmoElementCylinder @Arrow cylinder body
---@field protected ConeElement UGizmoElementCone @Arrow cone head
---@field protected BoxElement UGizmoElementBox @Arrow box head
---@field protected Base FVector @Location of center of arrow base circle.
---@field protected Direction FVector @Direction of arrow axis
---@field protected SideDirection FVector @Side direction for box head
---@field protected BodyLength number @Arrow body length
---@field protected BodyRadius number @Radius of arrow cylinder
---@field protected HeadLength number @Length of head, cone or box
---@field protected HeadRadius number @Radius of head cone
---@field protected NumSides integer @Number of sides for tessellating cone and cylinder
---@field protected bEndCaps boolean @Whether to render and end cap on the base of the arrow head.
---@field protected HeadType EGizmoElementArrowHeadType @Head type
---@field protected HitMask TWeakObjectPtr<UGizmoElementBase> @Hit mask
local UGizmoElementArrow = {}

