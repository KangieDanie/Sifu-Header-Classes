#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "MovieScenePropertySystem.generated.h"

class UMovieScenePropertyInstantiatorSystem;

UCLASS(Abstract)
class MOVIESCENETRACKS_API UMovieScenePropertySystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UMovieScenePropertyInstantiatorSystem* InstantiatorSystem;
    
public:
    UMovieScenePropertySystem();
};

