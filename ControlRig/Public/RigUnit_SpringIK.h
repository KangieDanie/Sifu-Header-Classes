#pragma once
#include "CoreMinimal.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_SpringIK_WorkData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EControlRigVectorKind.h"
#include "RigUnit_SpringIK_DebugSettings.h"
#include "RigUnit_SpringIK.generated.h"

USTRUCT()
struct FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName StartBone;
    
    UPROPERTY()
    FName EndBone;
    
    UPROPERTY()
    float HierarchyStrength;
    
    UPROPERTY()
    float EffectorStrength;
    
    UPROPERTY()
    float EffectorRatio;
    
    UPROPERTY()
    float RootStrength;
    
    UPROPERTY()
    float RootRatio;
    
    UPROPERTY()
    float Damping;
    
    UPROPERTY()
    FVector PoleVector;
    
    UPROPERTY()
    bool bFlipPolePlane;
    
    UPROPERTY()
    EControlRigVectorKind PoleVectorKind;
    
    UPROPERTY()
    FName PoleVectorSpace;
    
    UPROPERTY()
    FVector PrimaryAxis;
    
    UPROPERTY()
    FVector SecondaryAxis;
    
    UPROPERTY()
    bool bLiveSimulation;
    
    UPROPERTY()
    int32 Iterations;
    
    UPROPERTY()
    bool bLimitLocalPosition;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY()
    FRigUnit_SpringIK_DebugSettings DebugSettings;
    
    UPROPERTY(Transient)
    FRigUnit_SpringIK_WorkData WorkData;
    
    CONTROLRIG_API FRigUnit_SpringIK();
};

