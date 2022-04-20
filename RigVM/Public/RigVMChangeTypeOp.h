#pragma once
#include "CoreMinimal.h"
#include "RigVMUnaryOp.h"
#include "RigVMChangeTypeOp.generated.h"

USTRUCT()
struct RIGVM_API FRigVMChangeTypeOp : public FRigVMUnaryOp {
    GENERATED_BODY()
public:
    FRigVMChangeTypeOp();
};

