// Copyright Epic Games, Inc. All Rights Reserved.
#define LFRAME_BUILD_UE5 
using UnrealBuildTool;

public class LQuickFrame : ModuleRules
{
	public LQuickFrame(ReadOnlyTargetRules Target) : base(Target)
	{
		//bUsePrecompiled = true;
        //下面这一行没有必要加，如果加了上面一行打包出错的话，就加上下面一行
        //PrecompileForTargets = PrecompileTargetsType.None;
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		PublicIncludePaths.AddRange(new string[] {});
		PrivateIncludePaths.AddRange(new string[] {});
        DynamicallyLoadedModuleNames.AddRange(new string[]{
        });
        PublicDependencyModuleNames.AddRange(new string[]{
            "UMG",
            "Core",
            "Slate",
            "Engine",
            "AIModule",
            "SlateCore",
            "CoreUObject",
            "DeveloperSettings",
        });
		PrivateDependencyModuleNames.AddRange(new string[]{
            "RHI",
            "HTTP",
            "Foliage",
            "InputCore",
            "CommonGame",
            "RenderCore",
            "MoviePlayer",
            "DynamicMesh",
            "MeshConversion",
            "MeshDescription",
            "NavigationSystem",
            "StaticMeshDescription","AsyncLoadingScreen"
		});
#if LFRAME_BUILD_UE5
        IWYUSupport = IWYUSupport.Full;
        PublicDefinitions.Add("LFRAME_BUILD_UE5=1");
        PublicDependencyModuleNames.Add("GeometryCore");
#else
        bEnforceIWYU = true;
        PublicDependencyModuleNames.Add("GeometricObjects");
#endif
	}
}
