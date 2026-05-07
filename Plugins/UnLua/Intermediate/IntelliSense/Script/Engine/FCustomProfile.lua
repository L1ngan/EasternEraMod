---Structure for custom profiles.
---if you'd like to just add custom channels, not changing anything else engine defined
---if you'd like to override all about profile, please use
---+Profiles=(Name=NameOfProfileYouLikeToOverwrite,....)
---@class FCustomProfile
---@field public Name string @Name of new profile to add
---@field public CustomResponses TArray<FResponseChannel> @Types of objects that this physics objects will collide with.
local FCustomProfile = {}
