#pragma once
#include "CoreMinimal.h"
#include "ControlRigComponentMappedCurve.generated.h"

USTRUCT(BlueprintType)
struct FControlRigComponentMappedCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Target;
    
    CONTROLRIG_API FControlRigComponentMappedCurve();
};

