#pragma once
#include "CoreMinimal.h"
#include "ControlRigSequenceObjectReference.h"
#include "ControlRigSequenceObjectReferences.generated.h"

USTRUCT(BlueprintType)
struct FControlRigSequenceObjectReferences {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FControlRigSequenceObjectReference> Array;
    
    CONTROLRIG_API FControlRigSequenceObjectReferences();
};

