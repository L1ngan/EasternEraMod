---Movie CameraCuts are sections on the CameraCuts track, that show what the viewer "sees"
---@class UMovieSceneCameraCutSection : UMovieSceneSection
---@field public bLockPreviousCamera boolean @When blending, lock the previous camera (camera cut or gameplay camera).
---@field private CameraBindingID FMovieSceneObjectBindingID @The camera binding that this movie CameraCut uses
---@field private InitialCameraCutTransform FTransform @Camera transform at the start of the cut, computed at compile time
---@field private bHasInitialCameraCutTransform boolean
---@field private ThumbnailReferenceOffset number @The reference frame offset for single thumbnail rendering
local UMovieSceneCameraCutSection = {}

---Sets the camera binding for this CameraCut section
---@param InCameraBindingID FMovieSceneObjectBindingID
function UMovieSceneCameraCutSection:SetCameraBindingID(InCameraBindingID) end

---Gets the camera binding for this CameraCut section
---@return FMovieSceneObjectBindingID
function UMovieSceneCameraCutSection:GetCameraBindingID() end

