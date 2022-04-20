#pragma once
#include "CoreMinimal.h"
#include "SCGameplayAbility.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "ParryFromDownAbility.generated.h"

UCLASS()
class SIFU_API UParryFromDownAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool m_bLaunchDownRecovery;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_animRecoveryOverriden;
    
public:
    UParryFromDownAbility();
};

