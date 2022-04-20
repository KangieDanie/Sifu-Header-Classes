#pragma once
#include "CoreMinimal.h"
#include "ERigVMParameterType.h"
#include "RigVMParameter.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMParameter {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ERigVMParameterType Type;
    
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    int32 RegisterIndex;
    
    UPROPERTY()
    FString CPPType;
    
    UPROPERTY(Transient)
    UScriptStruct* ScriptStruct;
    
    UPROPERTY()
    FName ScriptStructPath;
    
public:
    FRigVMParameter();
};

