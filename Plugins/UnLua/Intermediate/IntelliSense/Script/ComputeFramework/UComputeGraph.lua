---Class representing a Compute Graph.
---This holds the basic topology of the graph and is responsible for linking Kernels with Data Interfaces and compiling the resulting shader code.
---Multiple Compute Graph asset types can derive from this to specialize the graph creation process.
---For example the Animation Deformer system provides a UI for creating UComputeGraph assets.
---@class UComputeGraph : UObject
---@field protected KernelInvocations TArray<UComputeKernel> @Kernels in the graph.
---@field protected DataInterfaces TArray<UComputeDataInterface> @Data interfaces in the graph.
---@field protected GraphEdges TArray<FComputeGraphEdge> @Edges in the graph between kernels and data interfaces.
---@field protected Bindings TArray<TSubclassOf<UObject>> @Registered binding object class types.
---@field protected DataInterfaceToBinding TArray<integer> @Mapping of DataInterfaces array index to Bindings index.
local UComputeGraph = {}

