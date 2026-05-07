---FMassEntityQuery is a structure that is used to trigger calculations on cached set of valid archetypes as described
---by requirements. See the parent classes FMassFragmentRequirements and FMassSubsystemRequirements for setting up the
---   required fragments and subsystems.
---A query to be considered valid needs declared at least one EMassFragmentPresence::All, EMassFragmentPresence::Any
---EMassFragmentPresence::Optional fragment requirement.
---@class FMassEntityQuery : FMassFragmentRequirements
local FMassEntityQuery = {}
