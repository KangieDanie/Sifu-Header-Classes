#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=MovieSceneAkAudioEventSection -FallbackName=MovieSceneAkAudioEventSection
#include "MovieSceneSubtitlesSection.generated.h"

UCLASS()
class SIFU_API UMovieSceneSubtitlesSection : public UMovieSceneAkAudioEventSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FText Subtitle;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsMCSpeaking;
    
public:
    UMovieSceneSubtitlesSection();
};

