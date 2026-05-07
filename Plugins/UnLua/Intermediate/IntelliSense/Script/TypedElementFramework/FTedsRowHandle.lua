---* FTedsRowHandle is a strongly typed wrapper around UE::Editor::DataStorage::RowHandle and should only be used in cases where you need the extra info.
---* E.g for reflection/UHT or for template specializing something that needs to know the semantics of the row handle.
---* For all other cases, you should use the regular typedef UE::Editor::DataStorage::RowHandle
---@class FTedsRowHandle
---@field public RowHandle integer
local FTedsRowHandle = {}
