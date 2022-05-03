#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_TwoBoneIKFK.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigUnit_TwoBoneIKFK : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName StartJoint;
    
    UPROPERTY(EditAnywhere)
    FName EndJoint;
    
    UPROPERTY(EditAnywhere)
    FVector PoleTarget;
    
    UPROPERTY(EditAnywhere)
    float Spin;
    
    UPROPERTY(EditAnywhere)
    FTransform EndEffector;
    
    UPROPERTY(EditAnywhere)
    float IKBlend;
    
private:
    UPROPERTY(EditAnywhere)
    FTransform StartJointFKTransform;
    
    UPROPERTY(EditAnywhere)
    FTransform MidJointFKTransform;
    
    UPROPERTY(EditAnywhere)
    FTransform EndJointFKTransform;
    
    UPROPERTY(Transient)
    float PreviousFKIKBlend;
    
    UPROPERTY(Transient)
    FTransform StartJointIKTransform;
    
    UPROPERTY(Transient)
    FTransform MidJointIKTransform;
    
    UPROPERTY(Transient)
    FTransform EndJointIKTransform;
    
    UPROPERTY(Transient)
    int32 StartJointIndex;
    
    UPROPERTY(Transient)
    int32 MidJointIndex;
    
    UPROPERTY(Transient)
    int32 EndJointIndex;
    
    UPROPERTY(Transient)
    float UpperLimbLength;
    
    UPROPERTY(Transient)
    float LowerLimbLength;
    
public:
    FRigUnit_TwoBoneIKFK();
};

