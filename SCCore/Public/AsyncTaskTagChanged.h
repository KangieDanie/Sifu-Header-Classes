#pragma once
#include "CoreMinimal.h"
#include "OnTagChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OnTagUpdateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "AsyncTaskTagChanged.generated.h"

class UAsyncTaskTagChanged;
class UAbilitySystemComponent;

UCLASS()
class SCCORE_API UAsyncTaskTagChanged : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnTagChanged OnTagBegin;
    
    UPROPERTY(BlueprintAssignable)
    FOnTagUpdate OnTagUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FOnTagChanged OnTagEnd;
    
protected:
    UPROPERTY(Export)
    UAbilitySystemComponent* m_ASC;
    
public:
    UAsyncTaskTagChanged();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskTagChanged* ListenForTagsChange(UAbilitySystemComponent* _abilitySystemComponent, FGameplayTagContainer _tags);
    
    UFUNCTION(BlueprintCallable)
    void EndTask();
    
};

