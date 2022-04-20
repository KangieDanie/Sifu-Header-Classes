#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequenceInstanceData -FallbackName=MovieSceneSequenceInstanceData
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputBlendPose -FallbackName=InputBlendPose
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvaluationOperand -FallbackName=MovieSceneEvaluationOperand
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "MovieSceneControlRigInstanceData.generated.h"

USTRUCT()
struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bAdditive;
    
    UPROPERTY()
    bool bApplyBoneFilter;
    
    UPROPERTY()
    FInputBlendPose BoneFilter;
    
    UPROPERTY()
    FMovieSceneFloatChannel Weight;
    
    UPROPERTY()
    FMovieSceneEvaluationOperand Operand;
    
    CONTROLRIG_API FMovieSceneControlRigInstanceData();
};

