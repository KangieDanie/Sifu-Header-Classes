#pragma once
#include "CoreMinimal.h"
#include "RigUnit_AnimBase.h"
#include "RigUnit_FramesToSeconds.generated.h"

USTRUCT()
struct FRigUnit_FramesToSeconds : public FRigUnit_AnimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Frames;
    
    UPROPERTY()
    float Seconds;
    
    CONTROLRIG_API FRigUnit_FramesToSeconds();
};

