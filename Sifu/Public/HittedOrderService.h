#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceContainerInterface -FallbackName=BoneReferenceContainerInterface
#include "BPOrderServiceInstance.h"
#include "HittedServiceInfos.h"
#include "EOrderType.h"
#include "HitBox.h"
#include "HittedAnimContainer.h"
#include "HitRequest.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "HittedOrderService.generated.h"

class UAttackPropertiesResistanceDB;

UCLASS(EditInlineNew)
class SIFU_API UHittedOrderService : public UOrderService, public IBoneReferenceContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FHittedServiceInfos m_Infos;
    
    UPROPERTY(EditAnywhere)
    FHitBox m_Hit;
    
    UPROPERTY(EditAnywhere)
    bool m_bFreezeInstigator;
    
    UPROPERTY(EditAnywhere)
    EOrderType m_eInstigatorOrderType;
    
    UHittedOrderService();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UAttackPropertiesResistanceDB* BPE_GetSpecialResistanceDB(const FBPOrderServiceInstance& _orderServiceInstance) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FHittedAnimContainer BPE_GetLethalHittedAnim(const FBPOrderServiceInstance& _orderServiceInstance) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void BPE_GetHitRequest(const FBPOrderServiceInstance& _orderServiceInstance, FHitRequest& _hitRequest, FHitResult& _hitResult) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    void BPE_GetHitBox(const FBPOrderServiceInstance& _orderServiceInstance, FHitBox& _hitbox, FHitResult& _envLocation) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FAnimContainer BPE_GetFightingStateRecoveryAnim(const FBPOrderServiceInstance& _orderServiceInstance) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FAnimContainer BPE_GetFightingStateLoopAnim(const FBPOrderServiceInstance& _orderServiceInstance) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

