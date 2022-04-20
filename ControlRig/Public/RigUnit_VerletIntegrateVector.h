#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CRSimPoint.h"
#include "RigUnit_VerletIntegrateVector.generated.h"

USTRUCT()
struct FRigUnit_VerletIntegrateVector : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Target;
    
    UPROPERTY()
    float Strength;
    
    UPROPERTY()
    float Damp;
    
    UPROPERTY()
    float Blend;
    
    UPROPERTY()
    FVector Position;
    
    UPROPERTY()
    FVector Velocity;
    
    UPROPERTY()
    FVector Acceleration;
    
    UPROPERTY(Transient)
    FCRSimPoint Point;
    
    UPROPERTY(Transient)
    bool bInitialized;
    
    CONTROLRIG_API FRigUnit_VerletIntegrateVector();
};

