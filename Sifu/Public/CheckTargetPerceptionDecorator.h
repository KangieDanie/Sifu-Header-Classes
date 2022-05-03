#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCBTDecorator -FallbackName=SCBTDecorator
#include "CheckTargetPerceptionDecorator.generated.h"

class UAISense;

UCLASS()
class UCheckTargetPerceptionDecorator : public USCBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector m_TargetKey;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UAISense>> m_Senses;
    
    UCheckTargetPerceptionDecorator();
};

