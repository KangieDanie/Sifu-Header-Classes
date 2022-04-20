#pragma once
#include "CoreMinimal.h"
#include "RigUnit_NameBase.h"
#include "RigUnit_Contains.generated.h"

USTRUCT()
struct FRigUnit_Contains : public FRigUnit_NameBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FName Search;
    
    UPROPERTY()
    bool Result;
    
    CONTROLRIG_API FRigUnit_Contains();
};

