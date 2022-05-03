#pragma once
#include "CoreMinimal.h"
#include "BaseFightingStateBehavior.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "PropertyReactionMovement.h"
#include "PropertyReactionHit.h"
#include "AIResistanceActions.h"
#include "PropertyReaction.generated.h"

USTRUCT(BlueprintType)
struct FPropertyReaction : public FBaseFightingStateBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPropertyReactionMovement m_Movement;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_RecoveryAnims[4];
    
    UPROPERTY(EditAnywhere)
    bool m_bUseRootMotion;
    
    UPROPERTY(EditAnywhere)
    FPropertyReactionHit m_HitReaction;
    
    UPROPERTY(EditAnywhere)
    bool m_bAlwayKeepCurrentStateDurationOnHit;
    
    UPROPERTY(EditAnywhere)
    bool m_bPauseGuardBreak;
    
    UPROPERTY(EditAnywhere)
    bool m_bHoldDuringStructureBroken;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxAccumulatedDamage;
    
    UPROPERTY(EditAnywhere)
    int32 m_iMaxAccumatedHits;
    
    UPROPERTY(EditAnywhere)
    bool m_bGroupMaxAccumulatedHitsByAttack;
    
    UPROPERTY(EditAnywhere)
    FAIResistanceActions m_Actions;
    
    SIFU_API FPropertyReaction();
};

