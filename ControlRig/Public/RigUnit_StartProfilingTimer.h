#pragma once
#include "CoreMinimal.h"
#include "RigUnit_DebugBaseMutable.h"
#include "RigUnit_StartProfilingTimer.generated.h"

USTRUCT()
struct FRigUnit_StartProfilingTimer : public FRigUnit_DebugBaseMutable {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_StartProfilingTimer();
};

