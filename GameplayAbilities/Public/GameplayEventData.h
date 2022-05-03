#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayEffectContextHandle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayAbilityTargetDataHandle.h"
#include "GameplayEventData.generated.h"

class AActor;
class UObject;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag EventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* OptionalObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* OptionalObject2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayEffectContextHandle ContextHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer InstigatorTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer TargetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EventMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayAbilityTargetDataHandle TargetData;
    
    FGameplayEventData();
};

