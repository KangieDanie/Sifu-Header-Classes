#pragma once
#include "CoreMinimal.h"
#include "AttackRequest.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "HitBox.h"
#include "ELimbs.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EInstigatorType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "HitRequest.generated.h"

class AActor;
class AUsableItem;

USTRUCT(BlueprintType)
struct SIFU_API FHitRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FAttackRequest m_AttackRequest;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FHitResult m_EnvironmentImpact;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TWeakObjectPtr<AActor> m_Instigator;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TWeakObjectPtr<AActor> m_InstigatorItem;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FVector m_InstigatorDirection;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    EInstigatorType m_eInstigatorType;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TWeakObjectPtr<AActor> m_Target;
    
    UPROPERTY(BlueprintReadWrite, NotReplicated, Transient)
    FHitBox m_HitBox;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    ELimbs m_eAttackerLimb;
    
    UPROPERTY(Transient)
    uint8 m_uiDamageID;
    
    UPROPERTY(Transient)
    uint8 m_uiAttackOrderID;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector m_vDamageDir;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bCastBoundariesRelativeToInstigator;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AUsableItem> m_UsableItemIntermediate;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_bMirror;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FGameplayTagContainer m_AttackProperties;
    
    UPROPERTY(Transient)
    uint8 m_uiHitBoxID;
    
    UPROPERTY(Transient)
    bool m_bCanBeDefended;
    
    FHitRequest();
};

