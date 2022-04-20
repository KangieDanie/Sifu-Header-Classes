#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryManager -FallbackName=EnvQueryManager
#include "SCEnvQueryManager.generated.h"

UCLASS(NonTransient)
class SCCORE_API USCEnvQueryManager : public UEnvQueryManager {
    GENERATED_BODY()
public:
    USCEnvQueryManager();
};

