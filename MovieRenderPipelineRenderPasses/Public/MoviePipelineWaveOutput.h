#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieRenderPipelineCore -ObjectName=MoviePipelineOutputBase -FallbackName=MoviePipelineOutputBase
#include "MoviePipelineWaveOutput.generated.h"

UCLASS()
class MOVIERENDERPIPELINERENDERPASSES_API UMoviePipelineWaveOutput : public UMoviePipelineOutputBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString FileNameFormat;
    
    UMoviePipelineWaveOutput();
};

