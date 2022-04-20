#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrack -FallbackName=MovieSceneTrack
#include "MovieSceneAkTrack.generated.h"

class UMovieSceneSection;

UCLASS(Abstract, MinimalAPI)
class UMovieSceneAkTrack : public UMovieSceneTrack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    TArray<UMovieSceneSection*> Sections;
    
    UPROPERTY()
    uint8 bIsAMasterTrack: 1;
    
public:
    UMovieSceneAkTrack();
};

