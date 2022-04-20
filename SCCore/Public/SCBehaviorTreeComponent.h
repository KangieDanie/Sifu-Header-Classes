#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BehaviorTreeComponent -FallbackName=BehaviorTreeComponent
#include "SCPoolableActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SCBehaviorTreeComponent.generated.h"

class UBehaviorTree;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API USCBehaviorTreeComponent : public UBehaviorTreeComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FGameplayTag, UBehaviorTree*> m_DynamicSubtrees;
    
public:
    USCBehaviorTreeComponent();
    
    // Fix for true pure virtual functions not being implemented
};

