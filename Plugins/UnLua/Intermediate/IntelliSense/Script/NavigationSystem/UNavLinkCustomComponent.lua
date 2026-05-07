---Encapsulates NavLinkCustomInterface interface, can be used with Actors not relevant for navigation
---Additional functionality:
---- can be toggled
---- can create obstacle area for easier/forced separation of link end points
---- can broadcast state changes to nearby agents
---@class UNavLinkCustomComponent : UNavRelevantComponent
---@field protected NavLinkUserId integer
---@field protected CustomLinkId FNavLinkId @link Id assigned by navigation system
---@field protected AuxiliaryCustomLinkId FNavLinkAuxiliaryId @Assigned in the constructor. This uniquely identifies a component in an Actor, but will not be unique between duplicate level instances. containing the same Actor. This is Hashed with the Actor Instance FGuid to create the CustomLinkId so that Actors with more than one UNavLinkCustomComponent can have a completely unique ID per UNavLinkCustomComponent even across level instances.
---@field protected EnabledAreaClass TSubclassOf<UNavArea> @area class to use when link is enabled
---@field protected DisabledAreaClass TSubclassOf<UNavArea> @area class to use when link is disabled
---@field protected SupportedAgents FNavAgentSelector @restrict area only to specified agents
---@field protected LinkRelativeStart FVector @start point, relative to owner
---@field protected LinkRelativeEnd FVector @end point, relative to owner
---@field protected LinkDirection integer @direction of link
---@field protected bLinkEnabled boolean @is link currently in enabled state? (area class)
---@field protected bNotifyWhenEnabled boolean @should link notify nearby agents when it changes state to enabled
---@field protected bNotifyWhenDisabled boolean @should link notify nearby agents when it changes state to disabled
---@field protected bCreateBoxObstacle boolean @if set, box obstacle area will be added to generation
---@field protected ObstacleOffset FVector @offset of simple box obstacle
---@field protected ObstacleExtent FVector @extent of simple box obstacle
---@field protected ObstacleAreaClass TSubclassOf<UNavArea> @area class for simple box obstacle
---@field protected BroadcastRadius number @radius of state change broadcast
---@field protected BroadcastInterval number @interval for state change broadcast (0 = single broadcast)
---@field protected BroadcastChannel integer @trace channel for state change broadcast
local UNavLinkCustomComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UNavLinkCustomComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UNavLinkCustomComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UNavLinkCustomComponent:AddAssetUserDataOfClass(InUserDataClass) end

