#pragma once
#include "CoreMinimal.h"
#include "RigVMBaseOp.h"
#include "RigVMUnaryOp.generated.h"

USTRUCT()
struct RIGVM_API FRigVMUnaryOp : public FRigVMBaseOp {
    GENERATED_BODY()
public:
    FRigVMUnaryOp();
};

