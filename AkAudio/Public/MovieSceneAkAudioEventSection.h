#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneAkAudioEventSection.generated.h"

class UAkAudioEvent;

UCLASS(MinimalAPI)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* Event;
    
    UPROPERTY(EditAnywhere)
    bool RetriggerEvent;
    
    UPROPERTY(EditAnywhere)
    int32 ScrubTailLengthMs;
    
    UPROPERTY(EditAnywhere)
    bool StopAtSectionEnd;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FString EventName;
    
    UPROPERTY(VisibleAnywhere)
    float MaxSourceDuration;
    
    UPROPERTY()
    FString MaxDurationSourceID;
    
public:
    UMovieSceneAkAudioEventSection();
};

