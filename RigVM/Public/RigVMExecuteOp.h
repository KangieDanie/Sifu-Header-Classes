#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMExecuteOp.generated.h"

USTRUCT()
struct RIGVM_API FRigVMExecuteOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    FRigVMExecuteOp();
};

