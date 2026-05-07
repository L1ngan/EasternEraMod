---Holds meta data that is common for rating shots in cinematic workflows.
---The purpose is to share this data among related tools.
---Stored in ULevelSequence as meta  data.
---@class UMovieSceneShotMetaData : UObject
---@field private bIsNoGood Unknown @Whether this shot is marked as not good
---@field private bIsFlagged Unknown @The asset registry tag that contains whether this was flagged by a user
---@field private bIsRecorded Unknown @If this sequence was recorded.
---@field private bIsSubSequence Unknown @If this is a subsequence.
---@field private FavoriteRating Unknown @The favorite rating is like a star rating, usually 1-3 if it was rated.
local UMovieSceneShotMetaData = {}

