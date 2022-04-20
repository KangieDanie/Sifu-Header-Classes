#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneIntegerChannel -FallbackName=MovieSceneIntegerChannel
#include "IntegerParameterNameAndCurve.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FIntegerParameterNameAndCurve {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ParameterName;
    
    UPROPERTY()
    FMovieSceneIntegerChannel ParameterCurve;
    
    FIntegerParameterNameAndCurve();
};

