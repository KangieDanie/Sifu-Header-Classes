#pragma once
#include "CoreMinimal.h"
#include "RigVMByteCodeStatistics.generated.h"

USTRUCT(BlueprintType)
struct FRigVMByteCodeStatistics {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 InstructionCount;
    
    UPROPERTY(VisibleAnywhere)
    uint32 DataBytes;
    
    RIGVM_API FRigVMByteCodeStatistics();
};

