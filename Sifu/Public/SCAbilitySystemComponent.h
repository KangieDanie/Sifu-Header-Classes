#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AbilityDynamicDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilitySystemComponent -FallbackName=AbilitySystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "AbilityDelegateHandler.h"
#include "SCAbilitySystemComponent.generated.h"

class USkillGameplayEffect;
class UGameplayEffect;
class UGameplayAbility;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API USCAbilitySystemComponent : public UAbilitySystemComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UGameplayEffect>> m_StartEffects;
    
private:
    UPROPERTY(Transient)
    TMap<TSubclassOf<UGameplayAbility>, FAbilityDelegateHandler> m_OrderDelegateHandler;
    
public:
    USCAbilitySystemComponent();
    UFUNCTION(BlueprintCallable)
    void BPF_UnlockSkill(TSubclassOf<USkillGameplayEffect> _effect, bool _bForce);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnlockPermanentSkills(const TMap<TSubclassOf<USkillGameplayEffect>, int32>& _unlockedSkillOccurences);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnlockAllSkills(const FString& _path);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetShrineEffects();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveAndSaveGameplayTag(const FGameplayTagContainer& _tag);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnAbilityDeactived_Unbind(TSubclassOf<UGameplayAbility> _abilityClass, FAbilityDynamicDelegate _delegate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnAbilityDeactived_Bind(TSubclassOf<UGameplayAbility> _abilityClass, FAbilityDynamicDelegate _delegate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnAbilityActived_Unbind(TSubclassOf<UGameplayAbility> _abilityClass, FAbilityDynamicDelegate _delegate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnAbilityActived_Bind(TSubclassOf<UGameplayAbility> _abilityClass, FAbilityDynamicDelegate _delegate);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LockAllSkills();
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsSkillUnlocked(TSubclassOf<USkillGameplayEffect> _effect);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsInStartEffects(TSubclassOf<USkillGameplayEffect> _effect);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsAbilityActive(TSubclassOf<UGameplayAbility> _abilityClass) const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<USkillGameplayEffect>> BPF_GetUnlockedSkills() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_GetNotificationsEnabled() const;
    
    UFUNCTION(BlueprintPure)
    void BPF_GetCooldownRemainingForTag(FGameplayTagContainer _inCooldownTags, float& _fTimeRemaining, float& _fCooldownDuration);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ConsolidateSkill(TSubclassOf<USkillGameplayEffect> _effect);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ClearAndSaveGameplayTag();
    
    UFUNCTION(BlueprintPure)
    bool BPF_CanUnlockSkill(TSubclassOf<USkillGameplayEffect> _effect);
    
    UFUNCTION(BlueprintPure)
    bool BPF_CanConsolidatekSkill(TSubclassOf<USkillGameplayEffect> _effect);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddShrineEffect(TSubclassOf<UGameplayEffect> _effect);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddAndSaveGameplayTag(const FGameplayTagContainer& _tag, bool _bNeedSaveGame);
    
};

