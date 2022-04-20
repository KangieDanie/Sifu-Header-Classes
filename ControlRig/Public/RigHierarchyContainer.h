#pragma once
#include "CoreMinimal.h"
#include "RigBoneHierarchy.h"
#include "RigControlHierarchy.h"
#include "RigSpaceHierarchy.h"
#include "RigCurveContainer.h"
#include "RigHierarchyContainer.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigHierarchyContainer {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigBoneHierarchy BoneHierarchy;
    
    UPROPERTY()
    FRigSpaceHierarchy SpaceHierarchy;
    
    UPROPERTY()
    FRigControlHierarchy ControlHierarchy;
    
    UPROPERTY()
    FRigCurveContainer CurveContainer;
    
    UPROPERTY(Transient)
    int32 Version;
    
    FRigHierarchyContainer();
};

