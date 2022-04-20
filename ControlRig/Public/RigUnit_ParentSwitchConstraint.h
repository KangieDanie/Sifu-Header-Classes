#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnitMutable.h"
#include "RigElementKeyCollection.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_ParentSwitchConstraint.generated.h"

USTRUCT()
struct FRigUnit_ParentSwitchConstraint : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Subject;
    
    UPROPERTY()
    int32 ParentIndex;
    
    UPROPERTY()
    FRigElementKeyCollection Parents;
    
    UPROPERTY()
    FTransform InitialGlobalTransform;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    bool Switched;
    
    UPROPERTY()
    FCachedRigElement CachedSubject;
    
    UPROPERTY()
    FCachedRigElement CachedParent;
    
    UPROPERTY()
    FTransform RelativeOffset;
    
    CONTROLRIG_API FRigUnit_ParentSwitchConstraint();
};

