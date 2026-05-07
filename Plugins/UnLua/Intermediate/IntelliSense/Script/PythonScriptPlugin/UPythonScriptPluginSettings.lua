---Configure the Python plug-in.
---@class UPythonScriptPluginSettings : UDeveloperSettings
---@field public StartupScripts TArray<string> @Array of Python scripts to run at start-up (run before the first Tick after the Engine has initialized).
---@field public AdditionalPaths TArray<FDirectoryPath> @Array of additional paths to add to the Python system paths.
---@field public bIsolateInterpreterEnvironment boolean @Should the embedded interpreter be run in isolation mode. In isolation, the standard PYTHON* environment variables (PYTHONPATH, PYTHONHOME, etc), the script's directory and the user's site-packages directory are ignored by the interpreter. This prevents incompabible software to crash the engine. Consider turning this option off if you tightly control your Python environment and you are sure everything is compatible. Note that the UE_PYTHONPATH environment variable is added to 'sys.path' whether the interpreter runs in insolation mode or not.
---@field public bDeveloperMode boolean @Should Developer Mode be enabled on the Python interpreter *for all users of the project* Note: Most of the time you want to enable bDeveloperMode in the Editor Preferences instead! (will also enable extra warnings (e.g., for deprecated code), and enable stub code generation for use with external IDEs).
---@field public bRunPipInstallOnStartup boolean @Should the pip install task be run on python engine initialization. NOTE: The project pip install directory: <ProjectDir>/Intermediate/PipInstall/Lib/site-packages       will still be added to site package path, to allow for pre-populated or deferred installs.       See <ProjectDir>/Intermediate/PipInstall/merged_requirements.in for listing of required packages.
---@field public bPipStrictHashCheck boolean @Require pip to use strict hash checking for all packages WARNING: Disabling this setting is a security risk, particularly when combined with IndexUrl override
---@field public bOfflineOnly boolean @Only run pip to generate merged requirements and/or validate requested packages are installed
---@field public OverrideIndexURL string @Override all index/extra-index URLs, this is useful for internal NAT installs (using e.g. devpi or similar index cache) WARNING: Strict hash checks should be enabled if an override index url is used
---@field public ExtraInstallArgs string @Additional arguments passed to main pip install call, useful to add e.g. --cert or other proxy options for restrictive firewalls      NOTE: Do not use this to add --index-url or --extra-index-url, instead use OverrideIndexURL setting or ExtraIndexUrls uplugin property, respectively
---@field public bRemoteExecution boolean @Should remote Python execution be enabled?
---@field public RemoteExecutionMulticastGroupEndpoint string @The multicast group endpoint (in the form of IP_ADDRESS:PORT_NUMBER) that the UDP multicast socket should join
---@field public RemoteExecutionMulticastBindAddress string @The adapter address that the UDP multicast socket should bind to, or 0.0.0.0 to bind to all adapters
---@field public RemoteExecutionSendBufferSizeBytes integer @Size of the send buffer for the remote endpoint connection
---@field public RemoteExecutionReceiveBufferSizeBytes integer @Size of the receive buffer for the remote endpoint connection
---@field public RemoteExecutionMulticastTtl integer @The TTL that the UDP multicast socket should use (0 is limited to the local host, 1 is limited to the local subnet)
local UPythonScriptPluginSettings = {}

