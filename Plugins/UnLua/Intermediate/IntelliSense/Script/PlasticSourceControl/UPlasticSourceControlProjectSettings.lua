---Project Settings for Unity Version Control (formerly Plastic SCM). Saved in Config/DefaultEditor.ini
---@class UPlasticSourceControlProjectSettings : UDeveloperSettings
---@field public UserNameToDisplayName TMap<string, string> @Map Unity Version Control user names (typically e-mail addresses or company domain names) to display names for brevity.
---@field public bHideEmailDomainInUsername boolean @Hide the domain part of an username e-mail address (eg @@gmail.com) if the UserNameToDisplayName map didn't match (enabled by default).
---@field public bPromptForCheckoutOnChange boolean @If enabled, you'll be prompted to check out changed files (enabled by default). Checkout is needed to work with Changelists.
---@field public LimitNumberOfRevisionsInHistory integer @If a non-null value is set, limit the maximum number of revisions requested to Unity Version Control to display in the "History" window.
---@field public bShowBranchRepositoryColumn boolean @Show the repository where the branch is created (hidden by default)
---@field public bShowBranchCreatedByColumn boolean @Show the name of the creator of the branch
---@field public bShowBranchDateColumn boolean @Show the date of creation of the branch
---@field public bShowBranchCommentColumn boolean @Show the comment of the branch
---@field public bShowLockIdColumn boolean @Show the Id of the lock (hidden by default)
---@field public bShowLockWorkspaceColumn boolean @Show the Workspace of the lock
---@field public bShowLockDateColumn boolean @Show the Date of the lock
---@field public bShowLockDestinationBranchColumn boolean @Show the Destination Branch of the lock (hidden by default)
---@field public bShowChangesetCreatedByColumn boolean @Show the name of the creator of the changeset
---@field public bShowChangesetDateColumn boolean @Show the date of creation of the changeset
---@field public bShowChangesetCommentColumn boolean @Show the comment of the changeset
---@field public bShowChangesetBranchColumn boolean @Show the branch the changeset was created on
local UPlasticSourceControlProjectSettings = {}

