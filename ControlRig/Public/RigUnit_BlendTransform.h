#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "BlendTarget.h"
#include "RigUnit_BlendTransform.generated.h"

USTRUCT()
struct FRigUnit_BlendTransform : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Source;
    
    UPROPERTY()
    TArray<FBlendTarget> Targets;
    
    UPROPERTY()
    FTransform Result;
    
    CONTROLRIG_API FRigUnit_BlendTransform();
};

