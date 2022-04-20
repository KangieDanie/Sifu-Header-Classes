#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "MovementModeChangedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
#include "AbilityTask_WaitMovementModeChange.generated.h"

class ACharacter;
class UAbilityTask_WaitMovementModeChange;
class UGameplayAbility;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_WaitMovementModeChange : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMovementModeChangedDelegate OnChange;
    
    UAbilityTask_WaitMovementModeChange();
    UFUNCTION()
    void OnMovementModeChange(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode);
    
};

