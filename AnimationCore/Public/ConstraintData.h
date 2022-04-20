#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ConstraintDescriptor.h"
#include "ConstraintData.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONCORE_API FConstraintData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FConstraintDescriptor Constraint;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    bool bMaintainOffset;
    
    UPROPERTY()
    FTransform Offset;
    
    UPROPERTY(Transient)
    FTransform CurrentTransform;
    
    FConstraintData();
};

