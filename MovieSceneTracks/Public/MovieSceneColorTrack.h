#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneColorTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool bIsSlateColor;
    
public:
    UMovieSceneColorTrack();
    
    // Fix for true pure virtual functions not being implemented
};

