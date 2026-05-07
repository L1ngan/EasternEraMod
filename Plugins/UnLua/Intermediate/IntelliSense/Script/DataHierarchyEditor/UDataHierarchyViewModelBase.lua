---The main controller class for the SHierarchyEditor widget. Defines core hierarchy rules.
---Inherit from this and override the required virtual functions, instantiate an object, Initialize it and pass it to the SHierarchyEditor widget.
---@class UDataHierarchyViewModelBase : UObject
---@field protected HierarchyRoot UHierarchyRoot
---@field protected RefreshContext UHierarchyDataRefreshContext
---@field private bIsInitialized boolean
---@field private bIsFinalized boolean
local UDataHierarchyViewModelBase = {}

