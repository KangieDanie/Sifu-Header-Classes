#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EActionType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCPoolableActorComponent -FallbackName=SCPoolableActorComponent
#include "ETargetingPrio.h"
#include "EFactionsEnums.h"
#include "TargetableConditions.h"
#include "TargetableActorComponent.generated.h"

class UCurveFloat;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UTargetableActorComponent : public USceneComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_bShouldDisplayBP;
    
    UPROPERTY(EditAnywhere)
    bool m_bAlwaysShowHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EFactionsEnums m_eFaction;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_CustomMaxZDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIsValidTarget;
    
    UPROPERTY(VisibleAnywhere)
    float m_fMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EActionType, FTargetableConditions> m_ActionTypeConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ETargetingPrio, bool> m_mAllowedTargetingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EActionType, bool> m_mAllowedActionType;
    
protected:
    UPROPERTY(EditAnywhere)
    bool m_bCanBeTargetedByLockMove;
    
public:
    UTargetableActorComponent();
    UFUNCTION(BlueprintCallable)
    void BPF_SetShouldDisplay(bool _bSHould);
    
    
    // Fix for true pure virtual functions not being implemented
};

