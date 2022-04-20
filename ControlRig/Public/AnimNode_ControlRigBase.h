#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_CustomProperty -FallbackName=AnimNode_CustomProperty
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
#include "ControlRigIOSettings.h"
#include "AnimNode_ControlRigBase.generated.h"

class UNodeMappingContainer;

USTRUCT()
struct CONTROLRIG_API FAnimNode_ControlRigBase : public FAnimNode_CustomProperty {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FPoseLink Source;
    
    UPROPERTY(Transient)
    TMap<FName, uint16> ControlRigBoneMapping;
    
    UPROPERTY(Transient)
    TMap<FName, uint16> ControlRigCurveMapping;
    
    UPROPERTY(Transient)
    TMap<FName, uint16> InputToCurveMappingUIDs;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UNodeMappingContainer> NodeMappingContainer;
    
    UPROPERTY(Transient)
    FControlRigIOSettings InputSettings;
    
    UPROPERTY(Transient)
    FControlRigIOSettings OutputSettings;
    
    UPROPERTY(Transient)
    bool bExecute;
    
public:
    FAnimNode_ControlRigBase();
};

