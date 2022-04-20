#pragma once
#include "CoreMinimal.h"
#include "RigVMMemoryStatistics.h"
#include "RigVMByteCodeStatistics.h"
#include "RigVMStatistics.generated.h"

USTRUCT()
struct FRigVMStatistics {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 BytesForCDO;
    
    UPROPERTY(VisibleAnywhere)
    uint32 BytesPerInstance;
    
    UPROPERTY(VisibleAnywhere)
    FRigVMMemoryStatistics LiteralMemory;
    
    UPROPERTY(VisibleAnywhere)
    FRigVMMemoryStatistics WorkMemory;
    
    UPROPERTY(VisibleAnywhere)
    uint32 BytesForCaching;
    
    UPROPERTY(VisibleAnywhere)
    FRigVMByteCodeStatistics ByteCode;
    
    RIGVM_API FRigVMStatistics();
};

