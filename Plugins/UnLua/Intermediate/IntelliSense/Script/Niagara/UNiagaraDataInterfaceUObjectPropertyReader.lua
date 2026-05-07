---Data interface to read properties from UObjects.
---Rather than having BP tick functions that push data into Niagara this data interface will instead pull them.
---@class UNiagaraDataInterfaceUObjectPropertyReader : UNiagaraDataInterface
---@field public SourceMode ENDIObjectPropertyReaderSourceMode @Determines how we should select the source object we read from.
---@field public UObjectParameterBinding FNiagaraUserParameterBinding @User parameter Object binding to read properties from.
---@field public PropertyRemap TArray<FNiagaraUObjectPropertyReaderRemap>
---@field public SourceActor TSoftObjectPtr<AActor> @Optional source actor to use, if the user parameter binding is valid this will be ignored.
---@field public SourceActorComponentClass TSubclassOf<UObject> @When an actor is bound as the object we will also search for a component of this type to bind properties to. For example, setting this to a UPointLightComponent when binding properties we will first look at the actor then look for a component of UPointLightComponent and look at properties on that also. If no class is specified here we look at the RootComponent instead.
local UNiagaraDataInterfaceUObjectPropertyReader = {}

---Remaps a property reader, where the
---@param NiagaraComponent UNiagaraComponent
---@param UserParameterName string
---@param GraphName string
---@param RemapName string
function UNiagaraDataInterfaceUObjectPropertyReader.SetUObjectReaderPropertyRemap(NiagaraComponent, UserParameterName, GraphName, RemapName) end

