#pragma once
#include "CoreMinimal.h"
#include "RigUnit_PointSimulation_BoneTarget.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_PointSimulation_BoneTarget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Bone;
    
    UPROPERTY(EditAnywhere)
    int32 TranslationPoint;
    
    UPROPERTY(EditAnywhere)
    int32 PrimaryAimPoint;
    
    UPROPERTY(EditAnywhere)
    int32 SecondaryAimPoint;
    
    CONTROLRIG_API FRigUnit_PointSimulation_BoneTarget();
};

