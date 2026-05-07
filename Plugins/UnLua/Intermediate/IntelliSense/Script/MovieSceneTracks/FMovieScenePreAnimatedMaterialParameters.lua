---@class FMovieScenePreAnimatedMaterialParameters
---@field private PreviousMaterial UMaterialInterface @Strong ptr to the previously assigned material interface (used when Sequencer.UseSoftObjectPtrsForPreAnimatedMaterial is false)
---@field private SoftPreviousMaterial TSoftObjectPtr<UMaterialInterface> @Soft ptr to the previously assigned material interface (used when Sequencer.UseSoftObjectPtrsForPreAnimatedMaterial is true)
local FMovieScenePreAnimatedMaterialParameters = {}
