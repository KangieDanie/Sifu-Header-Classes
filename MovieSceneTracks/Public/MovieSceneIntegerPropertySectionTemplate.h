#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneBlendType -FallbackName=EMovieSceneBlendType
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePropertySectionTemplate -FallbackName=MovieScenePropertySectionTemplate
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneIntegerChannel -FallbackName=MovieSceneIntegerChannel
#include "MovieSceneIntegerPropertySectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneIntegerPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FMovieSceneIntegerChannel IntegerCurve;
    
    UPROPERTY()
    EMovieSceneBlendType BlendType;
    
public:
    MOVIESCENETRACKS_API FMovieSceneIntegerPropertySectionTemplate();
};

