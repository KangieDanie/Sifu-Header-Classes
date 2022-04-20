#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AIPhaseTransition.generated.h"

class UAIFightingComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UAIPhaseTransition : public UObject {
    GENERATED_BODY()
public:
    UAIPhaseTransition();
protected:
    UFUNCTION(BlueprintCallable)
    bool BPF_GotoNextPhase();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnParentPhaseStarted(UAIFightingComponent* _aiComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnParentPhaseEnded(UAIFightingComponent* _aiComponent);
    
    UFUNCTION(BlueprintImplementableEvent)
    FString BPE_GetLog() const;
    
};

