---@class UDataLayerEditorSubsystem : UEditorSubsystem
local UDataLayerEditorSubsystem = {}

---@param DataLayerThatChanged UDEPRECATED_DataLayer
function UDataLayerEditorSubsystem:UpdateAllViewVisibility(DataLayerThatChanged) end

---Updates the visibility of all actors in the viewports
---@param bNotifySelectionChange boolean
---@param bRedrawViewports boolean
---@return boolean
function UDataLayerEditorSubsystem:UpdateAllActorsVisibility(bNotifySelectionChange, bRedrawViewports) end

---Updates the provided actors visibility in the viewports
---@param Actor AActor
---@param bOutSelectionChanged boolean @[out] 
---@param bOutActorModified boolean @[out] 
---@param bNotifySelectionChange boolean
---@param bRedrawViewports boolean
---@return boolean
function UDataLayerEditorSubsystem:UpdateActorVisibility(Actor, bOutSelectionChanged, bOutActorModified, bNotifySelectionChange, bRedrawViewports) end

---@param Actor AActor
function UDataLayerEditorSubsystem:UpdateActorAllViewsVisibility(Actor) end

---Toggles the DataLayer's visibility
---@param DataLayer UDataLayerInstance
function UDataLayerEditorSubsystem:ToggleDataLayerVisibility(DataLayer) end

---Toggles the visibility of all of the DataLayers
---@param DataLayers TArray_UDataLayerInstance_
function UDataLayerEditorSubsystem:ToggleDataLayersVisibility(DataLayers) end

---Toggles the IsLoadedInEditor flag of all of the DataLayers
---@param DataLayers TArray_UDataLayerInstance_
---@param bIsFromUserChange boolean
---@return boolean
function UDataLayerEditorSubsystem:ToggleDataLayersIsLoadedInEditor(DataLayers, bIsFromUserChange) end

---@param DataLayers TArray_UDEPRECATED_DataLayer_
---@param bIsFromUserChange boolean
---@return boolean
function UDataLayerEditorSubsystem:ToggleDataLayersIsDynamicallyLoadedInEditor(DataLayers, bIsFromUserChange) end

---Toggles the DataLayer's IsLoadedInEditor flag
---@param DataLayer UDataLayerInstance
---@param bIsFromUserChange boolean
---@return boolean
function UDataLayerEditorSubsystem:ToggleDataLayerIsLoadedInEditor(DataLayer, bIsFromUserChange) end

---@param DataLayer UDEPRECATED_DataLayer
---@param bIsFromUserChange boolean
---@return boolean
function UDataLayerEditorSubsystem:ToggleDataLayerIsDynamicallyLoadedInEditor(DataLayer, bIsFromUserChange) end

---Sets a Parent DataLayer for a specified list of DataLayers
--- @@param DataLayers           The child DataLayers.
--- @@param ParentDataLayer      The parent DataLayer.
---@param DataLayers TArray_UDataLayerInstance_
---@param ParentDataLayer UDataLayerInstance
function UDataLayerEditorSubsystem:SetParentDataLayerForDataLayers(DataLayers, ParentDataLayer) end

---Sets a Parent DataLayer for a specified DataLayer
--- @@param DataLayer            The child DataLayer.
--- @@param ParentDataLayer      The parent DataLayer.
--- @@return     true if succeeded, false if failed.
---@param DataLayer UDataLayerInstance
---@param ParentDataLayer UDataLayerInstance
---@return boolean
function UDataLayerEditorSubsystem:SetParentDataLayer(DataLayer, ParentDataLayer) end

---Changes the DataLayer's visibility to the provided state
---@param DataLayer UDataLayerInstance
---@param bIsVisible boolean
function UDataLayerEditorSubsystem:SetDataLayerVisibility(DataLayer, bIsVisible) end

---Changes visibility of the DataLayers to the provided state
---@param DataLayers TArray_UDataLayerInstance_
---@param bIsVisible boolean
function UDataLayerEditorSubsystem:SetDataLayersVisibility(DataLayers, bIsVisible) end

---Changes the IsLoadedInEditor flag of the DataLayers to the provided state
---                                                                                     If True, the Editor loading will consider this DataLayer to load or not an Actor part of this DataLayer.
---                                                                                     An Actor will not be loaded in the Editor if all its DataLayers are not LoadedInEditor.
---@param DataLayers TArray_UDataLayerInstance_
---@param bIsLoadedInEditor boolean
---@param bIsFromUserChange boolean
---@return boolean
function UDataLayerEditorSubsystem:SetDataLayersIsLoadedInEditor(DataLayers, bIsLoadedInEditor, bIsFromUserChange) end

---@param DataLayers TArray_UDEPRECATED_DataLayer_
---@param bIsLoadedInEditor boolean
---@param bIsFromUserChange boolean
---@return boolean
function UDataLayerEditorSubsystem:SetDataLayersIsDynamicallyLoadedInEditor(DataLayers, bIsLoadedInEditor, bIsFromUserChange) end

