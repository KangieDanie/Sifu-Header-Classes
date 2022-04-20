#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_ModifyTransforms_PerItem.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_ModifyTransforms_PerItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRigElementKey Item;
    
    UPROPERTY(EditAnywhere)
    FTransform Transform;
    
    CONTROLRIG_API FRigUnit_ModifyTransforms_PerItem();
};

