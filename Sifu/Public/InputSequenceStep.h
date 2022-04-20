#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "InputSequenceStep.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct FInputSequenceStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGenericInputData* m_Input;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_DelayBeforeNextAction;
    
    SIFU_API FInputSequenceStep();
};

