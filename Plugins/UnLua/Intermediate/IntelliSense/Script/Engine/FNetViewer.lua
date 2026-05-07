---stores information on a viewer that actors need to be checked against for relevancy
---@class FNetViewer
---@field public Connection UNetConnection
---@field public InViewer AActor @The "controlling net object" associated with this view (typically player controller)
---@field public ViewTarget AActor @The actor that is being directly viewed, usually a pawn.  Could also be the net actor of consequence
---@field public ViewLocation FVector @Where the viewer is looking from
---@field public ViewDir FVector @Direction the viewer is looking
local FNetViewer = {}
