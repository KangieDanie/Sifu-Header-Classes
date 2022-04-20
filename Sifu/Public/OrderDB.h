#pragma once
#include "CoreMinimal.h"
#include "EOrderType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=DynamicBlendSettings -FallbackName=DynamicBlendSettings
#include "ELookAtRefDirMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EVisibilityBasedAnimTickOption -FallbackName=EVisibilityBasedAnimTickOption
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "EFightingActionState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ELookAtApplyMode -FallbackName=ELookAtApplyMode
#include "OrderServiceInfosList.h"
#include "OrderDB.generated.h"

class UOrderComponent;

UCLASS(Blueprintable)
class SIFU_API UOrderDB : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EOrderType m_eOrderType;
    
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_BlueprintID;
    
    UPROPERTY(EditAnywhere)
    EFightingActionState m_ePushFightingStateOnStart;
    
    UPROPERTY(EditAnywhere)
    bool m_bPopFightingStateOnStop;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsStunOrder;
    
    UPROPERTY(EditAnywhere)
    bool m_bDelayHitsWhenStarting;
    
    UPROPERTY(EditAnywhere)
    EVisibilityBasedAnimTickOption m_eVisibilityBasedAnimTickOption;
    
    UPROPERTY(EditAnywhere)
    bool m_bAnimgraphShouldAlwaysTick;
    
    UPROPERTY(EditAnywhere)
    bool m_bEnableIK;
    
    UPROPERTY(EditAnywhere)
    bool m_bOverrideLookAtApplyMode;
    
    UPROPERTY(EditAnywhere)
    ELookAtApplyMode m_eOverridenLookAtApplyMode;
    
    UPROPERTY(EditAnywhere)
    bool m_bOverrideLookAtRefDirMode;
    
    UPROPERTY(EditAnywhere)
    ELookAtRefDirMode m_eOverridenLookAtRefDirMode;
    
    UPROPERTY(EditAnywhere)
    FDynamicBlendSettings m_LocoToOrderBlendSettings;
    
    UPROPERTY(EditAnywhere)
    FDynamicBlendSettings m_OrderToOrderBlendSettings;
    
    UPROPERTY(EditAnywhere)
    FDynamicBlendSettings m_OrderToLocoBlendSettings;
    
    UPROPERTY(EditAnywhere)
    bool m_bOrderToLocoUseSpeedStateSpeedForStartingSpeedBlend;
    
    UPROPERTY(EditAnywhere)
    FOrderServiceInfosList m_OrderServices;
    
    UOrderDB();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnOrderStopped(uint8 _uiOrderId, UOrderComponent* _component) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnOrderStarted(uint8 _uiOrderId, UOrderComponent* _component) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnOrderCanceled(uint8 _uiOrderId, UOrderComponent* _component) const;
    
};