---Changes the DataLayer's IsLoadedInEditor flag to the provided state
---                                                                                     If True, the Editor loading will consider this DataLayer to load or not an Actor part of this DataLayer.
---                                                                                     An Actor will not be loaded in the Editor if all its DataLayers are not LoadedInEditor.
---@param DataLayer UDataLayerInstance
---@param bIsLoadedInEditor boolean
---@param bIsFromUserChange boolean
---@return boolean
function UDataLayerEditorSubsystem:SetDataLayerIsLoadedInEditor(DataLayer, bIsLoadedInEditor, bIsFromUserChange) end

---Sets the initial editor visibility state of the DataLayers
---@param DataLayer UDataLayerInstance
---@param bIsInitiallyVisible boolean
function UDataLayerEditorSubsystem:SetDataLayerIsInitiallyVisible(DataLayer, bIsInitiallyVisible) end

---@param DataLayer UDEPRECATED_DataLayer
---@param bIsLoadedInEditor boolean
---@param bIsFromUserChange boolean
---@return boolean
function UDataLayerEditorSubsystem:SetDataLayerIsDynamicallyLoadedInEditor(DataLayer, bIsLoadedInEditor, bIsFromUserChange) end

---Sets the initial runtime state of the DataLayers
---@param DataLayer UDataLayerInstance
---@param InitialRuntimeState EDataLayerRuntimeState
function UDataLayerEditorSubsystem:SetDataLayerInitialRuntimeState(DataLayer, InitialRuntimeState) end

---@param InExternalDataLayerAsset UExternalDataLayerAsset
---@return boolean
function UDataLayerEditorSubsystem:SetActorEditorContextCurrentExternalDataLayer(InExternalDataLayerAsset) end

---Selects/de-selects actors belonging to the DataLayers.
---@param DataLayers TArray_UDataLayerInstance_
---@param bSelect boolean
---@param bNotify boolean
---@param bSelectEvenIfHidden boolean @[opt] 
---@return boolean
function UDataLayerEditorSubsystem:SelectActorsInDataLayers(DataLayers, bSelect, bNotify, bSelectEvenIfHidden) end

---Selects/de-selects actors belonging to the DataLayer.
---@param DataLayer UDataLayerInstance
---@param bSelect boolean
---@param bNotify boolean
---@param bSelectEvenIfHidden boolean @[opt] 
---@return boolean
function UDataLayerEditorSubsystem:SelectActorsInDataLayer(DataLayer, bSelect, bNotify, bSelectEvenIfHidden) end

---@param DataLayer UDataLayerInstance
---@param NewDataLayerLabel string
---@return boolean
function UDataLayerEditorSubsystem:RenameDataLayer(DataLayer, NewDataLayerLabel) end

---Removes selected actors from the DataLayers.
---@param DataLayers TArray_UDataLayerInstance_
---@return boolean
function UDataLayerEditorSubsystem:RemoveSelectedActorsFromDataLayers(DataLayers) end

---Removes the selected actors from the DataLayer.
---@param DataLayer UDataLayerInstance
---@return boolean
function UDataLayerEditorSubsystem:RemoveSelectedActorsFromDataLayer(DataLayer) end

---@param InDataLayerInstance UDataLayerInstance
function UDataLayerEditorSubsystem:RemoveFromActorEditorContext(InDataLayerInstance) end

---Remove the actors from the DataLayers
---@param Actors TArray_AActor_
---@param DataLayers TArray_UDataLayerInstance_
---@return boolean
function UDataLayerEditorSubsystem:RemoveActorsFromDataLayers(Actors, DataLayers) end

---Removes the actors from the specified DataLayer.
---@param Actors TArray_AActor_
---@param DataLayer UDataLayerInstance
---@return boolean
function UDataLayerEditorSubsystem:RemoveActorsFromDataLayer(Actors, DataLayer) end

---Removes an actor from all DataLayers.
---@param Actors TArray_AActor_
---@return boolean
function UDataLayerEditorSubsystem:RemoveActorsFromAllDataLayers(Actors) end

---Removes the provided actor from the DataLayers.
---@param Actor AActor
---@param DataLayers TArray_UDataLayerInstance_
---@return boolean
function UDataLayerEditorSubsystem:RemoveActorFromDataLayers(Actor, DataLayers) end

---Removes an actor from the specified DataLayer.
---@param Actor AActor
---@param DataLayerToRemove UDataLayerInstance
---@return boolean
function UDataLayerEditorSubsystem:RemoveActorFromDataLayer(Actor, DataLayerToRemove) end

---Removes an actor from all DataLayers.
---@param Actor AActor
---@return boolean
function UDataLayerEditorSubsystem:RemoveActorFromAllDataLayers(Actor) end

---Set the visibility of all DataLayers to true
function UDataLayerEditorSubsystem:MakeAllDataLayersVisible() end

