---Allows to set / add a shape library on the running control rig from user data
---@class FRigUnit_SetupShapeLibraryFromUserData : FRigUnitMutable
---@field public NameSpace string @* The name space of the user data to look the shape library up within
---@field public Path string @* The path within the user data for the shape library
---@field public LibraryName string @* Optionally provide the namespace of the shape library to use. * This is only useful if you have multiple shape libraries and you * want to override a specific one.
---@field public LogShapeLibraries boolean @* If this is checked we'll output the resulting shape libraries to the log for debugging.
local FRigUnit_SetupShapeLibraryFromUserData = {}
