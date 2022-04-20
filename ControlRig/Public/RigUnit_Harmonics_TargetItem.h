#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnit_Harmonics_TargetItem.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_Harmonics_TargetItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Item;
    
    UPROPERTY()
    float Ratio;
    
    CONTROLRIG_API FRigUnit_Harmonics_TargetItem();
};

