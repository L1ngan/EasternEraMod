---@class UStaticMeshSocket : UObject
---@field public SocketName string @Defines a named attachment location on the UStaticMesh. These are set up in editor and used as a shortcut instead of specifying everything explicitly to AttachComponent in the StaticMeshComponent. The Outer of a StaticMeshSocket should always be the UStaticMesh.
---@field public RelativeLocation FVector
---@field public RelativeRotation FRotator
---@field public RelativeScale FVector
---@field public Tag string
---@field public PreviewStaticMesh UStaticMesh
---@field public bSocketCreatedAtImport boolean @Whether the socket was imported with the asset or created in the editor. Importer will remove/modify only imported socket and will not touch any editor created socket.
local UStaticMeshSocket = {}

