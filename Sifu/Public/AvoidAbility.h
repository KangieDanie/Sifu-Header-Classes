#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCCardinalPoints -FallbackName=ESCCardinalPoints
#include "SCGameplayAbility.h"
#include "HitBox.h"
#include "SCGameplayAbilityActorInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEventData -FallbackName=GameplayEventData
#include "AvoidAbility.generated.h"

class AActor;
class UAbilityPayload;

UCLASS()
class SIFU_API UAvoidAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
    UAvoidAbility();
    UFUNCTION(BlueprintImplementableEvent)
    ESCCardinalPoints BPE_GetCardinalAvoidForHitBox(const FHitBox& _hitbox) const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    void BPE_GetAvoidAnimationsBis(AActor* _forActor, AActor* _forTarget, ESCCardinalPoints _eCardinal, ESCCardinalPoints _eTargetCardinal, const bool _bTargetAttackIsMirrored, const bool _bIsHitBoxValid, const FHitBox& _hitbox, TArray<FAnimContainer>& _outAnimContainer, bool& _bMirror, uint8& _outUIAvoidType) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetAvoidAnimations(const FSCGameplayAbilityActorInfo& _infos, const FGameplayEventData& _triggerEventData, UAbilityPayload* _payload, TArray<FAnimContainer>& _outAnimContainer, bool& _bMirror, uint8& _outUIAvoidType) const;
    
};

