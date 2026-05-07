---Implements the settings for imported Paper2D assets, such as sprite sheet textures.
---@class UCryptoKeysSettings : UObject
---@field public EncryptionKey string @The default encryption key used to protect pak files
---@field public SecondaryEncryptionKeys TArray<FCryptoEncryptionKey> @Secondary encryption keys that can be selected for use on different assets. Games are required to make these keys available to the pak platform file at runtime in order to access the data they protect.
---@field public bEncryptPakIniFiles boolean @Encrypts all ini files in the pak. Gives security to the most common sources of mineable information, with minimal runtime IO cost
---@field public bEncryptPakIndex boolean @Encrypt the pak index, making it impossible to use unrealpak to manipulate the pak file without the encryption key
---@field public bEncryptUAssetFiles boolean @Encrypts the uasset file in cooked data. Less runtime IO cost, and protection to package header information, including most string data, but still leaves the bulk of the data unencrypted.
---@field public bEncryptAllAssetFiles boolean @Encrypt all files in the pak file. Secure, but will cause some slowdown to runtime IO performance, and high entropy to packaged data which will be bad for patching
---@field public SigningPublicExponent string @The RSA key public exponent used for signing a pak file
---@field public SigningModulus string @The RSA key modulus used for signing a pak file
---@field public SigningPrivateExponent string @The RSA key private exponent used for signing a pak file
---@field public bEnablePakSigning boolean @Enable signing of pak files, to prevent tampering of the data
local UCryptoKeysSettings = {}

