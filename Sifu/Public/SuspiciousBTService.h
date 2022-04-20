#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService -FallbackName=BTService
#include "SuspiciousBTService.generated.h"

UCLASS()
class SIFU_API USuspiciousBTService : public UBTService {
    GENERATED_BODY()
public:
    USuspiciousBTService();
};

