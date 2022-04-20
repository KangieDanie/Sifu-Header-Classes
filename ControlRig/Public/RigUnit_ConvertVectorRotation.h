#pragma once
#include "CoreMinimal.h"
#include "RigUnit_ConvertRotation.h"
#include "RigUnit_ConvertVectorRotation.generated.h"

USTRUCT()
struct FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_ConvertVectorRotation();
};

