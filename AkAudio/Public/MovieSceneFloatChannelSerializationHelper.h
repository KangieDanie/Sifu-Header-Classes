#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERichCurveExtrapolation -FallbackName=ERichCurveExtrapolation
#include "MovieSceneFloatValueSerializationHelper.h"
#include "MovieSceneFloatChannelSerializationHelper.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneFloatChannelSerializationHelper {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;
    
    UPROPERTY()
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;
    
    UPROPERTY()
    TArray<int32> Times;
    
    UPROPERTY()
    TArray<FMovieSceneFloatValueSerializationHelper> Values;
    
    UPROPERTY()
    float DefaultValue;
    
    UPROPERTY()
    bool bHasDefaultValue;
    
    AKAUDIO_API FMovieSceneFloatChannelSerializationHelper();
};

