#pragma once
#include "CoreMinimal.h"
#include "EIKFootRootLocalAxis.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=AnimNode_SkeletalControlBase -FallbackName=AnimNode_SkeletalControlBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "IKBones.h"
#include "PelvisAdjustmentInterp.h"
#include "AnimNode_SpeedWarping.generated.h"

USTRUCT(BlueprintType)
struct CUSTOMANIMNODE_API FAnimNode_SpeedWarping : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference IKFootRootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FIKBones> FeetDefinitions;
    
    UPROPERTY(EditAnywhere)
    FBoneReference PelvisBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EIKFootRootLocalAxis SpeedWarpingAxisMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpeedScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PelvisAdjustmentAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxIter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPelvisAdjustmentInterp PelvisAdjustmentInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ClampIKUsingFKLeg;
    
    FAnimNode_SpeedWarping();
};