---Checks to see if the specified actor is in an appropriate state to interact with DataLayers
---@param Actor AActor
---@param DataLayerInstances TArray_UDataLayerInstance_
---@return boolean
function UDataLayerEditorSubsystem:IsActorValidForDataLayerInstances(Actor, DataLayerInstances) end

---@param Actor AActor
---@return boolean
function UDataLayerEditorSubsystem:IsActorValidForDataLayer(Actor) end

---Gets the UDataLayerInstances associated to the each DataLayerAssets
---@param DataLayerAssets TArray_UDataLayerAsset_
---@return TArray_UDataLayerInstance_
function UDataLayerEditorSubsystem:GetDataLayerInstances(DataLayerAssets) end

---Gets the UDataLayerInstance associated to the DataLayerAsset
---@param DataLayerAsset UDataLayerAsset
---@return UDataLayerInstance
function UDataLayerEditorSubsystem:GetDataLayerInstance(DataLayerAsset) end

---@param DataLayerLabel string
---@return UDataLayerInstance
function UDataLayerEditorSubsystem:GetDataLayerFromLabel(DataLayerLabel) end

---@param ActorDataLayer FActorDataLayer
---@return UDataLayerInstance
function UDataLayerEditorSubsystem:GetDataLayer(ActorDataLayer) end

---Returns all Data Layers
---@return TArray_UDataLayerInstance_
function UDataLayerEditorSubsystem:GetAllDataLayers() end

---Gets all the actors associated with ANY of the specified DataLayers. Analog to AppendActorsFromDataLayers but it returns rather than appends the actors.
---@param DataLayers TArray_UDataLayerInstance_
---@return TArray_AActor_
function UDataLayerEditorSubsystem:GetActorsFromDataLayers(DataLayers) end

---Gets all the actors associated with the specified DataLayer. Analog to AppendActorsFromDataLayer but it returns rather than appends the actors.
---@param DataLayer UDataLayerInstance
---@return TArray_AActor_
function UDataLayerEditorSubsystem:GetActorsFromDataLayer(DataLayer) end

---@return UExternalDataLayerAsset
function UDataLayerEditorSubsystem:GetActorEditorContextCurrentExternalDataLayer() end

---Deletes all of the provided DataLayers
---@param DataLayersToDelete TArray_UDataLayerInstance_
function UDataLayerEditorSubsystem:DeleteDataLayers(DataLayersToDelete) end

---Deletes the provided DataLayer
---@param DataLayerToDelete UDataLayerInstance
function UDataLayerEditorSubsystem:DeleteDataLayer(DataLayerToDelete) end

---Creates a UDataLayerInstance Object
---@param Parameters FDataLayerCreationParameters
---@return UDataLayerInstance
function UDataLayerEditorSubsystem:CreateDataLayerInstance(Parameters) end

---@param ParentDataLayer UDataLayerInstance @[opt] 
---@return UDataLayerInstance
function UDataLayerEditorSubsystem:CreateDataLayer(ParentDataLayer) end

---Appends all the actors associated with ANY of the specified DataLayers.
---@param DataLayers TArray_UDataLayerInstance_
---@param InOutActors TArray_AActor_ @[out] 
function UDataLayerEditorSubsystem:AppendActorsFromDataLayers(DataLayers, InOutActors) end

---Appends all the actors associated with the specified DataLayer.
---@param DataLayer UDataLayerInstance
---@param InOutActors TArray_AActor_ @[out] 
function UDataLayerEditorSubsystem:AppendActorsFromDataLayer(DataLayer, InOutActors) end

---@param InDataLayerInstance UDataLayerInstance
function UDataLayerEditorSubsystem:AddToActorEditorContext(InDataLayerInstance) end

---Adds selected actors to the DataLayers.
---@param DataLayers TArray_UDataLayerInstance_
---@return boolean
function UDataLayerEditorSubsystem:AddSelectedActorsToDataLayers(DataLayers) end

---Adds selected actors to the DataLayer.
---@param DataLayer UDataLayerInstance
---@return boolean
function UDataLayerEditorSubsystem:AddSelectedActorsToDataLayer(DataLayer) end

---Adds the provided actor to the DataLayers.
---@param Actor AActor
---@param DataLayers TArray_UDataLayerInstance_
---@return boolean
function UDataLayerEditorSubsystem:AddActorToDataLayers(Actor, DataLayers) end

---Adds the actor to the DataLayer.
---@param Actor AActor
---@param DataLayer UDataLayerInstance
---@return boolean
function UDataLayerEditorSubsystem:AddActorToDataLayer(Actor, DataLayer) end

---Add the actors to the DataLayers
---@param Actors TArray_AActor_
---@param DataLayers TArray_UDataLayerInstance_
---@return boolean
function UDataLayerEditorSubsystem:AddActorsToDataLayers(Actors, DataLayers) end

---Add the actors to the DataLayer
---@param Actors TArray_AActor_
---@param DataLayer UDataLayerInstance
---@return boolean
function UDataLayerEditorSubsystem:AddActorsToDataLayer(Actors, DataLayer) end

