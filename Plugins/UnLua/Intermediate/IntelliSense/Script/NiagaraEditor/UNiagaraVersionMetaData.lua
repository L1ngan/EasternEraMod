---@class UNiagaraVersionMetaData : UObject
---@field public bIsExposedVersion boolean @If true then this version is exposed to the user and is used as the default version for new assets.
---@field public ChangeDescription string @Changelist displayed to the user when upgrading to a new script version.
---@field public bIsVisibleInVersionSelector boolean @If false then this version is not visible in the version selector dropdown menu of the stack. This is useful to hide work in progress versions without removing the module from the search menu. The exposed version is always visible to users.
---@field public bDeprecated boolean @True if this asset version is deprecated and should no longer be used.
---@field public DeprecationMessage string @Message to display when the asset is used in an emitter.
---@field public VersionGuid FGuid @Internal version guid, mainly useful for debugging version conflicts.
---@field public UpdateScriptExecution ENiagaraPythonUpdateScriptReference @Reference to a python script that is executed when the user updates from a previous version to this version.
---@field public PythonUpdateScript string @Python script to run when updating to this script version.
---@field public ScriptAsset FFilePath @Asset reference to a python script to run when updating to this script version.
local UNiagaraVersionMetaData = {}

