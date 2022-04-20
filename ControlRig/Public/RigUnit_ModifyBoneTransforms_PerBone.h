#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_ModifyBoneTransforms_PerBone.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_ModifyBoneTransforms_PerBone {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Bone;
    
    UPROPERTY(EditAnywhere)
    FTransform Transform;
    
    CONTROLRIG_API FRigUnit_ModifyBoneTransforms_PerBone();
};

