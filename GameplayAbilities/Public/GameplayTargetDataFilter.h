#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETargetDataFilterSelf.h"
#include "GameplayTargetDataFilter.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayTargetDataFilter {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* SelfActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> RequiredActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETargetDataFilterSelf::Type> SelfFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bReverseFilter;
    
    FGameplayTargetDataFilter();
};

