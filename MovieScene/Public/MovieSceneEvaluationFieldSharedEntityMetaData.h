#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneEvaluationFieldSharedEntityMetaData.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationFieldSharedEntityMetaData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid ObjectBindingID;
    
    MOVIESCENE_API FMovieSceneEvaluationFieldSharedEntityMetaData();
};

