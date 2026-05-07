---Storage for nanite material override.
---An override material can be selected, and the override material can be used according to the current settings.
---We handle removing the override material and its dependencies from the cook on platforms where we can determine
---that the override material can never be used.
---@class FMaterialOverrideNanite
---@field public bEnableOverride boolean @Stored flag to set whether we apply this override. This is useful when evaluating an override along a hierachy of settings. We default to true to always override.
---@field public OverrideMaterialEditor UMaterialInterface @EditorOnly version of the OverrideMaterial reference. This is a hard reference, but is editoronly. We rely on -skiponlyeditoronly to avoid pulling this editoronly hard reference into the cook.
---@field protected OverrideMaterial UMaterialInterface @Reference to our override material. This is only non-null in cooked packages, and is only non-null for cooked platforms that support nanite. Note that we skip default serialization and use special logic inside Serialize().
---@field protected OverrideMaterialRef TSoftObjectPtr<UMaterialInterface> @Legacy editor soft reference that has been replaced by OverrideMaterialEditor.
local FMaterialOverrideNanite = {}
