#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "ESpeedState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCDialogManagerPlugin -ObjectName=EOperationType -FallbackName=EOperationType
#include "SpeedCondition.generated.h"

UCLASS()
class SIFU_API USpeedCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESpeedState m_eSpeedState;
    
    UPROPERTY(EditAnywhere)
    bool m_bAcceptMoveTransitions;
    
    UPROPERTY(EditAnywhere)
    EOperationType m_eOperation;
    
    USpeedCondition();
};

