---System that becomes relevant if there are any entites tagged RestoreState,
---or UMovieSceneEntitySystemLinker::ShouldCaptureGlobalState is true.
---When run this system will iterate the instantiation phase in reverse order, and call
---IMovieScenePreAnimatedStateSystemInterface::Restore(Global)PreAnimatedState on any
---systems that implement the necessary interface.
---@class UMovieSceneRestorePreAnimatedStateSystem : UMovieSceneEntityInstantiatorSystem
local UMovieSceneRestorePreAnimatedStateSystem = {}

