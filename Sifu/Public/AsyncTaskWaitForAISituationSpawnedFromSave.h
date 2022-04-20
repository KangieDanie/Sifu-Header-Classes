#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OnSpawnedDelegate.h"
#include "AsyncTaskWaitForAISituationSpawnedFromSave.generated.h"

class AAISituationActor;
class UAsyncTaskWaitForAISituationSpawnedFromSave;

UCLASS()
class SIFU_API UAsyncTaskWaitForAISituationSpawnedFromSave : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnSpawned AllSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FOnSpawned NothingToSpawn;
    
    UAsyncTaskWaitForAISituationSpawnedFromSave();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskWaitForAISituationSpawnedFromSave* BPF_WaitForAISituationToSpawnFromSave(const TArray<AAISituationActor*> _situationsToWaitFor);
    
};

