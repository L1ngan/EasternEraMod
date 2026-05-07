---@class ULayersSubsystem : UEditorSubsystem
local ULayersSubsystem = {}

---Updates the visibility for all actors for all views.
---@param LayerThatChanged string
function ULayersSubsystem:UpdateAllViewVisibility(LayerThatChanged) end

---Updates the visibility of all actors in the viewports
---@param bNotifySelectionChange boolean
---@param bRedrawViewports boolean
---@return boolean
function ULayersSubsystem:UpdateAllActorsVisibility(bNotifySelectionChange, bRedrawViewports) end

---Updates the provided actors visibility in the viewports
---@param Actor AActor
---@param bOutSelectionChanged boolean @[out] 
---@param bOutActorModified boolean @[out] 
---@param bNotifySelectionChange boolean
---@param bRedrawViewports boolean
---@return boolean
function ULayersSubsystem:UpdateActorVisibility(Actor, bOutSelectionChanged, bOutActorModified, bNotifySelectionChange, bRedrawViewports) end

---Updates per-view visibility for the given actor for all views
---@param Actor AActor
function ULayersSubsystem:UpdateActorAllViewsVisibility(Actor) end

---Attempts to get the ULayer Object of the provided layer name.
---@param LayerName string
---@param OutLayer ULayer @[out] 
---@return boolean
function ULayersSubsystem:TryGetLayer(LayerName, OutLayer) end

---Toggles the named layer's visibility
---@param LayerName string
function ULayersSubsystem:ToggleLayerVisibility(LayerName) end

---Toggles the visibility of all of the named layers
---@param LayerNames TArray_string_
function ULayersSubsystem:ToggleLayersVisibility(LayerNames) end

---Changes the named layer's visibility to the provided state
---@param LayerName string
---@param bIsVisible boolean
function ULayersSubsystem:SetLayerVisibility(LayerName, bIsVisible) end

---Changes visibility of the named layers to the provided state
---@param LayerNames TArray_string_
---@param bIsVisible boolean
function ULayersSubsystem:SetLayersVisibility(LayerNames, bIsVisible) end

---Selects/de-selects actors belonging to the named layers.
---@param LayerNames TArray_string_
---@param bSelect boolean
---@param bNotify boolean
---@param bSelectEvenIfHidden boolean @[opt] 
---@return boolean
function ULayersSubsystem:SelectActorsInLayers(LayerNames, bSelect, bNotify, bSelectEvenIfHidden) end

---Selects/de-selects actors belonging to the named layer.
---@param LayerName string
---@param bSelect boolean
---@param bNotify boolean
---@param bSelectEvenIfHidden boolean @[opt] 
---@return boolean
function ULayersSubsystem:SelectActorsInLayer(LayerName, bSelect, bNotify, bSelectEvenIfHidden) end

---Renames the provided originally named layer to the provided new name
---@param OriginalLayerName string
---@param NewLayerName string
---@return boolean
function ULayersSubsystem:RenameLayer(OriginalLayerName, NewLayerName) end

---Removes selected actors from the named layers.
---@param LayerNames TArray_string_
---@return boolean
function ULayersSubsystem:RemoveSelectedActorsFromLayers(LayerNames) end

---Removes the selected actors from the named layer.
---@param LayerName string
---@return boolean
function ULayersSubsystem:RemoveSelectedActorsFromLayer(LayerName) end

---Purges any information regarding layers associated with the level and it contents
---@param Level ULevel
function ULayersSubsystem:RemoveLevelLayerInformation(Level) end

---Remove the actors to the named layers
---@param Actors TArray_AActor_
---@param LayerNames TArray_string_
---@param bUpdateStats boolean @[opt] 
---@return boolean
function ULayersSubsystem:RemoveActorsFromLayers(Actors, LayerNames, bUpdateStats) end

---Removes the actors from the specified layer.
---@param Actors TArray_AActor_
---@param LayerName string
---@param bUpdateStats boolean @[opt] 
---@return boolean
function ULayersSubsystem:RemoveActorsFromLayer(Actors, LayerName, bUpdateStats) end

---Removes the provided actor from the named layers.
---@param Actor AActor
---@param LayerNames TArray_string_
---@param bUpdateStats boolean @[opt] 
---@return boolean
function ULayersSubsystem:RemoveActorFromLayers(Actor, LayerNames, bUpdateStats) end

---Removes an actor from the specified layer.
---@param Actor AActor
---@param LayerToRemove string
---@param bUpdateStats boolean @[opt] 
---@return boolean
function ULayersSubsystem:RemoveActorFromLayer(Actor, LayerToRemove, bUpdateStats) end

---Set the visibility of all layers to true
function ULayersSubsystem:MakeAllLayersVisible() end

