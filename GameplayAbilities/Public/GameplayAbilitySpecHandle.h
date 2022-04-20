#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpecHandle.generated.h"

USTRUCT(BlueprintType)
struct FGameplayAbilitySpecHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 Handle;
    
public:
    GAMEPLAYABILITIES_API FGameplayAbilitySpecHandle();
};

