#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineExecutorBase.h"
#include "MoviePipelineLinearExecutorBase.generated.h"

class UMoviePipeline;
class UMoviePipelineQueue;

UCLASS(Abstract)
class MOVIERENDERPIPELINECORE_API UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UMoviePipelineQueue* Queue;
    
    UPROPERTY(Transient)
    UMoviePipeline* ActiveMoviePipeline;
    
public:
    UMoviePipelineLinearExecutorBase();
};