---Checks whether the ULayer Object of the provided layer name exists.
---@param LayerName string
---@return boolean
function ULayersSubsystem:IsLayer(LayerName) end

---Checks to see if the specified actor is in an appropriate state to interact with layers
---@param Actor AActor
---@return boolean
function ULayersSubsystem:IsActorValidForLayer(Actor) end

---Synchronizes an newly created Actor's layers with the layer system
---@param Actor AActor
---@return boolean
function ULayersSubsystem:InitializeNewActorLayers(Actor) end

---Get the current UWorld object.
---@return UWorld
function ULayersSubsystem:GetWorld() end

---Find and return the selected actors.
---@return TArray_AActor_
function ULayersSubsystem:GetSelectedActors() end

---Gets the ULayer Object of the named layer
---@param LayerName string
---@return ULayer
function ULayersSubsystem:GetLayer(LayerName) end

---Gets all the actors associated with ANY of the specified layers. Analog to AppendActorsFromLayers but it returns rather than appends the actors.
---@param LayerNames TArray_string_
---@return TArray_AActor_
function ULayersSubsystem:GetActorsFromLayers(LayerNames) end

---Gets all the actors associated with the specified layer. Analog to AppendActorsFromLayer but it returns rather than appends the actors.
---@param LayerName string
---@return TArray_AActor_
function ULayersSubsystem:GetActorsFromLayer(LayerName) end

---Delegate handler for FEditorDelegates::RefreshLayerBrowser. It internally calls UpdateAllActorsVisibility to refresh the actors of each layer.
function ULayersSubsystem:EditorRefreshLayerBrowser() end

---Delegate handler for FEditorDelegates::MapChange. It internally calls LayersChanged.Broadcast.
function ULayersSubsystem:EditorMapChange() end

---Disassociates actors from the layer system, generally used before deleting the Actors
---@param Actors TArray_AActor_
---@return boolean
function ULayersSubsystem:DisassociateActorsFromLayers(Actors) end

---Disassociates an Actor's layers from the layer system, general used before deleting the Actor
---@param Actor AActor
---@return boolean
function ULayersSubsystem:DisassociateActorFromLayers(Actor) end

---Deletes all of the provided layers, disassociating all actors from them
---@param LayersToDelete TArray_string_
function ULayersSubsystem:DeleteLayers(LayersToDelete) end

---Deletes the provided layer, disassociating all actors from them
---@param LayerToDelete string
function ULayersSubsystem:DeleteLayer(LayerToDelete) end

---Creates a ULayer Object for the named layer
---@param LayerName string
---@return ULayer
function ULayersSubsystem:CreateLayer(LayerName) end

---Appends all the actors associated with ANY of the specified layers.
---@param LayerNames TArray_string_
---@param InOutActors TArray_AActor_ @[out] 
function ULayersSubsystem:AppendActorsFromLayers(LayerNames, InOutActors) end

---Appends all the actors associated with the specified layer.
---@param LayerName string
---@param InOutActors TArray_AActor_ @[out] 
function ULayersSubsystem:AppendActorsFromLayer(LayerName, InOutActors) end

---Adds selected actors to the named layers.
---@param LayerNames TArray_string_
---@return boolean
function ULayersSubsystem:AddSelectedActorsToLayers(LayerNames) end

---Adds selected actors to the named layer.
---@param LayerName string
---@return boolean
function ULayersSubsystem:AddSelectedActorsToLayer(LayerName) end

---Aggregates any information regarding layers associated with the level and it contents
---@param Level ULevel
function ULayersSubsystem:AddLevelLayerInformation(Level) end

---Gets all known layers and appends them to the provided array
---@param OutLayers TArray_ULayer_ @[out] 
function ULayersSubsystem:AddAllLayersTo(OutLayers) end

---Gets all known layers and appends their names to the provide array
---@param OutLayerNames TArray_string_ @[out] 
function ULayersSubsystem:AddAllLayerNamesTo(OutLayerNames) end

---Adds the provided actor to the named layers.
---@param Actor AActor
---@param LayerNames TArray_string_
---@return boolean
function ULayersSubsystem:AddActorToLayers(Actor, LayerNames) end

---Adds the actor to the named layer.
---@param Actor AActor
---@param LayerName string
---@return boolean
function ULayersSubsystem:AddActorToLayer(Actor, LayerName) end

---Add the actors to the named layers
---@param Actors TArray_AActor_
---@param LayerNames TArray_string_
---@return boolean
function ULayersSubsystem:AddActorsToLayers(Actors, LayerNames) end

---Add the actors to the named layer
---@param Actors TArray_AActor_
---@param LayerName string
---@return boolean
function ULayersSubsystem:AddActorsToLayer(Actors, LayerName) end

