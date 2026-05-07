---@class UAutomationBlueprintFunctionLibrary : UBlueprintFunctionLibrary
local UAutomationBlueprintFunctionLibrary = {}

---take high res screenshot in editor.
---@param ResX integer
---@param ResY integer
---@param Filename string
---@param Camera ACameraActor @[opt] 
---@param bMaskEnabled boolean @[opt] 
---@param bCaptureHDR boolean @[opt] 
---@param ComparisonTolerance EComparisonTolerance @[opt] 
---@param ComparisonNotes string
---@param Delay number @[opt] 
---@param bForceGameView boolean @[opt] 
---@return UAutomationEditorTask
function UAutomationBlueprintFunctionLibrary.TakeHighResScreenshot(ResX, ResY, Filename, Camera, bMaskEnabled, bCaptureHDR, ComparisonTolerance, ComparisonNotes, Delay, bForceGameView) end

---@param WorldContextObject UObject
---@param Name string
---@param Options FAutomationScreenshotOptions
function UAutomationBlueprintFunctionLibrary.TakeAutomationScreenshotOfUI(WorldContextObject, Name, Options) end

---Takes a screenshot of the game's viewport, from a particular camera actors POV.  Does not capture any UI.
---@param WorldContextObject UObject
---@param Camera ACameraActor
---@param NameOverride string
---@param Notes string
---@param Options FAutomationScreenshotOptions
function UAutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera(WorldContextObject, Camera, NameOverride, Notes, Options) end

---Takes a screenshot of the game's viewport.  Does not capture any UI.
---@param WorldContextObject UObject
---@param Name string
---@param Notes string
---@param Options FAutomationScreenshotOptions
function UAutomationBlueprintFunctionLibrary.TakeAutomationScreenshot(WorldContextObject, Name, Notes, Options) end

---Set Telemetry data storage name of currently running automated test.
---@param StorageName string
function UAutomationBlueprintFunctionLibrary.SetTestTelemetryStorage(StorageName) end

---@param WorldContextObject UObject
function UAutomationBlueprintFunctionLibrary.SetScalabilityQualityToLow(WorldContextObject) end

---@param WorldContextObject UObject
function UAutomationBlueprintFunctionLibrary.SetScalabilityQualityToEpic(WorldContextObject) end

---Sets all other settings based on an overall value
---@param WorldContextObject UObject
---@param Value integer @[opt] 
function UAutomationBlueprintFunctionLibrary.SetScalabilityQualityLevelRelativeToMax(WorldContextObject, Value) end

---Sets all viewports of the first found level editor to have the VisualizeBuffer ViewMode and also display a given buffer (BaseColor/Metallic/Roughness/etc.) *
---@param BufferName string
function UAutomationBlueprintFunctionLibrary.SetEditorViewportVisualizeBuffer(BufferName) end

---Sets all viewports of the first found level editor to have the given ViewMode (Lit/Unlit/etc.) *
---@param Index integer
function UAutomationBlueprintFunctionLibrary.SetEditorViewportViewMode(Index) end

---Sets the opacity for wireframe viewport view modes of the active viewport. *
---@param Opacity number
function UAutomationBlueprintFunctionLibrary.SetEditorActiveViewportWireframeOpacity(Opacity) end

---Sets ViewMode (Lit/Unlit/etc.) of the first active viewport found *
---@param Index integer
function UAutomationBlueprintFunctionLibrary.SetEditorActiveViewportViewMode(Index) end

---@param StatName string
---@return number
function UAutomationBlueprintFunctionLibrary.GetStatIncMax(StatName) end

---@param StatName string
---@return number
function UAutomationBlueprintFunctionLibrary.GetStatIncAverage(StatName) end

---@param StatName string
---@return number
function UAutomationBlueprintFunctionLibrary.GetStatExcMax(StatName) end

---@param StatName string
---@return number
function UAutomationBlueprintFunctionLibrary.GetStatExcAverage(StatName) end

---@param StatName string
---@return number
function UAutomationBlueprintFunctionLibrary.GetStatCallCount(StatName) end

---Retrieves the opacity for wireframe viewport view modes of the active viewport. *
---@return number
function UAutomationBlueprintFunctionLibrary.GetEditorActiveViewportWireframeOpacity() end

