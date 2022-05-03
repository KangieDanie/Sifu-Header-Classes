#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCAIActionMemoryEntryHandler -FallbackName=SCAIActionMemoryEntryHandler
#include "ComboTransitionCondition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCTypedValue -FallbackName=SCTypedValue
#include "AIComboCondition.generated.h"

class ASCCharacter;
class UAIFightingComponent;
class AActor;

UCLASS(Abstract, EditInlineNew)
class SIFU_API UAIComboCondition : public UComboTransitionCondition, public ISCAIActionMemoryEntryHandler {
    GENERATED_BODY()
public:
    UAIComboCondition();
    UFUNCTION(BlueprintPure)
    void BPF_GetEnvQueryParameterValue(FName _paramName, const ASCCharacter* _owner, FSCTypedValue& _outValue) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_TestCondition(const UAIFightingComponent* _aiComponent, const AActor* _target) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_GetEnvQueryParameterValue(FName _paramName, const ASCCharacter* _owner, FSCTypedValue& _outValue) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

