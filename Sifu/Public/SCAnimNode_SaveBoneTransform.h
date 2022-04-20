#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
#include "ECoordinateSystem.h"
#include "SCAnimNode_SaveBoneTransform.generated.h"

class UMirrorAnimDB;

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_SaveBoneTransform : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink mBasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBoneReference mBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECoordinateSystem meTransformSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool mbMirror;
    
    UPROPERTY(Transient)
    UMirrorAnimDB* mMirrorAnimDB;
    
    FSCAnimNode_SaveBoneTransform();
};

