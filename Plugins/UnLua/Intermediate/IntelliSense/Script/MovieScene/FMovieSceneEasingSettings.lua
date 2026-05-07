---@class FMovieSceneEasingSettings
---@field public AutoEaseInDuration integer @Automatically applied ease in duration in frames
---@field public AutoEaseOutDuration integer @Automatically applied ease out time
---@field public EaseIn TScriptInterface<UMovieSceneEasingFunction>
---@field public bManualEaseIn boolean @Whether to manually override this section's ease in time
---@field public ManualEaseInDuration integer @Manually override this section's ease in duration in frames
---@field public EaseOut TScriptInterface<UMovieSceneEasingFunction>
---@field public bManualEaseOut boolean @Whether to manually override this section's ease out time
---@field public ManualEaseOutDuration integer @Manually override this section's ease-out duration in frames
local FMovieSceneEasingSettings = {}
