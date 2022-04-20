#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCDialogManagerPlugin -ObjectName=EOperationType -FallbackName=EOperationType
#include "HealthCondition.generated.h"

UCLASS()
class SIFU_API UHealthCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EOperationType m_eOperation;
    
    UPROPERTY(EditAnywhere)
    float m_fValue;
    
    UHealthCondition();
};

