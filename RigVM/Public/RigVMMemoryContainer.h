#pragma once
#include "CoreMinimal.h"
#include "ERigVMMemoryType.h"
#include "RigVMRegister.h"
#include "RigVMRegisterOffset.h"
#include "RigVMMemoryContainer.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMMemoryContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool bUseNameMap;
    
    UPROPERTY()
    ERigVMMemoryType MemoryType;
    
    UPROPERTY()
    TArray<FRigVMRegister> Registers;
    
    UPROPERTY()
    TArray<FRigVMRegisterOffset> RegisterOffsets;
    
    UPROPERTY(Transient)
    TArray<uint8> Data;
    
    UPROPERTY(Transient)
    TArray<UScriptStruct*> ScriptStructs;
    
    UPROPERTY(Transient)
    TMap<FName, int32> NameMap;
    
    UPROPERTY(Transient)
    bool bEncounteredErrorDuringLoad;
    
public:
    FRigVMMemoryContainer();
};

