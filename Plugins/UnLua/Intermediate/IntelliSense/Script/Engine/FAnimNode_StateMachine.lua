---State machine node
---@class FAnimNode_StateMachine : FAnimNode_Base
---@field public StateMachineIndexInClass integer @Index into the BakedStateMachines array in the owning UAnimBlueprintGeneratedClass
---@field public MaxTransitionsPerFrame integer @The maximum number of transitions that can be taken by this machine 'simultaneously' in a single frame
---@field public MaxTransitionsRequests integer @The maximum number of transition requests that can be buffered at any time. The oldest transition requests are dropped to accommodate for newly created requests.
---@field public bSkipFirstUpdateTransition boolean @When the state machine becomes relevant, it is initialized into the Entry state. It then tries to take any valid transitions to possibly end up in a different state on that same frame. - if true, that new state starts full weight. - if false, a blend is created between the entry state and that new state. In either case all visited State notifications (Begin/End) will be triggered.
---@field public bReinitializeOnBecomingRelevant boolean @Reinitialize the state machine if we have become relevant to the graph after not being ticked on the previous frame(s)
---@field public bCreateNotifyMetaData boolean @Tag Notifies with meta data such as the active state and mirroring state.  Producing this data has a  slight performance cost.
---@field public bAllowConduitEntryStates boolean @Allows a conduit to be used as this state machine's entry state If a valid entry state cannot be found at runtime then this will generate a reference pose!
local FAnimNode_StateMachine = {}
