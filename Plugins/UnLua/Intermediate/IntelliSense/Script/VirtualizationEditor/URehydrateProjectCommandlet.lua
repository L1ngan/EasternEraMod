---Finds all packages in the project and attempts to rehydrate them. If revision control
---is enabled then the commandlet will attempt to checkout the packages that need modification.
---Because the commandlet is the VirtualizationEditor module it needs to be invoked
---with the command line:
----run="VirtualizationEditor.RehydrateProject"
---@class URehydrateProjectCommandlet : UCommandlet
local URehydrateProjectCommandlet = {}

