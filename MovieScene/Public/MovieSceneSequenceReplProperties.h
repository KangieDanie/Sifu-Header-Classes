#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
#include "EMovieScenePlayerStatus.h"
#include "MovieSceneSequenceReplProperties.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequenceReplProperties {
    GENERATED_BODY()
public:
    UPROPERTY()
    FFrameTime LastKnownPosition;
    
    UPROPERTY()
    TEnumAsByte<EMovieScenePlayerStatus::Type> LastKnownStatus;
    
    UPROPERTY()
    int32 LastKnownNumLoops;
    
    MOVIESCENE_API FMovieSceneSequenceReplProperties();
};

