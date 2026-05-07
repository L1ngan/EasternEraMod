---Helper struct for setting string console ini values.
---@class FIniStringValue
---@field public Section string @From .ini. Ex: /Script/Engine.RendererSettings
---@field public Key string @From .ini. Ex: r.GPUSkin.Support16BitBoneIndex
---@field public Value string @From .ini. Ex: True
---@field public Filename string @From .ini, relative to {PROJECT}. Ex: /Config/DefaultEngine.ini
---@field public Branch string @Ini branch that Filename belongs to. Ex: if Filename is "/Config/DefaultEngine.ini", Branch should be "Engine". If this isn't set, the system will attempt to detect it based on Filename.
local FIniStringValue = {}
