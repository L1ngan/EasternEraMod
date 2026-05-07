---Information for retrieving an image from the web.
---The width and height can optionally be set to non-zero indicating that the size should overwrite the size from the source image.
---@class FEditorDataStorageWebImageColumn : FEditorDataStorageColumn
---@field public UrlString string @URL to the image in string form. Can be used with for instance with WebImage(Cache) to create a local image.
---@field public Width integer @If set, the target width for the image. A value of zero indicates that the width from the source image should be used.
---@field public Height integer @If set, the target height for the image. A value of zero indicates that the height from the source image should be used.
local FEditorDataStorageWebImageColumn = {}
