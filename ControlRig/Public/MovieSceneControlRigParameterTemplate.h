#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneParameterSectionTemplate -FallbackName=MovieSceneParameterSectionTemplate
#include "EnumParameterNameAndCurve.h"
#include "IntegerParameterNameAndCurve.h"
#include "MovieSceneControlRigParameterTemplate.generated.h"

USTRUCT()
struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FEnumParameterNameAndCurve> Enums;
    
    UPROPERTY()
    TArray<FIntegerParameterNameAndCurve> Integers;
    
public:
    CONTROLRIG_API FMovieSceneControlRigParameterTemplate();
};

