---Allows you to setup an image decorator that can be configured
---to map certain keys to certain images.  We recommend you subclass this
---as a blueprint to configure the instance.
---Understands the format <img id="NameOfBrushInTable"></>
---@class URichTextBlockImageDecorator : URichTextBlockDecorator
---@field protected ImageSet UDataTable
local URichTextBlockImageDecorator = {}

