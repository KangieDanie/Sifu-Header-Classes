#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCAiAction -FallbackName=SCAiAction
#include "EComboAIConditionGroupOperator.h"
#include "ESpeedState.h"
#include "UOrderParamsClassInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "UOrderParamsInstanceStruct.h"
#include "AICancelCondition.h"
#include "EGlobalBehaviors.h"
#include "WGAiAction.generated.h"

class AFightingPlayerController;
class AFightingCharacter;
class AFightingAIController;
class UAIFightingComponent;
class USCCrowdFollowingComponent;
class UOrderParams;

UCLASS(Abstract)
class SIFU_API UWGAiAction : public USCAiAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESpeedState m_eDesiredSpeedState;
    
    UPROPERTY(EditAnywhere)
    bool m_bLockSpeedStateOnSchedule;
    
    UPROPERTY()
    TMap<FName, FUOrderParamsClassInstance> m_orderParams;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FUOrderParamsInstanceStruct> m_OrderParamsInstances;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bCancelOnGlobalBehaviorChange;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bCancellable;
    
    UPROPERTY(EditAnywhere)
    TArray<FAICancelCondition> m_CancelConditions;
    
    UPROPERTY(EditAnywhere)
    EComboAIConditionGroupOperator m_CancelConditionOperator;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bForceIdleExit;
    
public:
    UWGAiAction();
protected:
    UFUNCTION()
    void OnGlobalBehaviorChanged(EGlobalBehaviors _eBehavior, const bool _bFromDialog);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveAbilitySystemGameplayTag(const FGameplayTag& _tag);
    
    UFUNCTION(BlueprintPure)
    AFightingPlayerController* BPF_GetFirstPlayerController() const;
    
    UFUNCTION(BlueprintPure)
    AFightingCharacter* BPF_GetFirstPlayerCharacter() const;
    
    UFUNCTION(BlueprintPure)
    AFightingCharacter* BPF_GetFightingCharacter() const;
    
    UFUNCTION(BlueprintPure)
    AFightingCharacter* BPF_GetEnemyCharacter() const;
    
    UFUNCTION(BlueprintPure)
    AFightingCharacter* BPF_GetCurrentTarget() const;
    
    UFUNCTION(BlueprintPure)
    AFightingAIController* BPF_GetAIFightingController() const;
    
    UFUNCTION(BlueprintPure)
    UAIFightingComponent* BPF_GetAIFightingComponent() const;
    
    UFUNCTION(BlueprintPure)
    USCCrowdFollowingComponent* BPF_GetAICrowdFollingComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddAbilitySystemGameplayTag(const FGameplayTag& _tag);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OnCreatedOrderParams(FName _paramsName, UOrderParams* _orderParams);
    
};

