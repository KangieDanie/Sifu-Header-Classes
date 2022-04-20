#pragma once
#include "CoreMinimal.h"
#include "RigVMByteCodeEntry.h"
#include "RigVMByteCode.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMByteCode {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<uint8> ByteCode;
    
    UPROPERTY()
    int32 NumInstructions;
    
    UPROPERTY()
    TArray<FRigVMByteCodeEntry> Entries;
    
public:
    FRigVMByteCode();
};

