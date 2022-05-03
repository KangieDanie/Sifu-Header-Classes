#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "WaitVelocityChangeDelegateDelegate.h"
#include "AbilityTask_WaitVelocityChange.generated.h"

class UGameplayAbility;
class UMovementComponent;
class UAbilityTask_WaitVelocityChange;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_WaitVelocityChange : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitVelocityChangeDelegate OnVelocityChage;
    
protected:
    UPROPERTY(Export)
    UMovementComponent* CachedMovementComponent;
    
public:
    UAbilityTask_WaitVelocityChange();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(UGameplayAbility* OwningAbility, FVector Direction, float MinimumMagnitude);
    
};

