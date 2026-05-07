---The Pin represents a single connector / pin on a node in the RigVM model.
---Pins can be connected based on rules. Pins also provide access to a 'PinPath',
---which essentially represents . separated list of names to reach the pin within
---the owning graph. PinPaths are unique.
---In comparison to the EdGraph Pin the URigVMPin supports the concept of 'SubPins',
---so child / parent relationships between pins. A FVector Pin for example might
---have its X, Y and Z components as SubPins. Array Pins will have its elements as
---SubPins, and so on.
---A URigVMPin is owned solely by a URigVMNode.
---@class URigVMPin : UObject
---@field private DisplayName string
---@field private Direction ERigVMPinDirection @if new members are added to the pin in the future it is important to search for all existing usages of all members to make sure things are copied/initialized properly
---@field private bIsExpanded boolean
---@field private bIsConstant boolean
---@field private bRequiresWatch boolean
---@field private bIsDynamicArray boolean
---@field private bIsLazy boolean
---@field private CPPType string
---@field private CPPTypeObject UObject @serialize object ptr here to keep track of the latest version of the type object, type object can reference assets like user defined struct, which can be renamed or moved to new locations, serializing the type object with the pin ensure automatic update whenever those things happen
---@field private CPPTypeObjectPath string
---@field private DefaultValue string
---@field private DefaultValueType ERigVMPinDefaultValueType
---@field private CustomWidgetName string
---@field private SubPins TArray<URigVMPin>
---@field private Links TArray<URigVMLink>
---@field private InjectionInfos TArray<URigVMInjectionInfo>
---@field private UserDefinedCategory string
---@field private IndexInCategory integer
local URigVMPin = {}

---Returns true if this pin is an array that should be displayed as elements only
---@return boolean
function URigVMPin:ShouldOnlyShowSubPins() end

---Returns true if this pin's subpins should be hidden in the UI
---@return boolean
function URigVMPin:ShouldHideSubPins() end

---Returns true if the pin should be watched
---@param bCheckExposedPinChain boolean @[opt] 
---@return boolean
function URigVMPin:RequiresWatch(bCheckExposedPinChain) end

---Returns true if the C++ data type is unknown
---@return boolean
function URigVMPin:IsWildCard() end

---Returns true if the default value provided is valid
---@param InDefaultValue string
---@return boolean
function URigVMPin:IsValidDefaultValue(InDefaultValue) end

---Returns true if the data type of the Pin is a uobject
---@return boolean
function URigVMPin:IsUObject() end

---Returns true if this pin represents a trait
---@return boolean
function URigVMPin:IsTraitPin() end

---Returns true if the Pin is a SubPin within a struct
---@return boolean
function URigVMPin:IsStructMember() end

---Returns true if the data type of the Pin is a struct
---@return boolean
function URigVMPin:IsStruct() end

---Returns true if the C++ data type is FString or FName
---@return boolean
function URigVMPin:IsStringType() end

---Returns true if this pin is a root pin
---@return boolean
function URigVMPin:IsRootPin() end

---Returns true if this data type is referenced counted
---@return boolean
function URigVMPin:IsReferenceCountedContainer() end

---Returns true if this Pin is linked to another Pin
---@param InPin URigVMPin
---@return boolean
function URigVMPin:IsLinkedTo(InPin) end

---Returns true if this pin's value may be executed lazily
---@return boolean
function URigVMPin:IsLazy() end

---Returns true if the data type of the Pin is a interface
---@return boolean
function URigVMPin:IsInterface() end

---Returns true if this pin is an array that should be displayed as elements only
---@return boolean
function URigVMPin:IsFixedSizeArray() end

---Returns true if the pin is currently expanded
---@return boolean
function URigVMPin:IsExpanded() end

---Returns true if the C++ data type is an execute context
---@return boolean
function URigVMPin:IsExecuteContext() end

---Returns true if the data type of the Pin is a enum
---@return boolean
function URigVMPin:IsEnum() end

---Returns true if this pin represents a dynamic array
---@return boolean
function URigVMPin:IsDynamicArray() end

---Returns true if the pin is defined as a constant value / literal
---@return boolean
function URigVMPin:IsDefinedAsConstant() end

---Returns true if the Pin is a SubPin within an array
---@return boolean
function URigVMPin:IsArrayElement() end

---Returns true if the data type of the Pin is an array
---@return boolean
function URigVMPin:IsArray() end

---@return boolean
function URigVMPin:HasUserProvidedDefaultValue() end

---@return boolean
function URigVMPin:HasOriginalDefaultValue() end

---Returns true if the default value was ever changed by the user
---@return boolean
function URigVMPin:HasDefaultValueOverride() end

---Returns the tooltip of this pin
---@return string
function URigVMPin:GetToolTipText() end

---Returns all of the target links,
---using this Pin as the source.
---@param bRecursive boolean @[opt] 
---@return TArray_URigVMLink_
function URigVMPin:GetTargetLinks(bRecursive) end

---Returns all of the SubPins of this one.
---@return TArray_URigVMPin_
function URigVMPin:GetSubPins() end

---Returns a . separated path containing all names of the pin and its owners
---until we hit the provided parent pin.
---@param InParentPin URigVMPin
---@param bIncludeParentPinName boolean @[opt] 
---@return string
function URigVMPin:GetSubPinPath(InParentPin, bIncludeParentPinName) end

---Returns all of the source pins
---using this Pin as the target.
---@param bRecursive boolean @[opt] 
---@return TArray_URigVMLink_
function URigVMPin:GetSourceLinks(bRecursive) end

