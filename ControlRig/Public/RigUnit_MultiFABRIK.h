#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_MultiFABRIK_EndEffector.h"
#include "RigUnit_MultiFABRIK_WorkData.h"
#include "RigUnit_MultiFABRIK.generated.h"

USTRUCT()
struct FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName RootBone;
    
    UPROPERTY()
    TArray<FRigUnit_MultiFABRIK_EndEffector> Effectors;
    
    UPROPERTY()
    float Precision;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY()
    int32 MaxIterations;
    
    UPROPERTY(Transient)
    FRigUnit_MultiFABRIK_WorkData WorkData;
    
    CONTROLRIG_API FRigUnit_MultiFABRIK();
};

