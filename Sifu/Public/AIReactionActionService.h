#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService -FallbackName=BTService
#include "AIReactionActionService.generated.h"

UCLASS()
class SIFU_API UAIReactionActionService : public UBTService {
    GENERATED_BODY()
public:
    UAIReactionActionService();
};

