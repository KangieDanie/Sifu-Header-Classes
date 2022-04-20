#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "EBoneGetterSetterMode.h"
#include "CachedRigElement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_GetControlVector.generated.h"

USTRUCT()
struct FRigUnit_GetControlVector : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Control;
    
    UPROPERTY()
    EBoneGetterSetterMode Space;
    
    UPROPERTY()
    FVector Vector;
    
    UPROPERTY()
    FVector Minimum;
    
    UPROPERTY()
    FVector Maximum;
    
    UPROPERTY()
    FCachedRigElement CachedControlIndex;
    
    CONTROLRIG_API FRigUnit_GetControlVector();
};

