---An abstract base class for Curve Editor Filtering. If you inherit from this class your class will automatically
---show up in the Curve Editor's Filter dropdown. This allows projects to easily create custom filters to edit curve
---data as they only have to implement this class. Any UPROPERTY(EditAnywhere) properties exposed on the class will
---show up in the Curve Editor Filter panel which allows you to easily create customizable properties or advanced filters
---that rely on user supplied settings.
---The CDO is directly edited in the Curve Editor Filter panel so if you wish to save user settings between runs you can
---add the "config" property to your UPROPERTY() and it will automatically get saved.
---@class UCurveEditorFilterBase : UObject
local UCurveEditorFilterBase = {}

