---Editor source control common functionality.
---  - fully qualified path
---  - relative path
---  - long package name
---  - asset path
---  - export text path (often stored on clipboard)
---  For example:
---     - D:\Epic\Dev-Ent\Projects\Python3rdBP\Content\Mannequin\Animations\ThirdPersonIdle.uasset
---     - Content\Mannequin\Animations\ThirdPersonIdle.uasset
---     - /Game/Mannequin/Animations/ThirdPersonIdle
---     - /Game/Mannequin/Animations/ThirdPersonIdle.ThirdPersonIdle
---     - AnimSequence'/Game/Mannequin/Animations/ThirdPersonIdle.ThirdPersonIdle'
---@class USourceControlHelpers : UObject
local USourceControlHelpers = {}

---Use currently set source control provider to sync files or directories to the head revision.
---@param InFiles TArray_string_
---@param bSilent boolean @[opt] 
---@return boolean
function USourceControlHelpers.SyncFiles(InFiles, bSilent) end

---Use currently set source control provider to sync a file or directory to the head revision.
---@param InFile string
---@param bSilent boolean @[opt] 
---@return boolean
function USourceControlHelpers.SyncFile(InFile, bSilent) end

---Use currently set source control provider to revert files provided no changes have been made.
---@param InFiles TArray_string_
---@param bSilent boolean @[opt] 
---@return boolean
function USourceControlHelpers.RevertUnchangedFiles(InFiles, bSilent) end

---Use currently set source control provider to revert a file provided no changes have been made.
---@param InFile string
---@param bSilent boolean @[opt] 
---@return boolean
function USourceControlHelpers.RevertUnchangedFile(InFile, bSilent) end

---Use currently set source control provider to revert files regardless whether any changes will be lost or not.
---@param InFiles TArray_string_
---@param bSilent boolean @[opt] 
---@return boolean
function USourceControlHelpers.RevertFiles(InFiles, bSilent) end

---Use currently set source control provider to revert a file regardless whether any changes will be lost or not.
---@param InFile string
---@param bSilent boolean @[opt] 
---@return boolean
function USourceControlHelpers.RevertFile(InFile, bSilent) end

---Reverts the provided files then reloads packages.
---@param InPackagesToRevert TArray_string_
---@param bRevertAll boolean @[opt] 
---@param bReloadWorld boolean @[opt] 
---@return boolean
function USourceControlHelpers.RevertAndReloadPackages(InPackagesToRevert, bRevertAll, bReloadWorld) end

---@param InFiles TArray_string_
---@param bSilent boolean @[opt] 
---@return TArray_FSourceControlState_
function USourceControlHelpers.QueryFileStates(InFiles, bSilent) end

---Delegate to broadcast FileState upon AsyncQueryFileState completion
---@param FileStateOut FSourceControlState
function USourceControlHelpers:QueryFileStateDelegate__DelegateSignature(FileStateOut) end

---Use currently set source control provider to query a file's source control state.
---                     it could not have its values set.
---@param InFile string
---@param bSilent boolean @[opt] 
---@return FSourceControlState
function USourceControlHelpers.QueryFileState(InFile, bSilent) end

---Use currently set source control provider to remove files from source control and delete the files.
---@param InFiles TArray_string_
---@param bSilent boolean @[opt] 
---@return boolean
function USourceControlHelpers.MarkFilesForDelete(InFiles, bSilent) end

---Use currently set source control provider to mark files for add. Does nothing (and returns true) for any file that is already under SC
---@param InFiles TArray_string_
---@param bSilent boolean @[opt] 
---@return boolean
function USourceControlHelpers.MarkFilesForAdd(InFiles, bSilent) end

---Use currently set source control provider to remove file from source control and
---delete the file.
---@param InFile string
---@param bSilent boolean @[opt] 
---@return boolean
function USourceControlHelpers.MarkFileForDelete(InFile, bSilent) end

---Use currently set source control provider to mark a file for add. Does nothing (and returns true) if the file is already under SC
---@param InFile string
---@param bSilent boolean @[opt] 
---@return boolean
function USourceControlHelpers.MarkFileForAdd(InFile, bSilent) end

---Get status text set by SourceControl system if an error occurs regardless whether bSilent is set or not.
---Only set if there was an error.
---@return string
function USourceControlHelpers.LastErrorMsg() end

---Determine if there is a source control system enabled
---@return boolean
function USourceControlHelpers.IsEnabled() end

---Quick check if currently set source control provider is enabled and available for use
---(server-based providers can use this to return whether the server is available or not)
---@return boolean
function USourceControlHelpers.IsAvailable() end

---Determine the name of the current source control provider.
---@return string
function USourceControlHelpers.CurrentProvider() end

---Use currently set source control provider to copy a file.
---@param InSourceFile string
---@param InDestFile string
---@param bSilent boolean @[opt] 
---@return boolean
function USourceControlHelpers.CopyFile(InSourceFile, InDestFile, bSilent) end

---Use currently set source control provider to check out files or mark them for add.
---@param InFiles TArray_string_
---@param bSilent boolean @[opt] 
---@return boolean
function USourceControlHelpers.CheckOutOrAddFiles(InFiles, bSilent) end

---Use currently set source control provider to check out file or mark it for add.
---@param InFile string
---@param bSilent boolean @[opt] 
---@return boolean
function USourceControlHelpers.CheckOutOrAddFile(InFile, bSilent) end

---Use currently set source control provider to check out specified files.
---@param InFiles TArray_string_
---@param bSilent boolean @[opt] 
---@return boolean
function USourceControlHelpers.CheckOutFiles(InFiles, bSilent) end

---Use currently set source control provider to check out a file.
---@param InFile string
---@param bSilent boolean @[opt] 
---@return boolean
function USourceControlHelpers.CheckOutFile(InFile, bSilent) end

---Use currently set source control provider to check in specified files.
---@param InFiles TArray_string_
---@param InDescription string
---@param bSilent boolean @[opt] 
---@param bKeepCheckedOut boolean @[opt] 
---@return boolean
function USourceControlHelpers.CheckInFiles(InFiles, InDescription, bSilent, bKeepCheckedOut) end

---Use currently set source control provider to check in a file.
---@param InFile string
---@param InDescription string
---@param bSilent boolean @[opt] 
---@param bKeepCheckedOut boolean @[opt] 
---@return boolean
function USourceControlHelpers.CheckInFile(InFile, InDescription, bSilent, bKeepCheckedOut) end

---@param FileStateCallback Delegate
---@param InFiles TArray_string_
---@param bSilent boolean @[opt] 
function USourceControlHelpers.AsyncQueryFileStates(FileStateCallback, InFiles, bSilent) end

---Query the source control state of the specified file, asynchronously.
---@param FileStateCallback Delegate
---@param InFile string
---@param bSilent boolean @[opt] 
function USourceControlHelpers.AsyncQueryFileState(FileStateCallback, InFile, bSilent) end

