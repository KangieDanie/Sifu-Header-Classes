#pragma once
#include "CoreMinimal.h"
#include "ERigVMOpCode.h"
#include "RigVMInstruction.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMInstruction {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint64 ByteCodeIndex;
    
    UPROPERTY()
    ERigVMOpCode OpCode;
    
    UPROPERTY()
    uint8 OperandAlignment;
    
    FRigVMInstruction();
};

