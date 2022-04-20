#pragma once
#include "CoreMinimal.h"
#include "MovieSceneParticleChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneParticleSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneParticleSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneParticleChannel ParticleKeys;
    
    UMovieSceneParticleSection();
};

