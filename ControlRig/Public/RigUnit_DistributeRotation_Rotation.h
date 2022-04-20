#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_DistributeRotation_Rotation.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_DistributeRotation_Rotation {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Rotation;
    
    UPROPERTY()
    float Ratio;
    
    CONTROLRIG_API FRigUnit_DistributeRotation_Rotation();
};

