---Base class for all dynamic getter types supplied to an FMovieSceneNumericVariant
---Must be at least aligned to 8 bits since the low bits are used for referencing flags in FMovieSceneNumericVariant
---@class UMovieSceneNumericVariantGetter : UMovieSceneSignedObject
---@field public ReferenceToSelf UMovieSceneNumericVariantGetter @Reference to self used to report this object to the reference graph inside FMovieSceneNumericVariant::AddStructReferencedObjects
local UMovieSceneNumericVariantGetter = {}

