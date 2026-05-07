---Builder used to support dynamically generating MetaSound documents at runtime. Builder contains caches that speed up
---common search and modification operations on a given document, which may result in slower performance on construction,
---but faster manipulation of its managed document.  The builder's managed copy of a document is expected to not be modified
---by any external system to avoid cache becoming stale.
---@class FMetaSoundFrontendDocumentBuilder
---@field private DocumentInterface TScriptInterface<UMetaSoundDocumentInterface>
---@field private BuildPageID FGuid @Page ID to apply build transaction to if no optional PageID is provided in explicit function call. (Also used to support back compat for Controller API until mutable controllers are adequately deprecated).
local FMetaSoundFrontendDocumentBuilder = {}
