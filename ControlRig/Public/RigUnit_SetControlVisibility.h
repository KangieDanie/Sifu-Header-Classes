#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetControlVisibility.generated.h"

USTRUCT()
struct FRigUnit_SetControlVisibility : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Item;
    
    UPROPERTY()
    FString Pattern;
    
    UPROPERTY()
    bool bVisible;
    
    UPROPERTY()
    TArray<FCachedRigElement> CachedControlIndices;
    
    CONTROLRIG_API FRigUnit_SetControlVisibility();
};

