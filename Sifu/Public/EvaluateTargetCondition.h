#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EvaluateTargetCondition.generated.h"

UCLASS(Abstract, EditInlineNew)
class SIFU_API UEvaluateTargetCondition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bInverseCondition;
    
    UEvaluateTargetCondition();
};

