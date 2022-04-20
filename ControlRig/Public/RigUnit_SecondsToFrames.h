#pragma once
#include "CoreMinimal.h"
#include "RigUnit_AnimBase.h"
#include "RigUnit_SecondsToFrames.generated.h"

USTRUCT()
struct FRigUnit_SecondsToFrames : public FRigUnit_AnimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Seconds;
    
    UPROPERTY()
    float Frames;
    
    CONTROLRIG_API FRigUnit_SecondsToFrames();
};

