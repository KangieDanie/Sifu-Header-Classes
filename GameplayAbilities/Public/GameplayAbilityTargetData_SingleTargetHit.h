#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "GameplayAbilityTargetData_SingleTargetHit.generated.h"

USTRUCT()
struct GAMEPLAYABILITIES_API FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FHitResult HitResult;
    
    UPROPERTY()
    bool bHitReplaced;
    
    FGameplayAbilityTargetData_SingleTargetHit();
};

