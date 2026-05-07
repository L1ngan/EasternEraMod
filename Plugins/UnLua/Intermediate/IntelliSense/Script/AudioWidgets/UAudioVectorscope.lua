---A vectorscope UMG widget.
---Supports displaying waveforms in 2D (Left channel X axis, Right channel Y axis) from incoming audio samples.
---@class UAudioVectorscope : UWidget
---@field public VectorscopeStyle FAudioVectorscopePanelStyle @The vectorscope panel style
---@field public AudioBus UAudioBus @The audio bus used to obtain audio samples for the vectorscope
---@field public bShowGrid boolean @Show/Hide the vectorscope grid.
---@field public GridDivisions integer @The number of grid divisions.
---@field public MaxDisplayPersistenceMs number @The max where the audio samples should persist in the screen (in milliseconds).
---@field public DisplayPersistenceMs number @For how long the audio samples should persist in the screen (in milliseconds).
---@field public Scale number @The scale for the displayed audio samples.
---@field public PanelLayoutType EAudioPanelLayoutType @Show/Hide advanced panel layout.
local UAudioVectorscope = {}

---Stops the vectorscope processing.
function UAudioVectorscope:StopProcessing() end

---Starts the vectorscope processing.
function UAudioVectorscope:StartProcessing() end

---@return TArray_number_
function UAudioVectorscope:GetVectorscopeAudioSamples__DelegateSignature() end

