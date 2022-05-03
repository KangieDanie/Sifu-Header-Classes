#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ApexDestruction -ObjectName=DestructibleComponent -FallbackName=DestructibleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDelegate -FallbackName=SCDelegate
#include "ReplicatedDamageEvent.h"
#include "ReplayableDestructibleComponent.generated.h"

class UReplayableStaticObjectComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplayableDestructibleComponent : public UDestructibleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bCreatePhysicsStateAtStart;
    
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnReCreatedPhysicsState;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_fDelayNotifyHitEvent;
    
    UPROPERTY(EditAnywhere, Replicated)
    bool m_bOnFirstDestructionEnableChunksCollision;
    
    UPROPERTY(Export, Transient)
    UReplayableStaticObjectComponent* m_ReplayableStaticObjectComponent;
    
    UPROPERTY(ReplicatedUsing=OnRep_DamageEvents)
    TArray<FReplicatedDamageEvent> m_DamageEvents;
    
private:
    UPROPERTY(Transient)
    bool m_bCreatePhysicsState;
    
public:
    UReplayableDestructibleComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_DamageEvents();
    
    UFUNCTION()
    void EnableNotifyHitEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetApexActorEnabled(bool _bValue);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsDamaged() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnPreFirstDamageReceived(float _fBaseDamage, bool _bFullDamage);
    
};

