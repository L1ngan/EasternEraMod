---@class FNiagaraAssetVersion
---@field public MajorVersion integer @The major version is used to track breaking changes between asset versions
---@field public MinorVersion integer @The minor version is used to track non-breaking changes between asset versions
---@field public VersionGuid FGuid @The guid is used to keep track of specific asset version references. The minor and major versions do not provide enough uniqueness to guard against collisions when e.g. the same version was created in different branches.
---@field public bIsVisibleInVersionSelector boolean @If false then this version is not visible in the version selector dropdown menu of the stack.
local FNiagaraAssetVersion = {}
