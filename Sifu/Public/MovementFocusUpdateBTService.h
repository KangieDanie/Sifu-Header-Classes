#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService -FallbackName=BTService
#include "MovementFocusUpdateBTService.generated.h"

UCLASS()
class SIFU_API UMovementFocusUpdateBTService : public UBTService {
    GENERATED_BODY()
public:
    UMovementFocusUpdateBTService();
};

