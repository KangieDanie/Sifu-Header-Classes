#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneBlendType -FallbackName=EMovieSceneBlendType
#include "MovieSceneTransformMask.h"
#include "MovieScene3DTransformTemplateData.generated.h"

USTRUCT()
struct FMovieScene3DTransformTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneFloatChannel TranslationCurve[3];
    
    UPROPERTY()
    FMovieSceneFloatChannel RotationCurve[3];
    
    UPROPERTY()
    FMovieSceneFloatChannel ScaleCurve[3];
    
    UPROPERTY()
    FMovieSceneFloatChannel ManualWeight;
    
    UPROPERTY()
    EMovieSceneBlendType BlendType;
    
    UPROPERTY()
    FMovieSceneTransformMask Mask;
    
    UPROPERTY()
    bool bUseQuaternionInterpolation;
    
    MOVIESCENETRACKS_API FMovieScene3DTransformTemplateData();
};

