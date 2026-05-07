---Component data for camera shakes created by the shake system
---This is separate from FMovieSceneCameraShakeComponentData because that
---one it imported from source shake sections, and our component data here
---will be preserved on reimported entities.
---@class FMovieSceneCameraShakeInstanceData
---@field public ShakeInstance UCameraShakeBase @Shake instance created by the shake evaluation system
---@field public SectionSignature FGuid @The signature of the source section at the time the shake instance was created
---@field public bManagedByPreviewer boolean @Whether this instance is managed by a shake previewer
local FMovieSceneCameraShakeInstanceData = {}
