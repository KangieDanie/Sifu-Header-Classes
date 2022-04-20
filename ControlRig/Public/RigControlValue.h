#pragma once
#include "CoreMinimal.h"
#include "RigControlValueStorage.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigControlValue.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigControlValue {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FRigControlValueStorage FloatStorage;
    
    UPROPERTY()
    FTransform Storage;
    
public:
    FRigControlValue();
};

