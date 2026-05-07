---Static data for Locator purposes. Contains data about locators that should not change every frame. If data is unlabelled markers, Locator names array must be empty.
---@class FLiveLinkLocatorStaticData : FLiveLinkBaseStaticData
---@field public LocatorNames TArray<string>
---@field public bUnlabelledData boolean @* Set this to true if you wish to send an unstructured number of locators that can vary from one frame to the next.
local FLiveLinkLocatorStaticData = {}
