#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
#include "SCAnimNode_MirrorPose.generated.h"

class UMirrorAnimDB;

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_MirrorPose : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink mBasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool mbMirrorAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMirrorAnimDB* mMirrorAnimDB;
    
    FSCAnimNode_MirrorPose();
};

