---Customize Control Rig Editor.
---@class UControlRigEditorSettings : URigVMEditorSettings
---@field public bResetControlsOnCompile boolean @When this is checked all controls will return to their initial value as the user hits the Compile button.
---@field public bResetControlsOnPinValueInteraction boolean @When this is checked all controls will return to their initial value as the user interacts with a pin value
---@field public bResetPoseWhenTogglingEventQueue boolean @When this is checked all elements will be reset to their initial value if the user changes the event queue (for example between forward / backward solve)
---@field public bEnableUndoForPoseInteraction boolean @When this is checked any hierarchy interaction within the Control Rig Editor will be stored on the undo stack
---@field public bResetControlTransformsOnCompile boolean @When checked controls will be reset during a manual compilation (when pressing the Compile button)
---@field public RigUnitPinExpansion TMap<string, FControlRigSettingsPerPinBool> @A map which remembers the expansion setting for each rig unit pin.
---@field public ConstructionEventBorderColor FLinearColor @The border color of the viewport when entering "Construction Event" mode
---@field public BackwardsSolveBorderColor FLinearColor @The border color of the viewport when entering "Backwards Solve" mode
---@field public BackwardsAndForwardsBorderColor FLinearColor @The border color of the viewport when entering "Backwards And Forwards" mode
---@field public bShowStackedHierarchy boolean @Option to toggle displaying the stacked hierarchy items. Note that changing this option potentially requires to re-open the editors in question.
---@field public MaxStackSize integer @The maximum number of stacked items in the view Note that changing this option potentially requires to re-open the editors in question.
---@field public bLeftMouseDragDoesMarquee boolean @If turned on we'll offer box / marquee selection in the control rig editor viewport.
---@field public bArrangeByModules boolean @If turned on the controls in the Anim Outliner will be arranged by modules in Modular Rigs.
---@field public bFlattenModules boolean @If turned on the modules in the Anim Outliner will be arranged in a flat list.
---@field public ElementNameDisplayMode EElementNameDisplayMode @Defines how the element names will be displayed in treeviews, anim outliner etc
---@field public bFocusOnSelection boolean @If turned on the Anim Outliner will focus on the selection.
local UControlRigEditorSettings = {}

