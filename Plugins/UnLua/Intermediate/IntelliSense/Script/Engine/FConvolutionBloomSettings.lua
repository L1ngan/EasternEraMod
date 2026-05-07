---@class FConvolutionBloomSettings
---@field public Texture UTexture2D @Texture to replace default convolution bloom kernel
---@field public ScatterDispersion number @Intensity multiplier on the scatter dispersion energy of the kernel. 1.0 means exactly use the same energy as the kernel scatter dispersion.
---@field public Size number @Relative size of the convolution kernel image compared to the minor axis of the viewport
---@field public CenterUV FVector2D @The UV location of the center of the kernel.  Should be very close to (.5,.5)
---@field public PreFilterMin number @Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables convolution boost
---@field public PreFilterMax number @Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables convolution boost
---@field public PreFilterMult number @Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables convolution boost
---@field public BufferScale number @Implicit buffer region as a fraction of the screen size to insure the bloom does not wrap across the screen.  Larger sizes have perf impact.
local FConvolutionBloomSettings = {}
