#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "MovieSceneMarginSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneMarginSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneFloatChannel TopCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel LeftCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel RightCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel BottomCurve;
    
    UMovieSceneMarginSection();
};

