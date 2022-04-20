#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneIntegerChannel -FallbackName=MovieSceneIntegerChannel
#include "MovieSceneIntegerSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneIntegerSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneIntegerChannel IntegerCurve;
    
public:
    UMovieSceneIntegerSection();
};

