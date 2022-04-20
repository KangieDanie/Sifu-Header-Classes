#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePropertySectionTemplate -FallbackName=MovieScenePropertySectionTemplate
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneBlendType -FallbackName=EMovieSceneBlendType
#include "MovieSceneMarginSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneMarginSectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneFloatChannel TopCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel LeftCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel RightCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel BottomCurve;
    
    UPROPERTY()
    EMovieSceneBlendType BlendType;
    
public:
    UMG_API FMovieSceneMarginSectionTemplate();
};

