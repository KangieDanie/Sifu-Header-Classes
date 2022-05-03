#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OnSwapGenderDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ECharacterGender -FallbackName=ECharacterGender
#include "AsyncTaskSwapGender.generated.h"

class UAsyncTaskSwapGender;
class UPlayerFightingComponent;

UCLASS()
class SIFU_API UAsyncTaskSwapGender : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnSwapGender OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FOnSwapGender OnFail;
    
    UAsyncTaskSwapGender();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskSwapGender* BPF_SwapGender(UPlayerFightingComponent* _playerComponent, ECharacterGender _eNewGender);
    
};

