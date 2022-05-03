#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnit.h"
#include "EBoneGetterSetterMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "RigUnit_GetControlRotator.generated.h"

USTRUCT()
struct FRigUnit_GetControlRotator : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Control;
    
    UPROPERTY()
    EBoneGetterSetterMode Space;
    
    UPROPERTY()
    FRotator Rotator;
    
    UPROPERTY()
    FRotator Minimum;
    
    UPROPERTY()
    FRotator Maximum;
    
    UPROPERTY()
    FCachedRigElement CachedControlIndex;
    
    CONTROLRIG_API FRigUnit_GetControlRotator();
};

