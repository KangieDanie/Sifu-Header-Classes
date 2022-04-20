#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_RunBehaviorDynamic -FallbackName=BTTask_RunBehaviorDynamic
#include "SCAIActionRunBehaviorDynamic.generated.h"

UCLASS()
class SCCORE_API USCAIActionRunBehaviorDynamic : public UBTTask_RunBehaviorDynamic {
    GENERATED_BODY()
public:
    USCAIActionRunBehaviorDynamic();
};

