#pragma once
#include "CoreMinimal.h"
#include "RigUnit_NameBase.h"
#include "RigUnit_EndsWith.generated.h"

USTRUCT()
struct FRigUnit_EndsWith : public FRigUnit_NameBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FName Ending;
    
    UPROPERTY()
    bool Result;
    
    CONTROLRIG_API FRigUnit_EndsWith();
};

