---Proxy structure for 3D transform section key data.
---@class FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct
---@field public Location FVector @The key's translation value.
---@field public Rotation FRotator @The key's rotation value.
---@field public Scale FVector3f @The key's scale value.
---@field public Time FFrameNumber @The key's time.
local FMovieScene3DTransformKeyStruct = {}
