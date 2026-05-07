---A simple actor class that can be manually ticked to test for correctness and performance
---@class AEngineTestTickActor : AActor
---@field public TickCount integer @Number of times this has ticked since reset
---@field public TickOrder integer @Indicates when this was ticked in a frame, with 1 being first
---@field public bShouldIncrementTickCount boolean @If it should actually increase tick count
---@field public bShouldDoMath boolean @If it should perform other busy work
---@field public MathCounter number @Used for bShouldDoMath
---@field public MathIncrement number @Used for bShouldDoMath
---@field public MathLimit number @Used for bShouldDoMath
---@field private SpriteComponent UBillboardComponent
local AEngineTestTickActor = {}

