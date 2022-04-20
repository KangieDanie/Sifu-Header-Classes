#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePropertySectionTemplate -FallbackName=MovieScenePropertySectionTemplate
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneByteChannel -FallbackName=MovieSceneByteChannel
#include "MovieSceneEnumPropertySectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneEnumPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FMovieSceneByteChannel EnumCurve;
    
public:
    MOVIESCENETRACKS_API FMovieSceneEnumPropertySectionTemplate();
};

