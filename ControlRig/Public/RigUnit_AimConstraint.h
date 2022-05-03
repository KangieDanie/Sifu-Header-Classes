#pragma once
#include "CoreMinimal.h"
#include "RigUnit_AimConstraint_WorkData.h"
#include "RigUnitMutable.h"
#include "EAimMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AimTarget.h"
#include "RigUnit_AimConstraint.generated.h"

USTRUCT()
struct FRigUnit_AimConstraint : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Joint;
    
    UPROPERTY(EditAnywhere)
    EAimMode AimMode;
    
    UPROPERTY(EditAnywhere)
    EAimMode UpMode;
    
    UPROPERTY(EditAnywhere)
    FVector AimVector;
    
    UPROPERTY(EditAnywhere)
    FVector UpVector;
    
    UPROPERTY(EditAnywhere)
    TArray<FAimTarget> AimTargets;
    
    UPROPERTY(EditAnywhere)
    TArray<FAimTarget> UpTargets;
    
    UPROPERTY()
    FRigUnit_AimConstraint_WorkData WorkData;
    
    CONTROLRIG_API FRigUnit_AimConstraint();
};

