#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceID.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneEvaluationOperand.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationOperand {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid ObjectBindingID;
    
    UPROPERTY()
    FMovieSceneSequenceID SequenceID;
    
    MOVIESCENE_API FMovieSceneEvaluationOperand();
};

