#pragma once
#include "CoreMinimal.h"
#include "RigVMMemoryStatistics.generated.h"

USTRUCT(BlueprintType)
struct FRigVMMemoryStatistics {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 RegisterCount;
    
    UPROPERTY(VisibleAnywhere)
    uint32 DataBytes;
    
    UPROPERTY(VisibleAnywhere)
    uint32 TotalBytes;
    
    RIGVM_API FRigVMMemoryStatistics();
};

