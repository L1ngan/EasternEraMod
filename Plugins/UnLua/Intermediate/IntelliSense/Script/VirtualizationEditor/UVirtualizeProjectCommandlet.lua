---Finds all packages in the project and attempts to virtualize their content. If revision control
---is enabled then the commandlet will attempt to checkout the packages that need modification.
---Because the commandlet is the VirtualizationEditor module it needs to be invoked
---with the command line:
----run="VirtualizationEditor.VirtualizeProject"
---@class UVirtualizeProjectCommandlet : UCommandlet
local UVirtualizeProjectCommandlet = {}

