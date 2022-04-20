#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathQuaternionBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathQuaternionSwingTwist.generated.h"

USTRUCT()
struct FRigUnit_MathQuaternionSwingTwist : public FRigUnit_MathQuaternionBase {
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
    
    CONTROLRIG_API FRigUnit_MathQuaternionSwingTwist();
};

