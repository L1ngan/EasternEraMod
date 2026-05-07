---A variant of a transform proxy whose transform is always bound to a particular component. This means
--- that if the component is moved as a result of its parents moving, the proxy will get that transform
--- when queried. This makes the transform proxy very useful for being bound to sub gizmos that are moved
--- by some parent gizmo. SetTransform will cause the proxy to set the transform on the bound component
--- even if it is not part of its component set (to stay matched with the component) so AddComponent is
--- not necessary for the bound component (nor is it likely to be used with this proxy, see below).
---This class is mainly intended to be bound to a single component and used for its delegates. It can
--- still be used for the multi-component movement functionality of a transform proxy, but it is worth
--- noting in that case that if the bound component is moved by its parent, the other components won't
--- necessarily be moved unless SetTransform() is called on the proxy (or they happen to be parented in
--- the same subtree).
---@class UComponentBoundTransformProxy : UTransformProxy
local UComponentBoundTransformProxy = {}

