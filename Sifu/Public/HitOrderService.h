#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OrderService.h"
#include "HitBox.h"
#include "BPOrderServiceInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "HitOrderService.generated.h"

class AActor;

UCLASS(EditInlineNew)
class SIFU_API UHitOrderService : public UOrderService {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FHitIgnoredActors, TArray<AActor*>&, _ignoredActors);
    
    UPROPERTY(EditAnywhere)
    FHitBox m_Hit;
    
    UPROPERTY(EditAnywhere)
    bool m_bFreezeInstigator;
    
    UPROPERTY(EditAnywhere)
    bool m_bIgnoreOwner;
    
    UPROPERTY(EditAnywhere)
    bool m_bOrderTargetIsInstigator;
    
    UPROPERTY(EditAnywhere)
    bool m_bIgnoreTarget;
    
    UPROPERTY(EditAnywhere)
    bool m_bPersistIgnoredActorsFromPreviousOrderService;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseBoneLocationFromAnim;
    
    UPROPERTY(EditAnywhere)
    bool m_bUpdateHitboxVelocity;
    
    UHitOrderService();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    AActor* BPE_GetInstigator(const FBPOrderServiceInstance& _orderServiceInstance) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void BPE_GetIgnoredActors(const FBPOrderServiceInstance& _orderServiceInstance, TArray<AActor*>& _actors) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void BPE_GetHitBoxWithLocation(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox, FHitResult& _envLocation, FVector& _location) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void BPE_GetHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox, FHitResult& _envLocation) const;
    
};

