#pragma once
#include "CoreMinimal.h"
#include "HittedOrderServiceInfos.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCCardinalPoints -FallbackName=ESCCardinalPoints
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "EKnockbackReorientationBehaviour.h"
#include "HittedAnimContainer.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FHittedAnimContainer : public FAnimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bLockAttacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EKnockbackReorientationBehaviour m_eReorientationBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bInterruptible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bInterruptAnimationOnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bScaleAnimationToHitDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bInvertReorientationFromBehind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESCCardinalPoints m_eOrientationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIgnoreHitKnockbackDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAnimContainer m_FightingStateLoopAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FHittedOrderServiceInfos> m_OrderServices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bOverrideHitDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fOverrideHitDuration;
    
    FHittedAnimContainer();
};

