#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ComboConditionValueToNodeMap.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ComboTransitionCondition.generated.h"

class UComboTransitionCondition;
class AFightingCharacter;
class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UComboTransitionCondition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<uint8, UComboTransitionCondition*> m_TargetConditions;
    
    UPROPERTY()
    TMap<FGuid, FComboConditionValueToNodeMap> m_PerConditionValueToNodeMap;
    
private:
    UPROPERTY()
    FGuid m_ConditionID;
    
public:
    UComboTransitionCondition();
    UFUNCTION(BlueprintCallable)
    static bool BPF_TestConditionOfClass(TSubclassOf<UComboTransitionCondition> _condition, const AFightingCharacter* _owner);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_TestCondition(const UComboTransitionCondition* _condition, const AFightingCharacter* _owner);
    
    UFUNCTION(BlueprintNativeEvent)
    uint8 BPE_GetTargetNode(const AFightingCharacter* _owner, const AActor* _target) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FString BPE_GetLog() const;
    
};

