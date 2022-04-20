#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCBTTaskNode -FallbackName=SCBTTaskNode
#include "EGlobalBehaviors.h"
#include "ForceGlobalBehaviorBTTask.generated.h"

UCLASS()
class SIFU_API UForceGlobalBehaviorBTTask : public USCBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EGlobalBehaviors m_Behavior;
    
public:
    UForceGlobalBehaviorBTTask();
};

