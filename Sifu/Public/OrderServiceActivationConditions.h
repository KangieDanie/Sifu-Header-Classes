#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OrderServiceActivationConditions.generated.h"

class ABaseCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UOrderServiceActivationConditions : public UObject {
    GENERATED_BODY()
public:
    UOrderServiceActivationConditions();
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool BPE_CanActivate(uint8 _uiOrderId, const ABaseCharacter* _owner) const;
    
};

