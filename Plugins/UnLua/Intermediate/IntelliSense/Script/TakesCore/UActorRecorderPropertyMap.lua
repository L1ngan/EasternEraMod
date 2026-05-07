---This represents a list of all possible properties and components on an actor
---which can be recorded by the Actor Recorder and whether or not the user wishes
---to record them. If you wish to expose a property to be recorded it needs to be marked
---as "Interp" (C++) or "Expose to Cinematics" in Blueprints.
---@class UActorRecorderPropertyMap : UObject
---@field public RecordedObject TSoftObjectPtr<UObject>
---@field public Properties TArray<FActorRecordedProperty> @Represents properties exposed to Cinematics that can possibly be recorded.
---@field public Children TArray<UActorRecorderPropertyMap>
local UActorRecorderPropertyMap = {}

