#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_SimBaseMutable.h"
#include "CRSimPoint.h"
#include "CRSimLinearSpring.h"
#include "CRSimPointForce.h"
#include "CRSimSoftCollision.h"
#include "ECRSimPointIntegrateType.h"
#include "RigUnit_PointSimulation_DebugSettings.h"
#include "RigUnit_PointSimulation_BoneTarget.h"
#include "CRFourPointBezier.h"
#include "RigUnit_PointSimulation_WorkData.h"
#include "RigUnit_PointSimulation.generated.h"

USTRUCT()
struct FRigUnit_PointSimulation : public FRigUnit_SimBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FCRSimPoint> Points;
    
    UPROPERTY()
    TArray<FCRSimLinearSpring> Links;
    
    UPROPERTY()
    TArray<FCRSimPointForce> Forces;
    
    UPROPERTY()
    TArray<FCRSimSoftCollision> CollisionVolumes;
    
    UPROPERTY()
    float SimulatedStepsPerSecond;
    
    UPROPERTY()
    ECRSimPointIntegrateType IntegratorType;
    
    UPROPERTY()
    float VerletBlend;
    
    UPROPERTY()
    TArray<FRigUnit_PointSimulation_BoneTarget> BoneTargets;
    
    UPROPERTY()
    bool bLimitLocalPosition;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY()
    FVector PrimaryAimAxis;
    
    UPROPERTY()
    FVector SecondaryAimAxis;
    
    UPROPERTY()
    FRigUnit_PointSimulation_DebugSettings DebugSettings;
    
    UPROPERTY()
    FCRFourPointBezier Bezier;
    
    UPROPERTY(Transient)
    FRigUnit_PointSimulation_WorkData WorkData;
    
    CONTROLRIG_API FRigUnit_PointSimulation();
};

