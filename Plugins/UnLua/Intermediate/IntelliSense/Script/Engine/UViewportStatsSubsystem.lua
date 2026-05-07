---The Viewport Stats Subsystem offers the ability to add messages to the current
---viewport such as "LIGHTING NEEDS TO BE REBUILT" and "BLUEPRINT COMPILE ERROR".
---Example usage:
---     if (UViewportStatsSubsystem* ViewportSubsystem = GetWorld()->GetSubsystem<UViewportStatsSubsystem>())
---     {
---             // Bind a member function delegate to the subsystem...
---             FViewportDisplayCallback Callback;
---             Callback.BindDynamic(this, &UCustomClass::DisplayViewportMessage);
---             ViewportSubsystem->AddDisplayDelegate(Callback);
---             // ... or use inline lambda functions
---             ViewportSubsystem->AddDisplayDelegate([](FText& OutText, FLinearColor& OutColor)
---             {
---                     // Some kind of state management
---                     OutText = NSLOCTEXT("FooNamespace", "Blarg", "Display message here");
---                     OutColor = FLinearColor::Red;
---                     return bShouldDisplay;
---             });
---     }
---@class UViewportStatsSubsystem : UWorldSubsystem
local UViewportStatsSubsystem = {}

---Remove a callback function from the display subsystem
---                                              This is the value returned from AddDisplayDelegate.
---@param IndexToRemove integer
function UViewportStatsSubsystem:RemoveDisplayDelegate(IndexToRemove) end

---Add a message to be displayed on the viewport of this world
---@param Text string
---@param Color FLinearColor @[opt] 
---@param Duration number @[opt] 
---@param DisplayOffset FVector2D
function UViewportStatsSubsystem:AddTimedDisplay(Text, Color, Duration, DisplayOffset) end

---Add a dynamic delegate to the display subsystem.
---                                      Signature of callbacks should be: bool(FText& OutTest, FLinearColor& OutColor)
---@param Delegate Delegate
---@return integer
function UViewportStatsSubsystem:AddDisplayDelegate(Delegate) end