---Returns a . separated path containing all names of the pin within its main
---memory owner / storage. This is typically used to create an offset pointer
---within memory (FRigVMRegisterOffset).
---So for example for a PinPath such as "Node.Transform.Translation.X" the
---corresponding SegmentPath is "Translation.X", since the transform is the
---storage / memory.
---@param bIncludeRootPin boolean @[opt] 
---@return string
function URigVMPin:GetSegmentPath(bIncludeRootPin) end

---Returns the struct of the data type of the Pin,
---or nullptr otherwise.
---@return UScriptStruct
function URigVMPin:GetScriptStruct() end

---Returns the top-most parent Pin, so for example
---for "Node.Transform.Translation.X" this returns
---the Pin for "Node.Transform".
---@return URigVMPin
function URigVMPin:GetRootPin() end

---Returns a . separated path containing all names of the pin and its owners,
---this includes the node name, for example "Node.Color.R"
---@param bUseNodePath boolean @[opt] 
---@return string
function URigVMPin:GetPinPath(bUseNodePath) end

---Returns the index of the Pin within the node / parent Pin
---@return integer
function URigVMPin:GetPinIndex() end

---Returns the pin to be used for a link.
---This might differ from this actual pin, since
---the pin might contain injected nodes.
---@return URigVMPin
function URigVMPin:GetPinForLink() end

---Returns the parent struct of the data type of the Pin
---@param FallbackNode URigVMUnitNode
---@return UScriptStruct
function URigVMPin:GetParentScriptStruct(FallbackNode) end

---Returns the parent Pin - or nullptr if the Pin
---is nested directly below a node.
---@return URigVMPin
function URigVMPin:GetParentPin() end

---Returns the original pin for a pin on an injected
---node. This can be used to determine where a link
---should go in the user interface
---@return URigVMPin
function URigVMPin:GetOriginalPinFromInjectedNode() end

---@return string
function URigVMPin:GetOriginalDefaultValue() end

---Returns the node of this Pin.
---@return URigVMNode
function URigVMPin:GetNode() end

---Returns the keyed metadata associated with this pin, if any
---@param InKey string
---@return string
function URigVMPin:GetMetaData(InKey) end

---Returns all of the links linked to this Pin.
---@return TArray_URigVMLink_
function URigVMPin:GetLinks() end

---Returns all of the linked target Pins,
---using this Pin as the source.
---@param bRecursive boolean @[opt] 
---@return TArray_URigVMPin_
function URigVMPin:GetLinkedTargetPins(bRecursive) end

---Returns all of the linked source Pins,
---using this Pin as the target.
---@param bRecursive boolean @[opt] 
---@return TArray_URigVMPin_
function URigVMPin:GetLinkedSourcePins(bRecursive) end

---Returns index within a category on a pin. The category is UI relevant only and used
---to order pins in the user interface of the node as well as on the details panel.
---@return integer
function URigVMPin:GetIndexInCategory() end

---Returns the graph of this Pin.
---@return URigVMGraph
function URigVMPin:GetGraph() end

---Returns the enum of the data type of the Pin,
---or nullptr otherwise.
---@return UEnum
function URigVMPin:GetEnum() end

---Returns the display label of the pin
---@return string
function URigVMPin:GetDisplayName() end

---Returns the direction of the pin
---@return ERigVMPinDirection
function URigVMPin:GetDirection() end

---Returns true if the pin can / may provide a default value
---@return ERigVMPinDefaultValueType
function URigVMPin:GetDefaultValueType() end

---Returns the default value of the Pin as a string.
---Note that this value is computed based on the Pin's
---SubPins - so for example for a FVector typed Pin
---the default value is actually composed out of the
---default values of the X, Y and Z SubPins.
---@return string
function URigVMPin:GetDefaultValue() end

---Returns the name of a custom widget to be used
---for editing the Pin.
---@return string
function URigVMPin:GetCustomWidgetName() end

---Returns the struct of the data type of the Pin,
---or nullptr otherwise.
---@return UObject
function URigVMPin:GetCPPTypeObject() end

---Returns the C++ data type of the pin
---@return string
function URigVMPin:GetCPPType() end

---Returns the category on a pin. The category is UI relevant only and used
---to order pins in the user interface of the node as well as on the details panel.
---@return string
function URigVMPin:GetCategory() end

---Returns the number of elements within an array Pin
---@return integer
function URigVMPin:GetArraySize() end

---Returns the C++ data type of an element of the Pin array
---@return string
function URigVMPin:GetArrayElementCppType() end

---Returns all of the SubPins of this one including sub-sub-pins
---@return TArray_URigVMPin_
function URigVMPin:GetAllSubPinsRecursively() end

---Returns the absolute index of the Pin within the node / parent Pin
---@return integer
function URigVMPin:GetAbsolutePinIndex() end

---Returns a SubPin given a name / path or nullptr.
---@param InPinPath string
---@return URigVMPin
function URigVMPin:FindSubPin(InPinPath) end

---Returns the link that represents the connection
---between this pin and InOtherPin. nullptr is returned
---if the pins are not connected.
---@param InOtherPin URigVMPin
---@return URigVMLink
function URigVMPin:FindLinkForPin(InOtherPin) end

---Returns true if any of the subpins is a wildcard
---@return boolean
function URigVMPin:ContainsWildCardSubPin() end

---Returns true if the pin can / may provide a default value
---@return boolean
function URigVMPin:CanProvideDefaultValue() end

