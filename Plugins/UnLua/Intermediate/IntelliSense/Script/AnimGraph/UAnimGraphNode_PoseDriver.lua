---@class UAnimGraphNode_PoseDriver : UAnimGraphNode_PoseHandler
---@field public Node FAnimNode_PoseDriver
---@field public AxisLength number @Length of axis in world units used for debug drawing
---@field public ConeSubdivision integer @Number of subdivisions / lines used when debug drawing a cone
---@field public bDrawDebugCones boolean @If checked the cones will be drawn in 3d for debugging
---@field public LastPreviewComponent USkeletalMeshComponent @Used to refer back to preview instance in anim tools
local UAnimGraphNode_PoseDriver = {}

---Sets the pose-driver its source bones by name
---@param BoneNames TArray_string_
function UAnimGraphNode_PoseDriver:SetSourceBones(BoneNames) end

---@param Parameters FRBFParams
function UAnimGraphNode_PoseDriver:SetRBFParameters(Parameters) end

---@param DriverSource EPoseDriverSource
function UAnimGraphNode_PoseDriver:SetPoseDriverSource(DriverSource) end

---@param DriverOutput EPoseDriverOutput
function UAnimGraphNode_PoseDriver:SetPoseDriverOutput(DriverOutput) end

---Set the pose-driver its driven bones by name
---@param BoneNames TArray_string_
function UAnimGraphNode_PoseDriver:SetDrivingBones(BoneNames) end

---Returns the pose-driver its source bones by name
---@param BoneNames TArray_string_ @[out] 
function UAnimGraphNode_PoseDriver:GetSourceBoneNames(BoneNames) end

---@return FRBFParams
function UAnimGraphNode_PoseDriver:GetRBFParameters() end

---@return EPoseDriverSource
function UAnimGraphNode_PoseDriver:GetPoseDriverSource() end

---@return EPoseDriverOutput
function UAnimGraphNode_PoseDriver:GetPoseDriverOutput() end

---Returns the pose-driver its driven bones by name
---@param BoneNames TArray_string_ @[out] 
function UAnimGraphNode_PoseDriver:GetDrivingBoneNames(BoneNames) end

---Util to replace current contents of PoseTargets with info from assigned PoseAsset
function UAnimGraphNode_PoseDriver:CopyTargetsFromPoseAsset() end

