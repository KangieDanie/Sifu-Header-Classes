#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimNode_ControlRigBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimAlphaInputType -FallbackName=EAnimAlphaInputType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputScaleBias -FallbackName=InputScaleBias
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputAlphaBoolBlend -FallbackName=InputAlphaBoolBlend
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputScaleBiasClamp -FallbackName=InputScaleBiasClamp
#include "AnimNode_ControlRig.generated.h"

class UControlRig;

USTRUCT()
struct CONTROLRIG_API FAnimNode_ControlRig : public FAnimNode_ControlRigBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UControlRig> ControlRigClass;
    
    UPROPERTY(Transient)
    UControlRig* ControlRig;
    
    UPROPERTY(EditAnywhere)
    float Alpha;
    
    UPROPERTY(EditAnywhere)
    EAnimAlphaInputType AlphaInputType;
    
    UPROPERTY(EditAnywhere)
    uint8 bAlphaBoolEnabled: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSetRefPoseFromSkeleton: 1;
    
    UPROPERTY(EditAnywhere)
    FInputScaleBias AlphaScaleBias;
    
    UPROPERTY(EditAnywhere)
    FInputAlphaBoolBlend AlphaBoolBlend;
    
    UPROPERTY(EditAnywhere)
    FName AlphaCurveName;
    
    UPROPERTY(EditAnywhere)
    FInputScaleBiasClamp AlphaScaleBiasClamp;
    
    UPROPERTY()
    TMap<FName, FName> InputMapping;
    
    UPROPERTY()
    TMap<FName, FName> OutputMapping;
    
    UPROPERTY(EditAnywhere)
    int32 LODThreshold;
    
public:
    FAnimNode_ControlRig();
};

