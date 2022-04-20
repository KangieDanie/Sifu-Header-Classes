#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectContext -FallbackName=GameplayEffectContext
#include "HitDescription.h"
#include "HitActionLauncherContext.generated.h"

USTRUCT(BlueprintType)
struct FHitActionLauncherContext : public FGameplayEffectContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FHitDescription m_hitDescription;
    
    SIFU_API FHitActionLauncherContext();
};

