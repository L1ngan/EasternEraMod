---The significance manager provides a framework for registering objects by tag to each have a significance
---* value calculated from which a game specific subclass and game logic can make decisions about what level
---* of detail objects should be at, tick frequency, whether to spawn effects, and other such functionality
---*
---* Each object that is registered must have a corresponding unregister event or else a dangling Object reference will
---* be left resulting in an eventual crash once the Object has been garbage collected.
---*
---* Each user of the significance manager is expected to call the Update function from the appropriate location in the
---* game code.  GameViewportClient::Tick may often serve as a good place to do this.
---@class USignificanceManager : UObject
---@field private SignificanceManagerClassName FSoftClassPath @Game specific significance class to instantiate
local USignificanceManager = {}

