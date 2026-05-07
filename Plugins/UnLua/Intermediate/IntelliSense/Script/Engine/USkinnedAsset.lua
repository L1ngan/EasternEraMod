---@class USkinnedAsset : UStreamableRenderAsset
local USkinnedAsset = {}

---Find a socket object and associated info in this SkeletalMesh by name.
---Entering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.
---Also returns the index for the socket allowing for future fast access via GetSocketByIndex()
---Also returns the socket transform and the bone index (if any)
---@param InSocketName string
---@param OutTransform FTransform @[out] 
---@param OutBoneIndex integer @[out] 
---@param OutIndex integer @[out] 
---@return USkeletalMeshSocket
function USkinnedAsset:FindSocketInfo(InSocketName, OutTransform, OutBoneIndex, OutIndex) end

---Find a socket object in this SkeletalMesh by name.
---Entering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.
---@param InSocketName string
---@return USkeletalMeshSocket
function USkinnedAsset:FindSocket(InSocketName) end

