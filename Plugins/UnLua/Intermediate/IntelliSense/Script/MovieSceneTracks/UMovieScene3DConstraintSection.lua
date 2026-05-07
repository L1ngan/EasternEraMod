---Base class for 3D constraint section
---@class UMovieScene3DConstraintSection : UMovieSceneSection
---@field protected ConstraintBindingID FMovieSceneObjectBindingID @The constraint binding that this movie Constraint uses
local UMovieScene3DConstraintSection = {}

---Sets the constraint binding for this Constraint section
---@param InConstraintBindingID FMovieSceneObjectBindingID
function UMovieScene3DConstraintSection:SetConstraintBindingID(InConstraintBindingID) end

---Gets the constraint binding for this Constraint section
---@return FMovieSceneObjectBindingID
function UMovieScene3DConstraintSection:GetConstraintBindingID() end

