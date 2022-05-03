#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OrderService.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "ActorTransformOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UActorTransformOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector m_vTranslation;
    
    UPROPERTY(EditAnywhere)
    FRotator m_Rotation;
    
    UActorTransformOrderService();
};

