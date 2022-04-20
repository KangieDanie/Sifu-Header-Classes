using UnrealBuildTool;

public class MovieRenderPipelineSettings : ModuleRules {
    public MovieRenderPipelineSettings(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
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
