#pragma once
#include "CoreMinimal.h"
#include "RigUnit_NameBase.h"
#include "RigUnit_NameReplace.generated.h"

USTRUCT()
struct FRigUnit_NameReplace : public FRigUnit_NameBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FName Old;
    
    UPROPERTY()
    FName New;
    
    UPROPERTY()
    FName Result;
    
    CONTROLRIG_API FRigUnit_NameReplace();
};

