---Manages the instances of UAnimDetailsProxyBase for anim details.
---This is a rewrite of what was previously UControlRigDetailPanelControlProxies in ControlRigEditor/Private/EditMode/ControlRigControlsProxy.h.
---@class UAnimDetailsProxyManager : UObject
---@field private Proxies TArray<UAnimDetailsProxyBase> @The current proxies
---@field private ExternalSelection TArray<UAnimDetailsProxyBase> @The proxies that are currently selected in anim outliner, control rig and sequencer
---@field private AnimDetailsSelection UAnimDetailsSelection @The anim details selection
local UAnimDetailsProxyManager = {}

