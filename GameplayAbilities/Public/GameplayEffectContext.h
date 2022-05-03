#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GameplayEffectContext.generated.h"

class UAbilitySystemComponent;
class AActor;
class UGameplayAbility;
class UObject;

USTRUCT()
struct GAMEPLAYABILITIES_API FGameplayEffectContext {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TWeakObjectPtr<AActor> Instigator;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> EffectCauser;
    
    UPROPERTY()
    TWeakObjectPtr<UGameplayAbility> AbilityCDO;
    
    UPROPERTY(NotReplicated)
    TWeakObjectPtr<UGameplayAbility> AbilityInstanceNotReplicated;
    
    UPROPERTY()
    int32 AbilityLevel;
    
    UPROPERTY()
    TWeakObjectPtr<UObject> SourceObject;
    
    UPROPERTY(Export, NotReplicated)
    TWeakObjectPtr<UAbilitySystemComponent> InstigatorAbilitySystemComponent;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<AActor>> Actors;
    
    UPROPERTY()
    FVector WorldOrigin;
    
    UPROPERTY()
    uint8 bHasWorldOrigin: 1;
    
    UPROPERTY()
    uint8 bReplicateSourceObject: 1;
    
public:
    FGameplayEffectContext();
};

