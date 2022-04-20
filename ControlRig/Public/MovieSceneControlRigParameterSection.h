#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneParameterSection -FallbackName=MovieSceneParameterSection
#include "IntegerParameterNameAndCurve.h"
#include "ChannelMapInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneTransformMask -FallbackName=MovieSceneTransformMask
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputBlendPose -FallbackName=InputBlendPose
#include "EnumParameterNameAndCurve.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "MovieSceneControlRigParameterSection.generated.h"

class UControlRig;

UCLASS()
class CONTROLRIG_API UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    UControlRig* ControlRig;
    
    UPROPERTY()
    TArray<bool> ControlsMask;
    
    UPROPERTY()
    FMovieSceneTransformMask TransformMask;
    
    UPROPERTY(EditAnywhere)
    bool bAdditive;
    
    UPROPERTY(EditAnywhere)
    bool bApplyBoneFilter;
    
    UPROPERTY(EditAnywhere)
    FInputBlendPose BoneFilter;
    
    UPROPERTY()
    FMovieSceneFloatChannel Weight;
    
    UPROPERTY()
    TMap<FName, FChannelMapInfo> ControlChannelMap;
    
protected:
    UPROPERTY()
    TArray<FEnumParameterNameAndCurve> EnumParameterNamesAndCurves;
    
    UPROPERTY()
    TArray<FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves;
    
public:
    UMovieSceneControlRigParameterSection();
};

