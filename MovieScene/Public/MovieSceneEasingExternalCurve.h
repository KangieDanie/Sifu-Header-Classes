#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEasingFunction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneEasingExternalCurve.generated.h"

class UCurveFloat;

UCLASS()
class MOVIESCENE_API UMovieSceneEasingExternalCurve : public UObject, public IMovieSceneEasingFunction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCurveFloat* Curve;
    
    UMovieSceneEasingExternalCurve();
    
    // Fix for true pure virtual functions not being implemented
};

