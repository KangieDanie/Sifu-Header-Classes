#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "GameplayCueNotifyData.generated.h"

USTRUCT(BlueprintType)
struct FGameplayCueNotifyData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag GameplayCueTag;
    
    UPROPERTY(EditAnywhere)
    FSoftObjectPath GameplayCueNotifyObj;
    
    UPROPERTY(Transient)
    UClass* LoadedGameplayCueClass;
    
    GAMEPLAYABILITIES_API FGameplayCueNotifyData();
};

