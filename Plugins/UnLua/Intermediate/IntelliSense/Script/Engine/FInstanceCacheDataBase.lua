---Base class for instance cached data of a particular type.
---@class FInstanceCacheDataBase
---@field protected SavedProperties TArray<integer>
---@field private UniqueTransientPackage FDataCacheDuplicatedObjectData @A unique outer created in the transient package to act as outer for this object's duplicated objects to avoid name conflicts of objects that already exist in the transient package
---@field private DuplicatedObjects TArray<FDataCacheDuplicatedObjectData> @Duplicated objects created when saving instance properties
---@field private ReferencedObjects TArray<UObject> @Referenced objects in instance saved properties
---@field private ReferencedNames TArray<string> @Referenced names in instance saved properties
local FInstanceCacheDataBase = {}
