#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
#include "MovementModeOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UMovementModeOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> m_eMovementMode;
    
    UMovementModeOrderService();
};

