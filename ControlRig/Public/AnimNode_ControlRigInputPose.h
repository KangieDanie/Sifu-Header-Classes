#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
#include "AnimNode_ControlRigInputPose.generated.h"

USTRUCT()
struct FAnimNode_ControlRigInputPose : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPoseLink InputPose;
    
    CONTROLRIG_API FAnimNode_ControlRigInputPose();
};

