#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventPtrs.generated.h"

class UFunction;

USTRUCT(BlueprintType)
struct FMovieSceneEventPtrs {
    GENERATED_BODY()
public:
    UPROPERTY()
    UFunction* Function;
    
    UPROPERTY()
    TFieldPath<FProperty> BoundObjectProperty;
    
    MOVIESCENETRACKS_API FMovieSceneEventPtrs();
};

