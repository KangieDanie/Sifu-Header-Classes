#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "EHitDismissReason.h"
#include "AbilityTask_HandleDefense.generated.h"

class UAbilityTask_HandleDefense;
class UGameplayAbility;

UCLASS()
class SIFU_API UAbilityTask_HandleDefense : public UAbilityTask {
    GENERATED_BODY()
public:
    UAbilityTask_HandleDefense();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_HandleDefense* BPF_HandleDefense(UGameplayAbility* _owningAbility, EHitDismissReason _eDismissReason);
    
};

