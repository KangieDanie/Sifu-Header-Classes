#pragma once
#include "CoreMinimal.h"
#include "ERigVMRegisterType.h"
#include "RigVMRegisterOffset.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMRegisterOffset {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<int32> Segments;
    
    UPROPERTY()
    ERigVMRegisterType Type;
    
    UPROPERTY()
    FName CPPType;
    
    UPROPERTY()
    UScriptStruct* ScriptStruct;
    
    UPROPERTY()
    UScriptStruct* ParentScriptStruct;
    
    UPROPERTY()
    int32 ArrayIndex;
    
    UPROPERTY()
    uint16 ElementSize;
    
    UPROPERTY()
    FString CachedSegmentPath;
    
public:
    FRigVMRegisterOffset();
};

