#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "WaitVelocityChangeDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AbilityTask_WaitVelocityChange.generated.h"

class UMovementComponent;
class UAbilityTask_WaitVelocityChange;
class UGameplayAbility;

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

