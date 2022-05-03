#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "HitActionLauncher.h"
#include "AbilityHitActionLauncher.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UAbilityHitActionLauncher : public UHitActionLauncher {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag m_InstigatorEventTag;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag m_VictimEventTag;
    
    UPROPERTY(EditAnywhere)
    bool m_bApplyDamage;
    
    UPROPERTY(EditAnywhere)
    bool m_bNotifyHitted;
    
    UPROPERTY(EditAnywhere)
    bool m_bApplyFreezeFrame;
    
    UAbilityHitActionLauncher();
};

