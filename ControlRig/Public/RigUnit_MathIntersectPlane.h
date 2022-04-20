#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathIntersectPlane.generated.h"

USTRUCT()
struct FRigUnit_MathIntersectPlane : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Start;
    
    UPROPERTY()
    FVector Direction;
    
    UPROPERTY()
    FVector PlanePoint;
    
    UPROPERTY()
    FVector PlaneNormal;
    
    UPROPERTY()
    FVector Result;
    
    UPROPERTY()
    float Distance;
    
    CONTROLRIG_API FRigUnit_MathIntersectPlane();
};

