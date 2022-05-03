#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_MathQuaternionBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathQuaternionGetAxis.generated.h"

USTRUCT()
struct FRigUnit_MathQuaternionGetAxis : public FRigUnit_MathQuaternionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Quaternion;
    
    UPROPERTY()
    TEnumAsByte<EAxis::Type> Axis;
    
    UPROPERTY()
    FVector Result;
    
    CONTROLRIG_API FRigUnit_MathQuaternionGetAxis();
};

