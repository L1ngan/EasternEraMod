---FInstancedStruct works similarly as instanced UObject* property but is USTRUCTs.
---Example:
---    UPROPERTY(EditAnywhere, Category = Foo, meta = (BaseStruct = "/Script/ModuleName.TestStructBase"))
---    FInstancedStruct Test;
---    UPROPERTY(EditAnywhere, Category = Foo, meta = (BaseStruct = "/Script/ModuleName.TestStructBase"))
---    TArray<FInstancedStruct> TestArray;
---@class FInstancedStruct
local FInstancedStruct = {}
