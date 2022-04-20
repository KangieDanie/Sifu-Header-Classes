#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieRenderPipelineCore -ObjectName=MoviePipelineSetting -FallbackName=MoviePipelineSetting
#include "MoviePipelineConsoleVariableSetting.generated.h"

UCLASS()
class MOVIERENDERPIPELINESETTINGS_API UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, float> ConsoleVariables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> StartConsoleCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> EndConsoleCommands;
    
    UMoviePipelineConsoleVariableSetting();
};

