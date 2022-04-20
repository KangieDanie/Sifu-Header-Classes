#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MultiFABRIK_EndEffector.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MultiFABRIK_EndEffector {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Bone;
    
    UPROPERTY()
    FVector Location;
    
    CONTROLRIG_API FRigUnit_MultiFABRIK_EndEffector();
};

