---Settings for the WmfMedia plug-in.
---@class UWmfMediaSettings : UObject
---@field public AllowNonStandardCodecs boolean @Whether to allow the loading of media that uses non-standard codecs (default = off). By default, the player will attempt to detect audio and video codecs that are not supported by the operating system out of the box, but may require the user to install additional codec packs. Enable this option to skip this check and allow the usage of non-standard codecs.
---@field public LowLatency boolean @Enable low latency processing in the Windows media pipeline (default = off). When this setting is enabled, the media data is generated with the lowest possible delay. This might be desirable for certain real-time applications, but it can negatively affect audio and video quality.
---@field public NativeAudioOut boolean @Play audio tracks via the operating system's native sound mixer (default = off).
---@field public HardwareAcceleratedVideoDecoding boolean @Use hardware accelerated video acceleration (GPU) when possible otherwise fallback to software implementation (CPU), Windows and DX11 only.
local UWmfMediaSettings = {}

