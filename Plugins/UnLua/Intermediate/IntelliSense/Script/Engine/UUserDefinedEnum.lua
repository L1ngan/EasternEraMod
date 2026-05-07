---An Enumeration is a list of named values.
---@class UUserDefinedEnum : UEnum
---@field public UniqueNameIndex integer
---@field public EnumDescription string @Shows up in the content browser when the enum asset is hovered
---@field public DisplayNameMap TMap<string, string> @De-facto display names for enum entries mapped against their raw enum name (UEnum::GetNameByIndex). To sync DisplayNameMap use FEnumEditorUtils::EnsureAllDisplayNamesExist.
---@field private CachedCookedMetaDataPtr UEnumCookedMetaData
local UUserDefinedEnum = {}

