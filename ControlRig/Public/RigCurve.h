#pragma once
#include "CoreMinimal.h"
#include "RigElement.h"
#include "RigCurve.generated.h"

USTRUCT(BlueprintType)
struct FRigCurve : public FRigElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float Value;
    
    CONTROLRIG_API FRigCurve();
};

