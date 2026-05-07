---@class FLocalizationExportingSettings
---@field public CollapseMode ELocalizedTextCollapseMode @How should we collapse down text when exporting to PO?
---@field public POFormat EPortableObjectFormat @Which format of PO file should we use?
---@field public ShouldPersistCommentsOnExport boolean @Should user comments in existing PO files be persisted after export? Useful if using a third party service that stores editor/translator notes in the PO format's comment fields.
---@field public ShouldAddSourceLocationsAsComments boolean @Should source locations be added to PO file entries as comments? Useful if a third party service doesn't expose PO file reference comments, which typically store the source location.
local FLocalizationExportingSettings = {}
