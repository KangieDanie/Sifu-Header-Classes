#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectContextHandle.h"
#include "GameplayEffectRemovalInfo.generated.h"

USTRUCT(BlueprintType)
struct FGameplayEffectRemovalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPrematureRemoval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayEffectContextHandle EffectContext;
    
    GAMEPLAYABILITIES_API FGameplayEffectRemovalInfo();
};

