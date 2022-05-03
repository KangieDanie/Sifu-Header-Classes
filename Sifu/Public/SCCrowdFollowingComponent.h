#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=CrowdFollowingComponent -FallbackName=CrowdFollowingComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCPoolableActorComponent -FallbackName=SCPoolableActorComponent
#include "EGlobalBehaviors.h"
#include "SCCrowdFollowingComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API USCCrowdFollowingComponent : public UCrowdFollowingComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    USCCrowdFollowingComponent();
private:
    UFUNCTION()
    void OnGlobalBehaviorChanged(EGlobalBehaviors _eNewBehavior, const bool _bFromDialog);
    
    
    // Fix for true pure virtual functions not being implemented
};

