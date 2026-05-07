---Audio section, for use in the audio track, or by attached audio objects
---@class UMovieSceneAudioSection : UMovieSceneSection
---@field private Sound USoundBase @The sound cue or wave that this section plays
---@field private StartFrameOffset FFrameNumber @The offset into the beginning of the audio clip
---@field private SoundVolume FMovieSceneFloatChannel @The volume the sound will be played with.
---@field private PitchMultiplier FMovieSceneFloatChannel @The pitch multiplier the sound will be played with.
---@field private Inputs_Float TMap<string, FMovieSceneFloatChannel> @Generic inputs for the sound
---@field private Inputs_String TMap<string, FMovieSceneStringChannel>
---@field private Inputs_Bool TMap<string, FMovieSceneBoolChannel>
---@field private Inputs_Int TMap<string, FMovieSceneIntegerChannel>
---@field private Inputs_Trigger TMap<string, FMovieSceneAudioTriggerChannel>
---@field private AttachActorData FMovieSceneActorReferenceData
---@field private bLooping boolean @Allow looping if the section length is greater than the sound duration
---@field private bSuppressSubtitles boolean
---@field private bOverrideAttenuation boolean @Should the attenuation settings on this section be used.
---@field private AttenuationSettings USoundAttenuation @The attenuation settings to use.
---@field private OnQueueSubtitles Delegate @Called when subtitles are sent to the SubtitleManager.  Set this delegate if you want to hijack the subtitles for other purposes
---@field private OnAudioFinished MulticastDelegate @called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early
---@field private OnAudioPlaybackPercent MulticastDelegate
local UMovieSceneAudioSection = {}

---Set whether subtitles should be suppressed
---@param bInSuppressSubtitles boolean
function UMovieSceneAudioSection:SetSuppressSubtitles(bInSuppressSubtitles) end

---Set the offset into the beginning of the audio clip
---@param InStartOffset FFrameNumber
function UMovieSceneAudioSection:SetStartOffset(InStartOffset) end

---Sets this section's sound
---@param InSound USoundBase
function UMovieSceneAudioSection:SetSound(InSound) end

---Set whether the attentuation should be overriden
---@param bInOverrideAttenuation boolean
function UMovieSceneAudioSection:SetOverrideAttenuation(bInOverrideAttenuation) end

---Set whether the sound should be looped
---@param bInLooping boolean
function UMovieSceneAudioSection:SetLooping(bInLooping) end

---Set the attenuation settings for this audio section
---@param InAttenuationSettings USoundAttenuation
function UMovieSceneAudioSection:SetAttenuationSettings(InAttenuationSettings) end

---
---@return boolean
function UMovieSceneAudioSection:GetSuppressSubtitles() end

---Get the offset into the beginning of the audio clip
---@return FFrameNumber
function UMovieSceneAudioSection:GetStartOffset() end

---Gets the sound for this section
---@return USoundBase
function UMovieSceneAudioSection:GetSound() end

---Gets the sound that this section should use for playback, taking into account localization concerns
---@return USoundBase
function UMovieSceneAudioSection:GetPlaybackSound() end

---
---@return boolean
function UMovieSceneAudioSection:GetOverrideAttenuation() end

---
---@return boolean
function UMovieSceneAudioSection:GetLooping() end

---
---@return USoundAttenuation
function UMovieSceneAudioSection:GetAttenuationSettings() end

