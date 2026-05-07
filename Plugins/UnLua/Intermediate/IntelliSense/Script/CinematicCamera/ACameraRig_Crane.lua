---A simple rig for simulating crane-like camera movements.
---@class ACameraRig_Crane : AActor
---@field public CranePitch number @Controls the pitch of the crane arm.
---@field public CraneYaw number @Controls the yaw of the crane arm.
---@field public CraneArmLength number @Controls the length of the crane arm.
---@field public bLockMountPitch boolean @Lock the mount pitch so that an attached camera is locked and pitched in the direction of the crane arm
---@field public bLockMountYaw boolean @Lock the mount yaw so that an attached camera is locked and oriented in the direction of the crane arm
---@field private TransformComponent USceneComponent @Root component to give the whole actor a transform.
---@field private CraneYawControl USceneComponent @Component to control Yaw.
---@field private CranePitchControl USceneComponent @Component to control Pitch.
---@field private CraneCameraMount USceneComponent @Component to define the attach point for cameras.
---@field private PreviewMesh_CraneArm UStaticMeshComponent @Preview meshes for visualization
---@field private PreviewMesh_CraneBase UStaticMeshComponent
---@field private PreviewMesh_CraneMount UStaticMeshComponent
---@field private PreviewMesh_CraneCounterWeight UStaticMeshComponent
local ACameraRig_Crane = {}

