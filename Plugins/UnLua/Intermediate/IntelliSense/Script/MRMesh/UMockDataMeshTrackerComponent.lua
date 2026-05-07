---The MeshTrackerComponent class manages requests for environmental mesh data, processes the results and provides
---them to the calling system. The calling system is able request environmental mesh data within a specified area.
---Various other search criteria can be set via this class's public properties.  Mesh data requests are processed
---on a separate thread.  Once a mesh data request has been processed the calling system will be notified via an
---FOnMeshTrackerUpdated broadcast.
---@class UMockDataMeshTrackerComponent : USceneComponent
---@field public OnMeshTrackerUpdated MulticastDelegate @Activated whenever new information about this mesh tracker is detected.
---@field public ScanWorld boolean @Set to true to start scanning the world for meshes.
---@field public RequestNormals boolean @If true, the system will generate normals for the triangle vertices.
---@field public RequestVertexConfidence boolean @If true, the system will generate the mesh confidence values for the triangle vertices. These confidence values can be used to determine if the user needs to scan more.
---@field public VertexColorMode EMeshTrackerVertexColorMode @Vertex Colors can be unused, or filled with several types of information.
---@field public BlockVertexColors TArray<FColor> @Colors through which we cycle when setting vertex color by block.
---@field public VertexColorFromConfidenceZero FLinearColor @Color mapped to confidence value of zero.
---@field public VertexColorFromConfidenceOne FLinearColor @Color mapped to confidence value of one.
---@field public UpdateInterval number @Update Interval in Seconds.
---@field public MRMesh UMRMeshComponent @MRMeshComponent can render and provide collision based on the Mesh data.
local UMockDataMeshTrackerComponent = {}

---Delegate used by OnMeshUpdated().
---@param Index integer
---@param Vertices TArray_FVector_
---@param Triangles TArray_integer_
---@param Normals TArray_FVector_
---@param Confidence TArray_number_
function UMockDataMeshTrackerComponent:OnMockDataMeshTrackerUpdated__DelegateSignature(Index, Vertices, Triangles, Normals, Confidence) end

---Unlinks the current procedural mesh component from the mesh tracking system.
---@param InMRMeshPtr UMRMeshComponent
function UMockDataMeshTrackerComponent:DisconnectMRMesh(InMRMeshPtr) end

---Sets the procedural mesh component that will store and display the environmental mesh results.
---@param InMRMeshPtr UMRMeshComponent
function UMockDataMeshTrackerComponent:ConnectMRMesh(InMRMeshPtr) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMockDataMeshTrackerComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UMockDataMeshTrackerComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMockDataMeshTrackerComponent:AddAssetUserDataOfClass(InUserDataClass) end

