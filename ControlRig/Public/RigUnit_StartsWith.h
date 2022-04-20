#pragma once
#include "CoreMinimal.h"
#include "RigUnit_NameBase.h"
#include "RigUnit_StartsWith.generated.h"

USTRUCT()
struct FRigUnit_StartsWith : public FRigUnit_NameBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FName Start;
    
    UPROPERTY()
    bool Result;
    
    CONTROLRIG_API FRigUnit_StartsWith();
};

