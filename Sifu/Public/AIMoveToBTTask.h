#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_MoveTo -FallbackName=BTTask_MoveTo
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "AIMoveToBTTask.generated.h"

UCLASS()
class SIFU_API UAIMoveToBTTask : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector AcceptableRadiusKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector FilterClassKey;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanPredictStopTransition;
    
    UPROPERTY(EditAnywhere)
    bool m_bOverridePacingGoalActor;
    
public:
    UAIMoveToBTTask();
};

