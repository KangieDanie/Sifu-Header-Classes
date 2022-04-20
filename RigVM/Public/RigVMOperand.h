#pragma once
#include "CoreMinimal.h"
#include "ERigVMMemoryType.h"
#include "RigVMOperand.generated.h"

USTRUCT()
struct RIGVM_API FRigVMOperand {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ERigVMMemoryType MemoryType;
    
    UPROPERTY()
    uint16 RegisterIndex;
    
    UPROPERTY()
    uint16 RegisterOffset;
    
public:
    FRigVMOperand();
};

