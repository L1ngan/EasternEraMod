---Implements a cinematic shot section.
---@class UMovieSceneCinematicShotSection : UMovieSceneSubSection
---@field private ShotDisplayName string @The Shot's display name
---@field private ThumbnailReferenceOffset number @The shot's reference frame offset for single thumbnail rendering
local UMovieSceneCinematicShotSection = {}

---Set the shot display name
---@param InShotDisplayName string
function UMovieSceneCinematicShotSection:SetShotDisplayName(InShotDisplayName) end

---
---@return string
function UMovieSceneCinematicShotSection:GetShotDisplayName() end

