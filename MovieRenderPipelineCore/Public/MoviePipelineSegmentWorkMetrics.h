#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineSegmentWorkMetrics.generated.h"

USTRUCT(BlueprintType)
struct FMoviePipelineSegmentWorkMetrics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString SegmentName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 OutputFrameIndex;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 TotalOutputFrameCount;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 OutputSubSampleIndex;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 TotalSubSampleCount;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 EngineWarmUpFrameIndex;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 TotalEngineWarmUpFrameCount;
    
    MOVIERENDERPIPELINECORE_API FMoviePipelineSegmentWorkMetrics();
};

