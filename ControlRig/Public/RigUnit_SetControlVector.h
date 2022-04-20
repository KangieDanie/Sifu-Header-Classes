#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnitMutable.h"
#include "EBoneGetterSetterMode.h"
#include "RigUnit_SetControlVector.generated.h"

USTRUCT()
struct FRigUnit_SetControlVector : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Control;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    FVector Vector;
    
    UPROPERTY()
    EBoneGetterSetterMode Space;
    
    UPROPERTY()
    FCachedRigElement CachedControlIndex;
    
    CONTROLRIG_API FRigUnit_SetControlVector();
};

