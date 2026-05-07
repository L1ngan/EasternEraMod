---@class UVisualLoggerKismetLibrary : UBlueprintFunctionLibrary
local UVisualLoggerKismetLibrary = {}

---Makes SourceOwner log to DestinationOwner's vislog
---@param SourceOwner UObject
---@param DestinationOwner UObject
function UVisualLoggerKismetLibrary.RedirectVislog(SourceOwner, DestinationOwner) end

---Logs simple text string with Visual Logger - recording for Visual Logs has to be enabled to record this data
---Message log is used for calls on game thread, otherwise regular output log is used for thread safety.
---@param WorldContextObject UObject
---@param Text string
---@param LogCategory string @[opt] 
---@param bAddToMessageLog boolean @[opt] 
function UVisualLoggerKismetLibrary.LogText(WorldContextObject, Text, LogCategory, bAddToMessageLog) end

---Logs sphere shape - recording for Visual Logs has to be enabled to record this data
---Message log is used for calls on game thread, otherwise regular output log is used for thread safety.
---@param WorldContextObject UObject
---@param Center FVector
---@param Radius number
---@param Text string
---@param ObjectColor FLinearColor @[opt] 
---@param LogCategory string @[opt] 
---@param bAddToMessageLog boolean @[opt] 
---@param bWireframe boolean @[opt] 
function UVisualLoggerKismetLibrary.LogSphere(WorldContextObject, Center, Radius, Text, ObjectColor, LogCategory, bAddToMessageLog, bWireframe) end

---Logs segment - recording for Visual Logs has to be enabled to record this data
---Message log is used for calls on game thread, otherwise regular output log is used for thread safety.
---@param WorldContextObject UObject
---@param SegmentStart FVector
---@param SegmentEnd FVector
---@param Text string
---@param ObjectColor FLinearColor @[opt] 
---@param Thickness number @[opt] 
---@param CategoryName string @[opt] 
---@param bAddToMessageLog boolean @[opt] 
function UVisualLoggerKismetLibrary.LogSegment(WorldContextObject, SegmentStart, SegmentEnd, Text, ObjectColor, Thickness, CategoryName, bAddToMessageLog) end

---Logs oriented box shape - recording for Visual Logs has to be enabled to record this data
---Message log is used for calls on game thread, otherwise regular output log is used for thread safety.
---@param WorldContextObject UObject
---@param BoxShape FBox
---@param Transform FTransform
---@param Text string
---@param ObjectColor FLinearColor @[opt] 
---@param LogCategory string @[opt] 
---@param bAddToMessageLog boolean @[opt] 
---@param bWireframe boolean @[opt] 
function UVisualLoggerKismetLibrary.LogOrientedBox(WorldContextObject, BoxShape, Transform, Text, ObjectColor, LogCategory, bAddToMessageLog, bWireframe) end

---Logs location as sphere with given radius - recording for Visual Logs has to be enabled to record this data
---Message log is used for calls on game thread, otherwise regular output log is used for thread safety.
---@param WorldContextObject UObject
---@param Location FVector
---@param Text string
---@param ObjectColor FLinearColor @[opt] 
---@param Radius number @[opt] 
---@param LogCategory string @[opt] 
---@param bAddToMessageLog boolean @[opt] 
function UVisualLoggerKismetLibrary.LogLocation(WorldContextObject, Location, Text, ObjectColor, Radius, LogCategory, bAddToMessageLog) end

---Logs cylinder shape - recording for Visual Logs has to be enabled to record this data
---Message log is used for calls on game thread, otherwise regular output log is used for thread safety.
---@param WorldContextObject UObject
---@param Start FVector
---@param End FVector
---@param Radius number
---@param Text string
---@param ObjectColor FLinearColor @[opt] 
---@param LogCategory string @[opt] 
---@param bAddToMessageLog boolean @[opt] 
---@param bWireframe boolean @[opt] 
function UVisualLoggerKismetLibrary.LogCylinder(WorldContextObject, Start, End, Radius, Text, ObjectColor, LogCategory, bAddToMessageLog, bWireframe) end

---Logs cone shape - recording for Visual Logs has to be enabled to record this data
---Message log is used for calls on game thread, otherwise regular output log is used for thread safety.
---@param WorldContextObject UObject
---@param Origin FVector
---@param Direction FVector
---@param Length number
---@param Angle number
---@param Text string
---@param ObjectColor FLinearColor @[opt] 
---@param LogCategory string @[opt] 
---@param bAddToMessageLog boolean @[opt] 
---@param bWireframe boolean @[opt] 
function UVisualLoggerKismetLibrary.LogCone(WorldContextObject, Origin, Direction, Length, Angle, Text, ObjectColor, LogCategory, bAddToMessageLog, bWireframe) end

---Logs circle - recording for Visual Logs has to be enabled to record this data
---Message log is used for calls on game thread, otherwise regular output log is used for thread safety.
---@param WorldContextObject UObject
---@param Center FVector
---@param UpAxis FVector
---@param Radius number
---@param Text string
---@param ObjectColor FLinearColor @[opt] 
---@param Thickness number @[opt] 
---@param CategoryName string @[opt] 
---@param bAddToMessageLog boolean @[opt] 
---@param bWireframe boolean @[opt] 
function UVisualLoggerKismetLibrary.LogCircle(WorldContextObject, Center, UpAxis, Radius, Text, ObjectColor, Thickness, CategoryName, bAddToMessageLog, bWireframe) end

---Logs capsule shape - recording for Visual Logs has to be enabled to record this data
---Message log is used for calls on game thread, otherwise regular output log is used for thread safety.
---@param WorldContextObject UObject
---@param Base FVector
---@param HalfHeight number
---@param Radius number
---@param Rotation FQuat
---@param Text string
---@param ObjectColor FLinearColor @[opt] 
---@param LogCategory string @[opt] 
---@param bAddToMessageLog boolean @[opt] 
---@param bWireframe boolean @[opt] 
function UVisualLoggerKismetLibrary.LogCapsule(WorldContextObject, Base, HalfHeight, Radius, Rotation, Text, ObjectColor, LogCategory, bAddToMessageLog, bWireframe) end

---Logs box shape - recording for Visual Logs has to be enabled to record this data
---Message log is used for calls on game thread, otherwise regular output log is used for thread safety.
---@param WorldContextObject UObject
---@param BoxShape FBox
---@param Text string
---@param ObjectColor FLinearColor @[opt] 
---@param LogCategory string @[opt] 
---@param bAddToMessageLog boolean @[opt] 
---@param bWireframe boolean @[opt] 
function UVisualLoggerKismetLibrary.LogBox(WorldContextObject, BoxShape, Text, ObjectColor, LogCategory, bAddToMessageLog, bWireframe) end

---Logs arrow - recording for Visual Logs has to be enabled to record this data
---Message log is used for calls on game thread, otherwise regular output log is used for thread safety.
---@param WorldContextObject UObject
---@param SegmentStart FVector
---@param SegmentEnd FVector
---@param Text string
---@param ObjectColor FLinearColor @[opt] 
---@param CategoryName string @[opt] 
---@param bAddToMessageLog boolean @[opt] 
---@param ArrowHeadSize number @[opt] 
function UVisualLoggerKismetLibrary.LogArrow(WorldContextObject, SegmentStart, SegmentEnd, Text, ObjectColor, CategoryName, bAddToMessageLog, ArrowHeadSize) end

---@param bEnabled boolean
function UVisualLoggerKismetLibrary.EnableRecording(bEnabled) end

