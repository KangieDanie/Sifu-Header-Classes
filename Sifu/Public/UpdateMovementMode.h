#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService -FallbackName=BTService
#include "UpdateMovementMode.generated.h"

UCLASS()
class SIFU_API UUpdateMovementMode : public UBTService {
    GENERATED_BODY()
public:
    UUpdateMovementMode();
};

