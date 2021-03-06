#pragma once
#include "CoreMinimal.h"
#include "NiagaraScriptExecutionPaddingInfo.h"
#include "NiagaraParameterStore.h"
#include "NiagaraScriptExecutionParameterStore.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 ParameterSize;
    
    UPROPERTY()
    uint32 PaddedParameterSize;
    
    UPROPERTY()
    TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo;
    
    UPROPERTY()
    uint8 bInitialized: 1;
    
    NIAGARA_API FNiagaraScriptExecutionParameterStore();
};

