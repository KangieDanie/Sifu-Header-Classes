#pragma once
#include "CoreMinimal.h"
#include "RigVMInstruction.h"
#include "RigVMInstructionArray.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMInstructionArray {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FRigVMInstruction> Instructions;
    
public:
    FRigVMInstructionArray();
};

