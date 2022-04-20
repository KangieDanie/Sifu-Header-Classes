#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FActiveGameplayEffectHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 Handle;
    
    UPROPERTY()
    bool bPassedFiltersAndWasExecuted;
    
public:
    FActiveGameplayEffectHandle();
};

