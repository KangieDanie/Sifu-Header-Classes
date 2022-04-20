#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneAkAudioRTPCTemplate.generated.h"

class UMovieSceneAkAudioRTPCSection;

USTRUCT()
struct AKAUDIO_API FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UMovieSceneAkAudioRTPCSection* Section;
    
    FMovieSceneAkAudioRTPCTemplate();
};

