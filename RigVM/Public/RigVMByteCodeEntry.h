#pragma once
#include "CoreMinimal.h"
#include "RigVMByteCodeEntry.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMByteCodeEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    int32 InstructionIndex;
    
    FRigVMByteCodeEntry();
};