---Get the ViewMode (Lit/Unlit/etc.) of the active viewport. Returns VMI_Unknown if fails to get the active viewport view mode index. *
---@return integer
function UAutomationBlueprintFunctionLibrary.GetEditorActiveViewportViewMode() end

---@param Tolerance EComparisonTolerance @[opt] 
---@param Delay number @[opt] 
---@return FAutomationScreenshotOptions
function UAutomationBlueprintFunctionLibrary.GetDefaultScreenshotOptionsForRendering(Tolerance, Delay) end

---@param Tolerance EComparisonTolerance @[opt] 
---@param Delay number @[opt] 
---@return FAutomationScreenshotOptions
function UAutomationBlueprintFunctionLibrary.GetDefaultScreenshotOptionsForGameplay(Tolerance, Delay) end

function UAutomationBlueprintFunctionLibrary.FinishLoadingBeforeScreenshot() end

---@param WorldContextObject UObject
---@param GroupName string
function UAutomationBlueprintFunctionLibrary.EnableStatGroup(WorldContextObject, GroupName) end

---@param WorldContextObject UObject
---@param GroupName string
function UAutomationBlueprintFunctionLibrary.DisableStatGroup(WorldContextObject, GroupName) end

---request image comparison.
---@param ImageFilePath string
---@param ComparisonName string
---@param ComparisonTolerance EComparisonTolerance @[opt] 
---@param ComparisonNotes string
---@param WorldContextObject UObject @[opt] 
---@return boolean
function UAutomationBlueprintFunctionLibrary.CompareImageAgainstReference(ImageFilePath, ComparisonName, ComparisonTolerance, ComparisonNotes, WorldContextObject) end

---@param WorldContextObject UObject
---@param Options FAutomationWaitForLoadingOptions
function UAutomationBlueprintFunctionLibrary.AutomationWaitForLoading(WorldContextObject, Options) end

---Lets you know if any automated tests are running, or are about to run and the automation system is spinning up tests.
---@return boolean
function UAutomationBlueprintFunctionLibrary.AreAutomatedTestsRunning() end

---Add warning to currently running automated test.
---@param InLogItem string
function UAutomationBlueprintFunctionLibrary.AddTestWarning(InLogItem) end

---Add Telemetry data to currently running automated test.
---@param DataPoint string
---@param Measurement number
---@param Context string
function UAutomationBlueprintFunctionLibrary.AddTestTelemetryData(DataPoint, Measurement, Context) end

---Add info to currently running automated test.
---@param InLogItem string
function UAutomationBlueprintFunctionLibrary.AddTestInfo(InLogItem) end

---Add error to currently running automated test.
---@param InLogItem string
function UAutomationBlueprintFunctionLibrary.AddTestError(InLogItem) end

---Expect a specific log message to match a plain string during an automated test regardless of its verbosity
---@param ExpectedString string
---@param Occurrences integer @[opt] 
---@param ExactMatch boolean @[opt] 
function UAutomationBlueprintFunctionLibrary.AddExpectedPlainLogMessage(ExpectedString, Occurrences, ExactMatch) end

---Mute the report of log error and warning matching a plain string during an automated test
---@param ExpectedString string
---@param Occurrences integer @[opt] 
---@param ExactMatch boolean @[opt] 
function UAutomationBlueprintFunctionLibrary.AddExpectedPlainLogError(ExpectedString, Occurrences, ExactMatch) end

---Expect a specific log message to match a pattern during an automated test regardless of its verbosity. Treat the pattern as regex by default.
---@param ExpectedPatternString string
---@param Occurrences integer @[opt] 
---@param ExactMatch boolean @[opt] 
---@param IsRegex boolean @[opt] 
function UAutomationBlueprintFunctionLibrary.AddExpectedLogMessage(ExpectedPatternString, Occurrences, ExactMatch, IsRegex) end

---Mute the report of log error and warning matching a pattern during an automated test. Treat the pattern as regex by default.
---@param ExpectedPatternString string
---@param Occurrences integer @[opt] 
---@param ExactMatch boolean @[opt] 
---@param IsRegex boolean @[opt] 
function UAutomationBlueprintFunctionLibrary.AddExpectedLogError(ExpectedPatternString, Occurrences, ExactMatch, IsRegex) end

