---Used to validate that content does not contain virtualized payloads. The current
---cmdline options are:
----CheckEngine
---    Checks all packages currently mounted in the engine
----CheckProject
---    Checks all packages currently mounted in the current project
----CheckDir=XYZ (XYZ is the path to the directory, use '+' as the delimiter if supplying
---more than one path)
---    Checks packages in the given directory and all subdirectories
---any or all of which can be passed to the commandlet.
---If virtualized payloads are found then the package path (or file path if CheckDir
---indicates a directory that is not currently mounted by the project) is logged
---as an error and the commandlet will eventually return 1 as a failure value.
---Because the commandlet is the VirtualizationEditor module it needs to be invoked
---with the command line:
----run="VirtualizationEditor.CheckForVirtualizedContent"
---Followed by
---@class UCheckForVirtualizedContentCommandlet : UCommandlet
local UCheckForVirtualizedContentCommandlet = {}

