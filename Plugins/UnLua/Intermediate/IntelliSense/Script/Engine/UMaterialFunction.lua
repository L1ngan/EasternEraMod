---A Material Function is a collection of material expressions that can be reused in different materials
---@class UMaterialFunction : UMaterialFunctionInterface
---@field public ParentFunction UMaterialFunction @Used in the material editor, points to the function asset being edited, which this function is just a preview for.
---@field public Description string @Description of the function which will be displayed as a tooltip wherever the function is used.
---@field public UserExposedCaption string @Name of the function to be displayed on the node within the material editor instead of the asset name.
---@field public bExposeToLibrary boolean @Whether to list this function in the material function library, which is a window in the material editor that lists categorized functions.
---@field public bPrefixParameterNames boolean
---@field public bEnableExecWire boolean
---@field public bEnableNewHLSLGenerator boolean
---@field public LibraryCategoriesText TArray<string> @Categories that this function belongs to in the material function library. Ideally categories should be chosen carefully so that there are not too many.
---@field public PreviewMaterial UMaterial
---@field public DependentFunctionExpressionCandidates TArray<UMaterialExpressionMaterialFunctionCall>
---@field public PreviewBlendMode integer @Determines the blend mode when previewing a material function.
---@field public PreviewMaterialDomain integer @The domain to use when previewing a material function.
---@field private bReentrantFlag boolean @Transient flag used to track re-entrance in recursive functions like IsDependent.
local UMaterialFunction = {}

