---The only purpose of this class is to trigger a slightly different code path within
---FLevelEditorViewportClient::TryPlacingActorFromObject when dragging and dropping a SwitchActor into the
---viewport, so that the SwitchActor labels get sanitized by FActorLabelUtilities::SetActorLabelUnique
---and don't repeatedly increment
---@class USwitchActorFactory : UActorFactory
local USwitchActorFactory = {}

