---A report generated when an asset is imported or tested for MetaHuman compatibility
---@class UMetaHumanAssetReport : UObject
---@field public Subject string @The Subject of the Report
---@field public Infos TArray<FMetaHumanAssetReportItem> @The Info Items in the Report
---@field public Warnings TArray<FMetaHumanAssetReportItem> @The Warnings in the Report
---@field public Errors TArray<FMetaHumanAssetReportItem> @The Errors in the Report
local UMetaHumanAssetReport = {}

---Set whether warnings should be reported as errors
---@param Value boolean
function UMetaHumanAssetReport:SetWarningsAsErrors(Value) end

---Set whether to include verbose items in the report
---@param Value boolean
function UMetaHumanAssetReport:SetVerbose(Value) end

---Set the subject for the report, typically the name of the asset being tested or imported
---@param InSubject string
function UMetaHumanAssetReport:SetSubject(InSubject) end

---Determine whether the report contains non-informational messages
---@return boolean
function UMetaHumanAssetReport:HasWarnings() end

---Determine whether the report represents a successful operation or not
---@return EMetaHumanOperationResult
function UMetaHumanAssetReport:GetReportResult() end

---Generates a representation of the report suitable for use in an SRichText control
---@return string
function UMetaHumanAssetReport:GenerateRichTextReport() end

---Generates a plain text representation of the report
---@return string
function UMetaHumanAssetReport:GenerateRawReport() end

---Generates a JSON representation of the report
---@return string
function UMetaHumanAssetReport:GenerateJsonReport() end

---Generates an HTML representation of the report
---@return string
function UMetaHumanAssetReport:GenerateHtmlReport() end

---Adds a user-facing message to appear in the report. This will flag the report as containing warnings but will
---not flag it as having failed.
---@param Message FMetaHumanAssetReportItem
function UMetaHumanAssetReport:AddWarning(Message) end

---Adds a user-facing message to appear in the report. This will not flag the report as containing warnings or as
---having failed and will be discarded if SetVerbose is not called with a value of true
---@param Message FMetaHumanAssetReportItem
function UMetaHumanAssetReport:AddVerbose(Message) end

---Adds a user-facing message to appear in the report. This will not flag the report as containing warnings or as
---having failed.
---@param Message FMetaHumanAssetReportItem
function UMetaHumanAssetReport:AddInfo(Message) end

---Adds a user-facing message to appear in the report. This will flag the report as containing warnings and as
---having failed.
---@param Message FMetaHumanAssetReportItem
function UMetaHumanAssetReport:AddError(Message) end

