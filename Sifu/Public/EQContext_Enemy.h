#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext -FallbackName=EnvQueryContext
#include "EQContext_Enemy.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UEQContext_Enemy : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UEQContext_Enemy();
};

