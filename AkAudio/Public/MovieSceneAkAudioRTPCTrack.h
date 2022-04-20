#pragma once
#include "CoreMinimal.h"
#include "MovieSceneAkTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneAkAudioRTPCTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneAkAudioRTPCTrack();
    
    // Fix for true pure virtual functions not being implemented
};

