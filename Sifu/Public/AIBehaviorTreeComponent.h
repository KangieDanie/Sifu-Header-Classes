#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCBehaviorTreeComponent -FallbackName=SCBehaviorTreeComponent
#include "AIBehaviorTreeComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAIBehaviorTreeComponent : public USCBehaviorTreeComponent {
    GENERATED_BODY()
public:
    UAIBehaviorTreeComponent();
};

