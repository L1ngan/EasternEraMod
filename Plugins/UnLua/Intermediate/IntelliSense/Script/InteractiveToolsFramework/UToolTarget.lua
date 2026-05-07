---A tool target is a stand-in object that a tool can operate on. It exposes the necessary
---interfaces to the tool.
---There are two intended purposes of the tool target system:
---1. Allow tools to operate on arbitrary objects as long as they can be made to provide the
---  tool with the necessary inputs. For instance, a mesh editing tool should be able to operate
---  on skeletal, static, volume, and other mesh as long as the target manager has a registered
---  factory that can use that type of mesh to create a suitable target.
---2. (not yet used) Help cache tool inputs. I.e., if a tool requires an expensive
---  conversion before it can work on an item, the converted result can be stored in the
---  tool target which can be cached by the target manager and provided the next time the
---  same type of target is requested for that item.
---Given an object, tool builders usually ask the target manager to turn it into a target that
---has the interfaces the tools needs. The tools cast the target to those interfaces to use
---them.
---@class UToolTarget : UObject
local UToolTarget = {}

