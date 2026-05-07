---@class UAssetRegistryImpl : UObject
local UAssetRegistryImpl = {}

---Wait for the scan of a specific package to be complete
---@param PackageName string
function UAssetRegistryImpl:WaitForPackage(PackageName) end

---Wait for scan to be complete. If called during editor startup before OnPostEngineInit, and there are assets with
---classes in not-yet-loaded plugin modules, WaitForCompletion returns silently with those assets still ungathered.
function UAssetRegistryImpl:WaitForCompletion() end

---Trims items out of the asset data list that pass the supplied filter
---@param AssetDataList TArray_FAssetData_ @[out] 
---@param Filter FARFilter
function UAssetRegistryImpl:UseFilterToExcludeAssets(AssetDataList, Filter) end

---Look for all assets on disk (can be async or synchronous)
---@param bSynchronousSearch boolean
function UAssetRegistryImpl:SearchAllAssets(bSynchronousSearch) end

---Scan the supplied paths recursively right now and populate the asset registry. If bForceRescan is true, the
---paths will be scanned again, even if they were previously scanned.
---@param InPaths TArray_string_
---@param bForceRescan boolean @[opt] 
---@param bIgnoreDenyListScanFilters boolean @[opt] 
function UAssetRegistryImpl:ScanPathsSynchronous(InPaths, bForceRescan, bIgnoreDenyListScanFilters) end

---Forces a rescan of specific filenames, call this when you need to refresh from disk
---@param InFilePaths TArray_string_
function UAssetRegistryImpl:ScanModifiedAssetFiles(InFilePaths) end

---Scan the specified individual files right now and populate the asset registry. If bForceRescan is true, the
---paths will be scanned again, even if they were previously scanned.
---@param InFilePaths TArray_string_
---@param bForceRescan boolean @[opt] 
function UAssetRegistryImpl:ScanFilesSynchronous(InFilePaths, bForceRescan) end

---Trims items out of the asset data list that do not pass the supplied filter
---@param AssetDataList TArray_FAssetData_ @[out] 
---@param Filter FARFilter
function UAssetRegistryImpl:RunAssetsThroughFilter(AssetDataList, Filter) end

---If assets are currently being asynchronously scanned in the specified path, this will cause them to be scanned
---before other assets.
---@param PathToPrioritize string
function UAssetRegistryImpl:PrioritizeSearchPath(PathToPrioritize) end

---Gets a list of packages that reference the supplied package. (On disk references ONLY)
---@param PackageName string
---@param ReferenceOptions FAssetRegistryDependencyOptions
---@param OutReferencers TArray_string_ @[out] 
---@return boolean
function UAssetRegistryImpl:K2_GetReferencers(PackageName, ReferenceOptions, OutReferencers) end

---Gets a list of paths to objects that are referenced by the supplied package. (On disk references ONLY)
---@param PackageName string
---@param DependencyOptions FAssetRegistryDependencyOptions
---@param OutDependencies TArray_string_ @[out] 
---@return boolean
function UAssetRegistryImpl:K2_GetDependencies(PackageName, DependencyOptions, OutDependencies) end

---Gets the asset data for the specified object path
---       @@see IAssetRegistry class header for bIncludeOnlyOnDiskAssets.
---@param ObjectPath FSoftObjectPath
---@param bIncludeOnlyOnDiskAssets boolean @[opt] 
---@param bSkipARFilteredAssets boolean @[opt] 
---@return FAssetData
function UAssetRegistryImpl:K2_GetAssetByObjectPath(ObjectPath, bIncludeOnlyOnDiskAssets, bSkipARFilteredAssets) end

---Whether searching is done async (and was started at startup), or synchronously and on-demand, requiring
---ScanPathsSynchronous or SearchAllAssets.
---@return boolean
function UAssetRegistryImpl:IsSearchAsync() end

---Whether SearchAllAssets has been called, or was auto-called at startup. When async (editor or cooking), if
---SearchAllAssets has ever been called, any newly-mounted directory will be automatically searched.
---@return boolean
function UAssetRegistryImpl:IsSearchAllAssets() end

---Returns true if the asset registry is currently loading files and does not yet know about all assets.
---This is a legacy function that only returns true when the asset registry is performing its initial search for assets.
---Prefer using IsGathering() to know if the asset registry is currently loading files.
---@return boolean
function UAssetRegistryImpl:IsLoadingAssets() end

---Does the given path contain assets, optionally also testing sub-paths?
---@param PackagePath string
---@param bRecursive boolean @[opt] 
---@return boolean
function UAssetRegistryImpl:HasAssets(PackagePath, bRecursive) end

---Gets a list of all paths that are currently cached below the passed-in base path
---@param InBasePath string
---@param OutPathList TArray_string_ @[out] 
---@param bInRecurse boolean
function UAssetRegistryImpl:GetSubPaths(InBasePath, OutPathList, bInRecurse) end

