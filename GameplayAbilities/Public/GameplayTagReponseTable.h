#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "GameplayTagResponseTableEntry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagReponseTable.generated.h"

class UAbilitySystemComponent;

UCLASS()
class GAMEPLAYABILITIES_API UGameplayTagReponseTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FGameplayTagResponseTableEntry> Entries;
    
    UGameplayTagReponseTable();
protected:
    UFUNCTION()
    void TagResponseEvent(const FGameplayTag Tag, int32 NewCount, UAbilitySystemComponent* ASC, int32 idx);
    
};

