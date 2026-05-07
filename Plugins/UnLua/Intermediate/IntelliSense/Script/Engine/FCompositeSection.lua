---Section data for each track. Reference of data will be stored in the child class for the way they want
---AnimComposite vs AnimMontage have different requirement for the actual data reference
---This only contains composite section information. (vertical sequences)
---@class FCompositeSection : FAnimLinkableElement
---@field public SectionName string @Section Name
---@field public NextSectionName string @Should this animation loop.
---@field public MetaData TArray<UAnimMetaData> @Meta data that can be saved with the asset You can query by GetMetaData function
local FCompositeSection = {}
