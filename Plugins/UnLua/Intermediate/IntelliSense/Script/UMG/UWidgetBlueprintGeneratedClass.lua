---The widget blueprint generated class allows us to create blueprint-able widgets for UMG at runtime.
---All WBPGC's are of UUserWidget classes, and they perform special post initialization using this class
---to give themselves many of the same capabilities as AActor blueprints, like dynamic delegate binding for
---widgets.
---@class UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass
---@field private WidgetTree UWidgetTree @A tree of the widget templates to be created
---@field private Extensions TArray<UWidgetBlueprintGeneratedClassExtension> @The extension that are considered static to the class
---@field private bClassRequiresNativeTick boolean @The classes native parent requires a native tick
---@field public bCanCallPreConstruct boolean
---@field public bCanCallInitializedWithoutPlayerContext boolean @Determines whether this widget blueprint can be initialized without a valid player context (PlayerController, etc.). Required to be true for use with UMG Widget Preview.
---@field public Bindings TArray<FDelegateRuntimeBinding>
---@field public Animations TArray<UWidgetAnimation>
---@field public NamedSlots TArray<string> @All named slots, even the ones that have content already filled into them by a parent class and are not available for extension.
---@field public NamedSlotsWithID TMap<string, FGuid> @All named slots mapped the assigned GUID of their UNamedSlot widget. *
---@field public NamedSlotsWithContentInSameTree TSet<string>
---@field public NameClashingInHierarchy TSet<string>
---@field public AvailableNamedSlots TArray<string> @Available Named Slots for content in a subclass.  These are slots that are accumulated from all super classes on compile.  They will exclude any named slots that are filled by a parent class.
---@field public InstanceNamedSlots TArray<string> @These are the set of named slots that can be used on an instance of the widget.  This set is slightly different from available named slots, because ones designated UNamedSlot::bExposeOnInstanceOnly == true will also be in this list, even though they wont be in AvailableNamedSlots, if are inherited, as inherited named slots do not have the capability to remove existing content in a named slot.
local UWidgetBlueprintGeneratedClass = {}

