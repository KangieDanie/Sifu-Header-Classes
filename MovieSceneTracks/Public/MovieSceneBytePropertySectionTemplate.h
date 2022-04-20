#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePropertySectionTemplate -FallbackName=MovieScenePropertySectionTemplate
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneByteChannel -FallbackName=MovieSceneByteChannel
#include "MovieSceneBytePropertySectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneBytePropertySectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FMovieSceneByteChannel ByteCurve;
    
public:
    MOVIESCENETRACKS_API FMovieSceneBytePropertySectionTemplate();
};

