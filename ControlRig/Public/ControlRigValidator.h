#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ControlRigValidator.generated.h"

class UControlRigValidationPass;

UCLASS()
class CONTROLRIG_API UControlRigValidator : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<UControlRigValidationPass*> Passes;
    
public:
    UControlRigValidator();
};

