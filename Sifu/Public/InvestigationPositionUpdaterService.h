#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService -FallbackName=BTService
#include "InvestigationPositionUpdaterService.generated.h"

UCLASS()
class SIFU_API UInvestigationPositionUpdaterService : public UBTService {
    GENERATED_BODY()
public:
    UInvestigationPositionUpdaterService();
};

