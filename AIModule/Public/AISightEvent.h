#pragma once
#include "CoreMinimal.h"
#include "AISightEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct AIMODULE_API FAISightEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* SeenActor;
    
    UPROPERTY()
    AActor* Observer;
    
    FAISightEvent();
};

