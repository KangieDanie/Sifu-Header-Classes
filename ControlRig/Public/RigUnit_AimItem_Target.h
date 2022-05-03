#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EControlRigVectorKind.h"
#include "RigElementKey.h"
#include "RigUnit_AimItem_Target.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_AimItem_Target {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UPROPERTY(EditAnywhere)
    FVector Axis;
    
    UPROPERTY(EditAnywhere)
    FVector Target;
    
    UPROPERTY(EditAnywhere)
    EControlRigVectorKind Kind;
    
    UPROPERTY(EditAnywhere)
    FRigElementKey Space;
    
    CONTROLRIG_API FRigUnit_AimItem_Target();
};

