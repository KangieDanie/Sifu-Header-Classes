#pragma once
#include "CoreMinimal.h"
#include "ControlRigValidationPass.h"
#include "RigPose.h"
#include "ControlRigNumericalValidationPass.generated.h"

UCLASS()
class CONTROLRIG_API UControlRigNumericalValidationPass : public UControlRigValidationPass {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bCheckControls;
    
    UPROPERTY(EditAnywhere)
    bool bCheckBones;
    
    UPROPERTY(EditAnywhere)
    bool bCheckCurves;
    
    UPROPERTY(EditAnywhere)
    float TranslationPrecision;
    
    UPROPERTY(EditAnywhere)
    float RotationPrecision;
    
    UPROPERTY(EditAnywhere)
    float ScalePrecision;
    
    UPROPERTY(EditAnywhere)
    float CurvePrecision;
    
private:
    UPROPERTY(Transient)
    FName EventNameA;
    
    UPROPERTY(Transient)
    FName EventNameB;
    
    UPROPERTY(Transient)
    FRigPose Pose;
    
public:
    UControlRigNumericalValidationPass();
};

