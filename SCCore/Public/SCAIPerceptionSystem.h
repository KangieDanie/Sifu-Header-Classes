#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIPerceptionSystem -FallbackName=AIPerceptionSystem
#include "SCAIPerceptionSystem.generated.h"

UCLASS()
class SCCORE_API USCAIPerceptionSystem : public UAIPerceptionSystem {
    GENERATED_BODY()
public:
    USCAIPerceptionSystem();
};

