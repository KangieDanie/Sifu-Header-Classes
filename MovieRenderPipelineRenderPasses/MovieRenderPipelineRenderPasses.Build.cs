using UnrealBuildTool;

public class MovieRenderPipelineRenderPasses : ModuleRules {
    public MovieRenderPipelineRenderPasses(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ActorLayerUtilities",
            "AudioMixer",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MediaUtils",
            "MovieRenderPipelineCore",
            "MovieScene",
            "MovieSceneTracks",
            "OpenColorIO",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
