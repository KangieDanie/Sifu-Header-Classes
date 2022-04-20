#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetData.h"
#include "GameplayAbilityTargetingLocationInfo.h"
#include "GameplayAbilityTargetData_LocationInfo.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayAbilityTargetingLocationInfo SourceLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayAbilityTargetingLocationInfo TargetLocation;
    
    FGameplayAbilityTargetData_LocationInfo();
};

