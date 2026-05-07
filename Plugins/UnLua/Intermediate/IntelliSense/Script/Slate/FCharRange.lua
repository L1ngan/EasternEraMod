---Represents a range of characters, specified by the Unicode code point of the first and last characters in the range, both included.
--- If you need a single-character range, simply use the same character for both the first and last characters.
---@class FCharRange
---@field public First integer @Unicode code point of the first character in the range (inclusive). Only characters within the Basic Multilingual Plane are supported.  Note: The code point must be entered in decimal, not hexadecimal.
---@field public Last integer @Unicode code point of the last character in the range (inclusive). Only characters within the Basic Multilingual Plane are supported.  Note: The code point must be entered in decimal, not hexadecimal.
local FCharRange = {}
