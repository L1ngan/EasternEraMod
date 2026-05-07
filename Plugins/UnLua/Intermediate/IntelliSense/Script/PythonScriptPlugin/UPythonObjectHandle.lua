---Handle object to wrap a Python object for use as a UPROPERTY on a UCLASS or USTRUCT.
---This allows Python generated types to store arbitrary Python objects as native properties,
---rather than rely on the lifetime of the Python wrapper object to keep a non-property object reference alive.
---The following functions are available in Python script to interact with these handles:
---  - unreal.create_python_object_handle(obj) -> handle  - Creates an unreal.PythonObjectHandle from a given PyObject.
---  - unreal.resolve_python_object_handle(handle) -> obj - Resolves an unreal.PythonObjectHandle to its PyObject, or None.
---  - unreal.destroy_python_object_handle(handle)        - Destroys an unreal.PythonObjectHandle (clearing its PyObject reference).
---Manually calling destroy is optional, but can be useful when you need to *immediately* clean-up a reference to the wrapped
---Python object, rather than wait for UE GC to clean it up at an arbitrary point in the future.
---This can be used to create a property on Python generated types via the standard unreal.uproperty syntax, eg):
---  MyObjectHandleProperty = unreal.uproperty(unreal.PythonObjectHandle)
---@class UPythonObjectHandle : UObject
local UPythonObjectHandle = {}

