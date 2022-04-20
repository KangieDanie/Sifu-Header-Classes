#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_IsInteracting.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigUnit_IsInteracting : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    bool bIsInteracting;
    
    FRigUnit_IsInteracting();
};

