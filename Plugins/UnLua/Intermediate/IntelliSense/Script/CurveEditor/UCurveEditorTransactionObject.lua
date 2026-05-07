---The object type that the transaction system associates FCommandChanges for the FCurveEditor with.
---By design, the transaction system requires a UObject to associate FCommandChanges with. This is usually an asset.
---Conceptually, instances of this class will act as an "asset" and the associated FCurveEditor contains the "asset data", i.e. its  FCurveModels.
---@class UCurveEditorTransactionObject : UObject
local UCurveEditorTransactionObject = {}

