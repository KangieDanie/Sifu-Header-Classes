#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService -FallbackName=BTService
#include "AIReactionAttackService.generated.h"

UCLASS()
class SIFU_API UAIReactionAttackService : public UBTService {
    GENERATED_BODY()
public:
    UAIReactionAttackService();
};

