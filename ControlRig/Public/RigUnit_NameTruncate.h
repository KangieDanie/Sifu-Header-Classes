#pragma once
#include "CoreMinimal.h"
#include "RigUnit_NameBase.h"
#include "RigUnit_NameTruncate.generated.h"

USTRUCT()
struct FRigUnit_NameTruncate : public FRigUnit_NameBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    int32 Count;
    
    UPROPERTY()
    bool FromEnd;
    
    UPROPERTY()
    FName Remainder;
    
    UPROPERTY()
    FName Chopped;
    
    CONTROLRIG_API FRigUnit_NameTruncate();
};

