#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMJumpOp.generated.h"

USTRUCT()
struct RIGVM_API FRigVMJumpOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    FRigVMJumpOp();
};

