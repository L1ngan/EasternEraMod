---@class FMetasoundAnalyzerAnimationSettings
---@field public bAnimateConnections boolean @Whether or not animated connections are enabled.
---@field public EnvelopeWireThickness number @Thickness of default envelope analyzer wire thickness when connection analyzer is active.
---@field public EnvelopeSpeed number @Speed of default envelope analyzer drawing over wire when connection analyzer is active, where 0 is full visual history (slowest progress) and 1 is no visual history (fastest progress).
---@field public EnvelopeDirection EMetasoundActiveAnalyzerEnvelopeDirection @Whether analyzer envelopes draw from a source output (default) or from the destination input. From the destination input may not give the expected illusion of audio processing flowing left-to-right, but results in a waveform with earlier events on the left and later on the right (like a traditional timeline with a moving play head).
---@field public NumericWireThickness number @Thickness of default numeric analyzer wire thickness when connection analyzer is active.
---@field public WireScalarMin number @Minimum height scalar of wire signal analyzers (ex. audio, triggers).
---@field public WireScalarMax number @Maximum height scalar of wire signal analyzers (ex. audio, triggers).
local FMetasoundAnalyzerAnimationSettings = {}
