#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_FitChainToCurve_Rotation.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_FitChainToCurve_Rotation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FQuat Rotation;
    
    UPROPERTY(EditAnywhere)
    float Ratio;
    
    CONTROLRIG_API FRigUnit_FitChainToCurve_Rotation();
};

