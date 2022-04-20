#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_BlackboardBase -FallbackName=BTTask_BlackboardBase
#include "BTTask_SVONMoveTo.generated.h"

UCLASS()
class UESVON_API UBTTask_SVONMoveTo : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float AcceptableRadius;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float ObservedBlackboardValueTolerance;
    
    UPROPERTY()
    uint8 bObserveBlackboardValue: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bTrackMovingGoal: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bReachTestIncludesAgentRadius: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bReachTestIncludesGoalRadius: 1;
    
    UPROPERTY(EditAnywhere)
    bool bUseAsyncPathfinding;
    
    UBTTask_SVONMoveTo();
};

