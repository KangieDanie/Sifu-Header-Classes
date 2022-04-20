#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "EBoneGetterSetterMode.h"
#include "RigUnit_SetMultiControlRotator_Entry.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SetMultiControlRotator_Entry {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Control;
    
    UPROPERTY()
    FRotator Rotator;
    
    UPROPERTY()
    EBoneGetterSetterMode Space;
    
    CONTROLRIG_API FRigUnit_SetMultiControlRotator_Entry();
};

