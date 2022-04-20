#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=MovieSceneAkAudioEventTemplate -FallbackName=MovieSceneAkAudioEventTemplate
#include "MovieSceneSubtitlesTemplate.generated.h"

class UMovieSceneSubtitlesSection;

USTRUCT()
struct SIFU_API FMovieSceneSubtitlesTemplate : public FMovieSceneAkAudioEventTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UMovieSceneSubtitlesSection* SubtitleSection;
    
    FMovieSceneSubtitlesTemplate();
};

