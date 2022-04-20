#pragma once
#include "CoreMinimal.h"
#include "AIComboCondition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "ComboAIConditionOnState.generated.h"

UCLASS(Abstract, EditInlineNew)
class SIFU_API UComboAIConditionOnState : public UAIComboCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FFloatRange m_RandomDelay;
    
public:
    UComboAIConditionOnState();
};

