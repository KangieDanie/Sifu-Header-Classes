#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityActorInfo -FallbackName=GameplayAbilityActorInfo
#include "SCGameplayAbilityActorInfo.generated.h"

USTRUCT(BlueprintType)
struct FSCGameplayAbilityActorInfo : public FGameplayAbilityActorInfo {
    GENERATED_BODY()
public:
    SIFU_API FSCGameplayAbilityActorInfo();
};

