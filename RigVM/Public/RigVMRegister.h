#pragma once
#include "CoreMinimal.h"
#include "ERigVMRegisterType.h"
#include "RigVMRegister.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMRegister {
    GENERATED_BODY()
public:
    UPROPERTY()
    ERigVMRegisterType Type;
    
    UPROPERTY()
    uint32 ByteIndex;
    
    UPROPERTY()
    uint16 ElementSize;
    
    UPROPERTY()
    uint16 ElementCount;
    
    UPROPERTY()
    uint16 SliceCount;
    
    UPROPERTY()
    uint8 AlignmentBytes;
    
    UPROPERTY()
    uint16 TrailingBytes;
    
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    int32 ScriptStructIndex;
    
    UPROPERTY()
    bool bIsArray;
    
    UPROPERTY()
    bool bIsDynamic;
    
    FRigVMRegister();
};

