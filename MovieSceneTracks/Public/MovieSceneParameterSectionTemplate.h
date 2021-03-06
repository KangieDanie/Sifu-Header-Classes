#pragma once
#include "CoreMinimal.h"
#include "ColorParameterNameAndCurves.h"
#include "VectorParameterNameAndCurves.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "ScalarParameterNameAndCurve.h"
#include "BoolParameterNameAndCurve.h"
#include "Vector2DParameterNameAndCurves.h"
#include "TransformParameterNameAndCurves.h"
#include "MovieSceneParameterSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FScalarParameterNameAndCurve> Scalars;
    
    UPROPERTY()
    TArray<FBoolParameterNameAndCurve> Bools;
    
    UPROPERTY()
    TArray<FVector2DParameterNameAndCurves> Vector2Ds;
    
    UPROPERTY()
    TArray<FVectorParameterNameAndCurves> Vectors;
    
    UPROPERTY()
    TArray<FColorParameterNameAndCurves> Colors;
    
    UPROPERTY()
    TArray<FTransformParameterNameAndCurves> Transforms;
    
public:
    MOVIESCENETRACKS_API FMovieSceneParameterSectionTemplate();
};

