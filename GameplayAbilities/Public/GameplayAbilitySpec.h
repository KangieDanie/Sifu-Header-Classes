#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayAbilitySpecHandle.h"
#include "GameplayAbilityActivationInfo.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilitySpec.generated.h"

class UGameplayAbility;
class UObject;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAbilitySpec : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayAbilitySpecHandle Handle;
    
    UPROPERTY()
    UGameplayAbility* Ability;
    
    UPROPERTY()
    int32 Level;
    
    UPROPERTY()
    int32 InputID;
    
    UPROPERTY()
    UObject* SourceObject;
    
    UPROPERTY(NotReplicated)
    uint8 ActiveCount;
    
    UPROPERTY(NotReplicated)
    uint8 InputPressed: 1;
    
    UPROPERTY(NotReplicated)
    uint8 RemoveAfterActivation: 1;
    
    UPROPERTY(NotReplicated)
    uint8 PendingRemove: 1;
    
    UPROPERTY(NotReplicated)
    uint8 bActivateOnce: 1;
    
    UPROPERTY(NotReplicated)
    FGameplayAbilityActivationInfo ActivationInfo;
    
    UPROPERTY()
    FGameplayTagContainer DynamicAbilityTags;
    
    UPROPERTY(NotReplicated)
    TArray<UGameplayAbility*> NonReplicatedInstances;
    
    UPROPERTY()
    TArray<UGameplayAbility*> ReplicatedInstances;
    
    UPROPERTY(NotReplicated)
    FActiveGameplayEffectHandle GameplayEffectHandle;
    
    FGameplayAbilitySpec();
};

