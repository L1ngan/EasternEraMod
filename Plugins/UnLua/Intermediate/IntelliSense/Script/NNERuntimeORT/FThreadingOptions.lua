---Threading options to configure glocal/local thread pools and exection mode
---@class FThreadingOptions
---@field public bUseGlobalThreadPool boolean @Use global threadpools that will be shared across sessions.
---@field public IntraOpNumThreads integer @Set thread count of intra-op thread pool, which is utilized by ONNX Runtime to parallelize computation inside each operator. Special values:    0 = Use default thread count    1 = The invoking thread will be used; no threads will be created in the thread pool.
---@field public InterOpNumThreads integer @Set thread count of the inter-op thread pool, which enables parallelism between operators and will only be created when session execution mode set to parallel. Special values:    0 = Use default thread count    1 = The invoking thread will be used; no threads will be created in the thread pool.
---@field public ExecutionMode integer @Controls whether multiple operators in the graph (across nodes) run sequentially or in parallel. Note: DirectML EP requires sequential execution and therefore ignores this setting.
local FThreadingOptions = {}
