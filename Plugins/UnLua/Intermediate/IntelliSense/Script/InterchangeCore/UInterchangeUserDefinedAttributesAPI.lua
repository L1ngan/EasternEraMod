---UInterchangeUserDefinedAttributesAPI is used to store and retrieve user-defined attributes such as DCC node attributes, so that pipelines have access to those attributes.
---Every user-defined attribute has a name, a value, and an optional AnimationPayloadKey: an FRichCurve that is a float curve.
---The value type must be supported by the UE::Interchange::EAttributeTypes enumeration.
---@class UInterchangeUserDefinedAttributesAPI : UObject
local UInterchangeUserDefinedAttributesAPI = {}

---Remove the specified user-defined attribute.
---Note - User-defined attributes are the user custom attributes from the DCC translated node (for example, extra attributes in Maya).
---       The payload key points to an FRichCurve payload.
---@param InterchangeNode UInterchangeBaseNode
---@param UserDefinedAttributeName string
---@return boolean
function UInterchangeUserDefinedAttributesAPI.RemoveUserDefinedAttribute(InterchangeNode, UserDefinedAttributeName) end

---@param InterchangeNode UInterchangeBaseNode
---@param UserDefinedAttributeInfos TArray_FInterchangeUserDefinedAttributeInfo_ @[out] 
function UInterchangeUserDefinedAttributesAPI.GetUserDefinedAttributeInfos(InterchangeNode, UserDefinedAttributeInfos) end

---@param InterchangeNode UInterchangeBaseNode
---@param UserDefinedAttributeName string
---@param OutValue integer @[out] 
---@param OutPayloadKey string @[out] 
---@return boolean
function UInterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Int32(InterchangeNode, UserDefinedAttributeName, OutValue, OutPayloadKey) end

---@param InterchangeNode UInterchangeBaseNode
---@param UserDefinedAttributeName string
---@param OutValue string @[out] 
---@param OutPayloadKey string @[out] 
---@return boolean
function UInterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_FString(InterchangeNode, UserDefinedAttributeName, OutValue, OutPayloadKey) end

---@param InterchangeNode UInterchangeBaseNode
---@param UserDefinedAttributeName string
---@param OutValue number @[out] 
---@param OutPayloadKey string @[out] 
---@return boolean
function UInterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Float(InterchangeNode, UserDefinedAttributeName, OutValue, OutPayloadKey) end

---@param InterchangeNode UInterchangeBaseNode
---@param UserDefinedAttributeName string
---@param OutValue number @[out] 
---@param OutPayloadKey string @[out] 
---@return boolean
function UInterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Double(InterchangeNode, UserDefinedAttributeName, OutValue, OutPayloadKey) end

---@param InterchangeNode UInterchangeBaseNode
---@param UserDefinedAttributeName string
---@param OutValue boolean @[out] 
---@param OutPayloadKey string @[out] 
---@return boolean
function UInterchangeUserDefinedAttributesAPI.GetUserDefinedAttribute_Boolean(InterchangeNode, UserDefinedAttributeName, OutValue, OutPayloadKey) end

---@param InterchangeSourceNode UInterchangeBaseNode
---@param InterchangeDestinationNode UInterchangeBaseNode
---@param bAddSourceNodeName boolean
function UInterchangeUserDefinedAttributesAPI.DuplicateAllUserDefinedAttribute(InterchangeSourceNode, InterchangeDestinationNode, bAddSourceNodeName) end

---@param InterchangeNode UInterchangeBaseNode
---@param UserDefinedAttributeName string
---@param Value integer
---@param PayloadKey string
---@param RequiresDelegate boolean @[opt] 
---@return boolean
function UInterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Int32(InterchangeNode, UserDefinedAttributeName, Value, PayloadKey, RequiresDelegate) end

---@param InterchangeNode UInterchangeBaseNode
---@param UserDefinedAttributeName string
---@param Value string
---@param PayloadKey string
---@param RequiresDelegate boolean @[opt] 
---@return boolean
function UInterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_FString(InterchangeNode, UserDefinedAttributeName, Value, PayloadKey, RequiresDelegate) end

---@param InterchangeNode UInterchangeBaseNode
---@param UserDefinedAttributeName string
---@param Value number
---@param PayloadKey string
---@param RequiresDelegate boolean @[opt] 
---@return boolean
function UInterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Float(InterchangeNode, UserDefinedAttributeName, Value, PayloadKey, RequiresDelegate) end

---@param InterchangeNode UInterchangeBaseNode
---@param UserDefinedAttributeName string
---@param Value number
---@param PayloadKey string
---@param RequiresDelegate boolean @[opt] 
---@return boolean
function UInterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Double(InterchangeNode, UserDefinedAttributeName, Value, PayloadKey, RequiresDelegate) end

---@param InterchangeNode UInterchangeBaseNode
---@param UserDefinedAttributeName string
---@param Value boolean
---@param PayloadKey string
---@param RequiresDelegate boolean @[opt] 
---@return boolean
function UInterchangeUserDefinedAttributesAPI.CreateUserDefinedAttribute_Boolean(InterchangeNode, UserDefinedAttributeName, Value, PayloadKey, RequiresDelegate) end

