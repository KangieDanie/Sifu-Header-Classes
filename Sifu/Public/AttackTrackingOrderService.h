#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OrderService.h"
#include "EOrderType.h"
#include "BPOrderServiceInstance.h"
#include "AttackTrackingOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UAttackTrackingOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fForceTrackingFrames;
    
    UPROPERTY(EditAnywhere)
    bool m_bAlwaysTrackHittedTarget;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsTrackingWindowOpenedByDefault;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsRushAttack;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseDisplacementDirAsAttackDir;
    
    UPROPERTY(EditAnywhere)
    TArray<EOrderType> m_StopTrackingIfTargetPlaysOrder;
    
    UAttackTrackingOrderService();
    UFUNCTION(BlueprintCallable)
    void BPF_GetTrackingLocation(const FBPOrderServiceInstance& _instance, bool& _bSuccess, FVector& _value);
    
};

