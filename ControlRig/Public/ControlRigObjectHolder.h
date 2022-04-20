#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ControlRigObjectHolder.generated.h"

UCLASS()
class UControlRigObjectHolder : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UObject*> Objects;
    
    UControlRigObjectHolder();
};

