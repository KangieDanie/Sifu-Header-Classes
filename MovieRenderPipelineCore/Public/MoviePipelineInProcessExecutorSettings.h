#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "MoviePipelineInProcessExecutorSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig)
class MOVIERENDERPIPELINECORE_API UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bCloseEditor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString AdditionalCommandLineArguments;
    
    UPROPERTY(BlueprintReadOnly, Config, Transient, VisibleAnywhere)
    FString InheritedCommandLineArguments;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    int32 InitialDelayFrameCount;
    
    UMoviePipelineInProcessExecutorSettings();
};

