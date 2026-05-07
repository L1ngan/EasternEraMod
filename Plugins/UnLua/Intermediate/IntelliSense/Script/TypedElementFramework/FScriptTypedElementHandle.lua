---Script exposure for the typed element handle struct type
---Act as a weak handle to simplify the scripting use of the typed element framework and making it safer to use by avoiding crash in case of a bad usage.
---This type is the standard way that an element is passed through to interfaces for a script (Blueprint or Python), and also the type that is stored in the script element lists.
---C++ code may choose to use TTypedElement instead, which is a combination of an element handle and its associated element interface.
---Note: This type shouldn't be used in the engine code as it come with a performance and memory overhead that we want to avoid when compare to the native handles (FTypedElementHandle).
---@class FScriptTypedElementHandle
local FScriptTypedElementHandle = {}
