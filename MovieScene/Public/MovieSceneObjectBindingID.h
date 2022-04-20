#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneObjectBindingSpace.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneObjectBindingID.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneObjectBindingID {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 SequenceID;
    
    UPROPERTY()
    EMovieSceneObjectBindingSpace Space;
    
    UPROPERTY(EditAnywhere)
    FGuid Guid;
    
public:
    MOVIESCENE_API FMovieSceneObjectBindingID();
};

