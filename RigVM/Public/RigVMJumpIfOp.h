#pragma once
#include "CoreMinimal.h"
#include "RigVMUnaryOp.h"
#include "RigVMJumpIfOp.generated.h"

USTRUCT()
struct RIGVM_API FRigVMJumpIfOp : public FRigVMUnaryOp {
    GENERATED_BODY()
public:
    FRigVMJumpIfOp();
};

