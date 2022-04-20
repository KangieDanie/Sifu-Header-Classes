#pragma once
#include "CoreMinimal.h"
#include "HitDescription.h"
#include "SynchronizedAttackHitActionLauncher.h"
#include "EditableOrderType.h"
#include "OverridingHitBox.h"
#include "WeaponAnimInfo.h"
#include "AnimSyncContainer.h"
#include "SynchronizedAttackLoopHitActionLauncher.generated.h"

class AFightingCharacter;

UCLASS(Abstract, EditInlineNew)
class SIFU_API USynchronizedAttackLoopHitActionLauncher : public USynchronizedAttackHitActionLauncher {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FEditableOrderType m_grabOrderTypeInstigator;
    
    UPROPERTY()
    FEditableOrderType m_grabOrderTypeVictim;
    
    UPROPERTY(EditAnywhere)
    float m_fLoopDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fFinalDistanceFromFengjie;
    
public:
    USynchronizedAttackLoopHitActionLauncher();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetSynchronizedAttackLoopAnims(const FHitDescription& _hitDescription, AFightingCharacter* _victimChar, bool& _bOutIsLethal, FAnimSyncContainer& _outAnimsEntry, FAnimSyncContainer& _outAnimsLoop, FAnimSyncContainer& _outAnimsExit, FWeaponAnimInfo& _outAttackerWeaponAnimEntry, FWeaponAnimInfo& _outAttackerWeaponAnimLoop, FWeaponAnimInfo& _outAttackerWeaponAnimExit, TArray<FOverridingHitBox>& _outHitsToApply) const;
    
};

