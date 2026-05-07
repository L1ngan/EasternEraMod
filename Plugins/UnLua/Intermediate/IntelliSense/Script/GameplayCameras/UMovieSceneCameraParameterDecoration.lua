---Decorator for camera parameter sections. The decorator extends the manufactured ECS entities
---so that we flag the camera parameter as being "animated" and make the camera system apply
---its value every frame until Sequencer lets go of it.
---@class UMovieSceneCameraParameterDecoration : UObject
local UMovieSceneCameraParameterDecoration = {}

