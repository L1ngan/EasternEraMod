---APaperCharacter behaves like ACharacter, but uses a UPaperFlipbookComponent instead of a USkeletalMeshComponent as a visual representation
---Note: The variable named Mesh will not be set up on this actor!
---@class APaperCharacter : ACharacter
---@field private Sprite UPaperFlipbookComponent @The main skeletal mesh associated with this Character (optional sub-object).
local APaperCharacter = {}

