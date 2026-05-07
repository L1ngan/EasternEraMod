---Universal Object Locators (UOLs) define an address to an object.
---The address is implemented as a chain of FUniversalObjectLocatorFragments, allowing addressing of objects
---  that may be nested deeply within levels of externally defined spawn or ownership logic.
---For example, a Universal Object Locator may reference an Anim Instance within a Skeletal Mesh Actor
---  is spawned by a Child Actor Component that is spawned by Sequencer. This is impossible with a
---  regular soft object path, but is perfectly feasible for a UOL.
---This type is 16 bytes.
---@class FUniversalObjectLocator
---@field private Fragments TArray<FUniversalObjectLocatorFragment> @Array of relative locators ordered sequentially from outer to inner. The first locator is probably 'absolute' and is resolved with no context, although that is not a hard restriction
local FUniversalObjectLocator = {}
