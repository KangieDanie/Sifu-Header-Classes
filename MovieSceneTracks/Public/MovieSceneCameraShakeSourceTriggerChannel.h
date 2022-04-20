#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCameraShakeSourceTrigger.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneChannel -FallbackName=MovieSceneChannel
#include "MovieSceneCameraShakeSourceTriggerChannel.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENETRACKS_API FMovieSceneCameraShakeSourceTriggerChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FFrameNumber> KeyTimes;
    
    UPROPERTY()
    TArray<FMovieSceneCameraShakeSourceTrigger> KeyValues;
    
public:
    FMovieSceneCameraShakeSourceTriggerChannel();
};

