---@class UDatasmithAreaLightActorTemplate : UDatasmithObjectTemplate
---@field public LightType EDatasmithAreaLightActorType
---@field public LightShape EDatasmithAreaLightActorShape
---@field public Dimensions FVector2D
---@field public Color FLinearColor
---@field public Intensity number
---@field public IntensityUnits ELightUnits
---@field public Temperature number
---@field public IESTexture TSoftObjectPtr<UTextureLightProfile>
---@field public bUseIESBrightness boolean
---@field public IESBrightnessScale number
---@field public Rotation FRotator
---@field public SourceRadius number
---@field public SourceLength number
---@field public AttenuationRadius number
local UDatasmithAreaLightActorTemplate = {}

