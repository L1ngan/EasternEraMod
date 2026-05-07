---ANavLinkProxy connects areas of Navmesh that don't have a direct navigation path.
---It directly supports Simple Links (see PointLinks array). There can be multiple Simple links per ANavLinkProxy instance.
---Simple links are designed to statically link areas of Navmesh and are associated with a particular area class that the link provides.
---Smart Link functionality is provided via UNavLinkCustomComponent, see SmartLinkComp. They are designed to be able to be dynamically toggled
---between enabled and disabled and provide different area classes for both cases. The area classes can be dynamically modified
---without navmesh rebuilds.
---There can only be at most one smart link per ANavLinkProxy instance.
---Both simple and smart links on a single ANavLinkProxy instance, can be set / enabled at once, as well as either or neither of them.
---@class ANavLinkProxy : AActor
---@field public PointLinks TArray<FNavigationLink> @Navigation links (point to point) added to navigation data
---@field public SegmentLinks TArray<FNavigationSegmentLink> @Navigation links (segment to segment) added to navigation data      @@todo hidden from use until we fix segment links. Not really working now
---@field private SmartLinkComp UNavLinkCustomComponent @Smart link: can affect path following
---@field public bSmartLinkIsRelevant boolean @Smart link: toggle relevancy
---@field private EdRenderComp UNavLinkRenderingComponent @Editor Preview
---@field private SpriteComponent UBillboardComponent
---@field protected OnSmartLinkReached MulticastDelegate
local ANavLinkProxy = {}

---change state of smart link
---@param bEnabled boolean
function ANavLinkProxy:SetSmartLinkEnabled(bEnabled) end

---resume normal path following
---@param Agent AActor
function ANavLinkProxy:ResumePathFollowing(Agent) end

---called when agent reaches smart link during path following, use ResumePathFollowing() to give control back
---@param Agent AActor
---@param Destination FVector
function ANavLinkProxy:ReceiveSmartLinkReached(Agent, Destination) end

---check if smart link is enabled
---@return boolean
function ANavLinkProxy:IsSmartLinkEnabled() end

---check if any agent is moving through smart link right now
---@return boolean
function ANavLinkProxy:HasMovingAgents() end

---Copies navlink end points from the first entry in PointLinks array. This
---    function is a helper function making up for smart links not drawing
---    the FVector widgets in the editor.
function ANavLinkProxy:CopyEndPointsFromSimpleLinkToSmartLink() end