---Gets asset data for in-memory assets only, that match the filter.
---Returns assets that would be excluded by calling GetAssets with bIncludeOnlyOnDiskAssets set to true.
---Assets returned must satisfy every filter component if there is at least one element in the component's array.
---Assets will satisfy a component if they match any of the elements in it.
---@param Filter FARFilter
---@param OutAssetData TArray_FAssetData_ @[out] 
---@param bSkipARFilteredAssets boolean @[opt] 
---@return boolean
function UAssetRegistryImpl:GetInMemoryAssets(Filter, OutAssetData, bSkipARFilteredAssets) end

---Returns the names of all classes derived by the supplied class names, excluding any classes matching the
---excluded class names. This can be slow if temporary caching mode is not on.
---@param ClassNames TArray_FTopLevelAssetPath_
---@param ExcludedClassNames TSet_FTopLevelAssetPath_
---@param OutDerivedClassNames TSet_FTopLevelAssetPath_ @[out] 
function UAssetRegistryImpl:GetDerivedClassNames(ClassNames, ExcludedClassNames, OutDerivedClassNames) end

---Gets asset data for all assets in any of the supplied folder paths
---       @@see IAssetRegistry class header for bIncludeOnlyOnDiskAssets.
---@param PackagePaths TArray_string_
---@param OutAssetData TArray_FAssetData_ @[out] 
---@param bRecursive boolean @[opt] 
---@param bIncludeOnlyOnDiskAssets boolean @[opt] 
---@return boolean
function UAssetRegistryImpl:GetAssetsByPaths(PackagePaths, OutAssetData, bRecursive, bIncludeOnlyOnDiskAssets) end

---Gets asset data for all assets in the supplied folder path
---       @@see IAssetRegistry class header for bIncludeOnlyOnDiskAssets.
---@param PackagePath string
---@param OutAssetData TArray_FAssetData_ @[out] 
---@param bRecursive boolean @[opt] 
---@param bIncludeOnlyOnDiskAssets boolean @[opt] 
---@return boolean
function UAssetRegistryImpl:GetAssetsByPath(PackagePath, OutAssetData, bRecursive, bIncludeOnlyOnDiskAssets) end

---Gets asset data for the assets in the package with the specified package name
---       @@see IAssetRegistry class header for bIncludeOnlyOnDiskAssets.
---@param PackageName string
---@param OutAssetData TArray_FAssetData_ @[out] 
---@param bIncludeOnlyOnDiskAssets boolean @[opt] 
---@param bSkipARFilteredAssets boolean @[opt] 
---@return boolean
function UAssetRegistryImpl:GetAssetsByPackageName(PackageName, OutAssetData, bIncludeOnlyOnDiskAssets, bSkipARFilteredAssets) end

---Gets asset data for all assets with the supplied class
---@param ClassPathName FTopLevelAssetPath
---@param OutAssetData TArray_FAssetData_ @[out] 
---@param bSearchSubClasses boolean @[opt] 
---@return boolean
function UAssetRegistryImpl:GetAssetsByClass(ClassPathName, OutAssetData, bSearchSubClasses) end

---Gets asset data for all assets that match the filter.
---Assets returned must satisfy every filter component if there is at least one element in the component's array.
---Assets will satisfy a component if they match any of the elements in it.
---@param Filter FARFilter
---@param OutAssetData TArray_FAssetData_ @[out] 
---@param bSkipARFilteredAssets boolean @[opt] 
---@return boolean
function UAssetRegistryImpl:GetAssets(Filter, OutAssetData, bSkipARFilteredAssets) end

---@param ObjectPath string
---@param bIncludeOnlyOnDiskAssets boolean @[opt] 
---@return FAssetData
function UAssetRegistryImpl:GetAssetByObjectPath(ObjectPath, bIncludeOnlyOnDiskAssets) end

---Returns true if the specified ClassName's ancestors could be found. If so, OutAncestorClassNames is a list of
---all its ancestors. This can be slow if temporary caching mode is not on.
---@param ClassPathName FTopLevelAssetPath
---@param OutAncestorClassNames TArray_FTopLevelAssetPath_ @[out] 
---@return boolean
function UAssetRegistryImpl:GetAncestorClassNames(ClassPathName, OutAncestorClassNames) end

---Gets a list of all paths that are currently cached
---@param OutPathList TArray_string_ @[out] 
function UAssetRegistryImpl:GetAllCachedPaths(OutPathList) end

---Gets asset data for all assets in the registry.
---This method may be slow, use a filter if possible to avoid iterating over the entire registry.
---@param OutAssetData TArray_FAssetData_ @[out] 
---@param bIncludeOnlyOnDiskAssets boolean @[opt] 
---@return boolean
function UAssetRegistryImpl:GetAllAssets(OutAssetData, bIncludeOnlyOnDiskAssets) end

