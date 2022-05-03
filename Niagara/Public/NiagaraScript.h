#pragma once
#include "CoreMinimal.h"
#include "NiagaraScriptExecutionParameterStore.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraShader -ObjectName=NiagaraScriptBase -FallbackName=NiagaraScriptBase
#include "NiagaraVMExecutableDataId.h"
#include "ENiagaraScriptUsage.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "NiagaraParameterStore.h"
#include "NiagaraBoundParameter.h"
#include "NiagaraVMExecutableData.h"
#include "NiagaraScriptDataInterfaceInfo.h"
#include "NiagaraScript.generated.h"

class UNiagaraParameterCollection;

UCLASS(MinimalAPI)
class UNiagaraScript : public UNiagaraScriptBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable)
    ENiagaraScriptUsage Usage;
    
    UPROPERTY()
    int32 UsageIndex;
    
private:
    UPROPERTY()
    FGuid UsageId;
    
public:
    UPROPERTY()
    FNiagaraParameterStore RapidIterationParameters;
    
private:
    UPROPERTY()
    FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore;
    
    UPROPERTY()
    TArray<FNiagaraBoundParameter> ScriptExecutionBoundParameters;
    
    UPROPERTY()
    FNiagaraVMExecutableDataId CachedScriptVMId;
    
    UPROPERTY()
    FNiagaraVMExecutableData CachedScriptVM;
    
    UPROPERTY()
    TArray<UNiagaraParameterCollection*> CachedParameterCollectionReferences;
    
    UPROPERTY()
    TArray<FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;
    
public:
    UNiagaraScript();
    UFUNCTION()
    void RaiseOnGPUCompilationComplete();
    
};

