#pragma once
#include "CoreMinimal.h"
#include "RigUnit_NameBase.h"
#include "RigUnit_NameConcat.generated.h"

USTRUCT()
struct FRigUnit_NameConcat : public FRigUnit_NameBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName A;
    
    UPROPERTY()
    FName B;
    
    UPROPERTY()
    FName Result;
    
    CONTROLRIG_API FRigUnit_NameConcat();
};

