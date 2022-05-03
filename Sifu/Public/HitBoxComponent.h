#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ImpactResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "HitRequest.h"
#include "HitBox.h"
#include "HitBoxComponent.generated.h"

class AActor;
class AFightingCharacter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UHitBoxComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHit, const FHitResult&, _hitResult, const FHitRequest&, _hitRequest, const FImpactResult&, _Impact);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAnyHit);
    
    UPROPERTY(BlueprintAssignable)
    FOnHit m_OnHit;
    
    UPROPERTY(BlueprintAssignable)
    FOnAnyHit m_OnAnyHit;
    
    UPROPERTY(EditAnywhere)
    float m_fMinVelocity;
    
    UPROPERTY(EditAnywhere)
    bool m_bRecoveryAfterDelay;
    
    UPROPERTY(EditAnywhere)
    float m_fRecoveryAfterDelay;
    
    UPROPERTY(EditAnywhere)
    bool m_bRecoveryOnLeaveZone;
    
    UPROPERTY(EditAnywhere)
    FHitBox m_HitBox;
    
private:
    UPROPERTY()
    TMap<TWeakObjectPtr<AActor>, float> m_Recoveries;
    
public:
    UHitBoxComponent();
    UFUNCTION(BlueprintCallable)
    void BPF_SetOwningCharacter(AFightingCharacter* _owningCharacter);
    
};

