#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineSetting.h"
#include "EMoviePipelineShutterTiming.h"
#include "MoviePipelineCameraSetting.generated.h"

UCLASS()
class MOVIERENDERPIPELINECORE_API UMoviePipelineCameraSetting : public UMoviePipelineSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMoviePipelineShutterTiming ShutterTiming;
    
    UMoviePipelineCameraSetting();
};

