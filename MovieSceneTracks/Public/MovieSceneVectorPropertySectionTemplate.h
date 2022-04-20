#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePropertySectionTemplate -FallbackName=MovieScenePropertySectionTemplate
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneBlendType -FallbackName=EMovieSceneBlendType
#include "MovieSceneVectorPropertySectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneVectorPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FMovieSceneFloatChannel ComponentCurves[4];
    
    UPROPERTY()
    int32 NumChannelsUsed;
    
    UPROPERTY()
    EMovieSceneBlendType BlendType;
    
public:
    MOVIESCENETRACKS_API FMovieSceneVectorPropertySectionTemplate();
};

