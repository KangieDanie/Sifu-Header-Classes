#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneVectorTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 NumChannelsUsed;
    
public:
    UMovieSceneVectorTrack();
    
    // Fix for true pure virtual functions not being implemented
};

