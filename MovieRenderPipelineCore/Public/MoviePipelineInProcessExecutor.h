#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineLinearExecutorBase.h"
#include "MoviePipelineInProcessExecutor.generated.h"

UCLASS()
class MOVIERENDERPIPELINECORE_API UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool bUseCurrentLevel;
    
    UMoviePipelineInProcessExecutor();
};

