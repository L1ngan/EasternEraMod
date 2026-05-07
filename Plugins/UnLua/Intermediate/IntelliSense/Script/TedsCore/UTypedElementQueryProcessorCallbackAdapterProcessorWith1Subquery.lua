---Mass verifies that queries that are used by processors are on the processor themselves. It does this by taking the address of the query
---and seeing if it's within the start and end address of the processor. When a dynamic array is used those addresses are going to be
---elsewhere, so the two options are to store a single fixed size array on a processor or have multiple instances. With Mass' queries being
---not an insignificant size it's preferable to have several variants with queries to allow the choice for the minimal size. Unfortunately
---UHT doesn't allow for templates so it had to be done in an explicit way.
---@class UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery : UTypedElementQueryProcessorCallbackAdapterProcessorBase
---@field private NativeSubqueries FMassEntityQuery
local UTypedElementQueryProcessorCallbackAdapterProcessorWith1Subquery = {}

