---Base class for all sources that can be recorded with the Take Recorder. Custom recording sources can
---be created by inheriting from this class and implementing the Start/Tick/Stop recording functions.
---The level sequence that the recording is being placed into is provided so that the take can decide
---to store the data directly in the resulting level sequence, but sources are not limited to generating
---data in the specified Level Sequence. The source should be registered with the ITakeRecorderModule for
---it to show up in the Take Recorder UI. If creating a recording setup via code you can just add instances
---of your Source to the UTakeRecorderSources instance you're using to record and skip registering them with
---the module.
---Sources should reset their state before recording as there is not a guarantee that the object will be newly
---created for each recording.
---@class UTakeRecorderSource : UObject
---@field public bEnabled boolean @True if this source is cued for recording or not
---@field public TakeNumber integer
---@field public TrackTint FColor
local UTakeRecorderSource = {}

