#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMCopyOp.generated.h"

USTRUCT()
struct RIGVM_API FRigVMCopyOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    FRigVMCopyOp();
};

