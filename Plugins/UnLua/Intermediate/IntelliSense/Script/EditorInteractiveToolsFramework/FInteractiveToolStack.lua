---FInteractiveToolStack represents a bundle of tools that may or may not share the same input chord
---Should some tools share a chord the most recently used tool will be activated by the chord.
---If no tools have been activated yet, the chord will go by order added to the stack.
---To use tool stacks, simply add a UToolStackContext to your relevant interactive tools context.
---This can be done by calling 'AddContextObject' to the context object store of your tool context.
---See: 'UWidgetEditorToolPaletteMode::Enter' as reference.
---@class FInteractiveToolStack
local FInteractiveToolStack = {}
