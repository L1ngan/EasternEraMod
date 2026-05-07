---@class UMetasoundEditorGraphMemberDefaultFloat : UMetasoundEditorGraphMemberDefaultLiteral
---@field private Default number
---@field private Defaults TArray<FMetasoundEditorMemberPageDefaultFloat>
---@field public ClampDefault boolean
---@field public Range FVector2D
---@field public WidgetType EMetasoundMemberDefaultWidget
---@field public WidgetOrientation integer
---@field public WidgetUnitValueType EAudioUnitsValueType
---@field public VolumeWidgetUseLinearOutput boolean @If true, output linear value. Otherwise, output dB value. The volume widget itself will always display the value in dB. The Default Value and Range are linear.
---@field public VolumeWidgetDecibelRange FVector2D @Range in decibels. This will be converted to the linear range in the Default Value category.
local UMetasoundEditorGraphMemberDefaultFloat = {}

