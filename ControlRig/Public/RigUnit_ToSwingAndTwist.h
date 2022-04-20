#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_ToSwingAndTwist.generated.h"

USTRUCT()
struct FRigUnit_ToSwingAndTwist : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Input;
    
    UPROPERTY()
    FVector TwistAxis;
    
    UPROPERTY()
    FQuat Swing;
    
    UPROPERTY()
    FQuat Twist;
    
    CONTROLRIG_API FRigUnit_ToSwingAndTwist();
};

