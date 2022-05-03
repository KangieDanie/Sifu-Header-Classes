#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "NetSerializeScriptStructCache.h"
#include "EGameplayModEvaluationChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "AbilitySystemGlobals.generated.h"

class UDataTable;
class UGameplayCueManager;
class UCurveTable;
class UGameplayTagReponseTable;

UCLASS(Config=Game)
class GAMEPLAYABILITIES_API UAbilitySystemGlobals : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    FSoftClassPath AbilitySystemGlobalsClassName;
    
    UPROPERTY()
    FGameplayTag ActivateFailIsDeadTag;
    
    UPROPERTY(Config)
    FName ActivateFailIsDeadName;
    
    UPROPERTY()
    FGameplayTag ActivateFailCooldownTag;
    
    UPROPERTY(Config)
    FName ActivateFailCooldownName;
    
    UPROPERTY()
    FGameplayTag ActivateFailCostTag;
    
    UPROPERTY(Config)
    FName ActivateFailCostName;
    
    UPROPERTY()
    FGameplayTag ActivateFailTagsBlockedTag;
    
    UPROPERTY(Config)
    FName ActivateFailTagsBlockedName;
    
    UPROPERTY()
    FGameplayTag ActivateFailTagsMissingTag;
    
    UPROPERTY(Config)
    FName ActivateFailTagsMissingName;
    
    UPROPERTY()
    FGameplayTag ActivateFailNetworkingTag;
    
    UPROPERTY(Config)
    FName ActivateFailNetworkingName;
    
    UPROPERTY(Config)
    int32 MinimalReplicationTagCountBits;
    
    UPROPERTY()
    FNetSerializeScriptStructCache TargetDataStructCache;
    
protected:
    UPROPERTY(Config)
    bool bAllowGameplayModEvaluationChannels;
    
    UPROPERTY(Config)
    EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel;
    
    UPROPERTY(Config)
    FName GameplayModEvaluationChannelAliases[10];
    
    UPROPERTY(Config)
    FSoftObjectPath GlobalCurveTableName;
    
    UPROPERTY()
    UCurveTable* GlobalCurveTable;
    
    UPROPERTY(Config)
    FSoftObjectPath GlobalAttributeMetaDataTableName;
    
    UPROPERTY()
    UDataTable* GlobalAttributeMetaDataTable;
    
    UPROPERTY(Config)
    FSoftObjectPath GlobalAttributeSetDefaultsTableName;
    
    UPROPERTY(Config)
    TArray<FSoftObjectPath> GlobalAttributeSetDefaultsTableNames;
    
    UPROPERTY()
    TArray<UCurveTable*> GlobalAttributeDefaultsTables;
    
    UPROPERTY(Config)
    FSoftObjectPath GlobalGameplayCueManagerClass;
    
    UPROPERTY(Config)
    FSoftObjectPath GlobalGameplayCueManagerName;
    
    UPROPERTY(Config)
    TArray<FString> GameplayCueNotifyPaths;
    
    UPROPERTY(Config)
    FSoftObjectPath GameplayTagResponseTableName;
    
    UPROPERTY()
    UGameplayTagReponseTable* GameplayTagResponseTable;
    
    UPROPERTY(Config)
    bool PredictTargetGameplayEffects;
    
    UPROPERTY()
    UGameplayCueManager* GlobalGameplayCueManager;
    
public:
    UAbilitySystemGlobals();
    UFUNCTION(Exec)
    void ToggleIgnoreAbilitySystemCosts();
    
    UFUNCTION(Exec)
    void ToggleIgnoreAbilitySystemCooldowns();
    
    UFUNCTION(Exec)
    void ServerEndPlayerAbility(const FString& AbilityNameMatch);
    
    UFUNCTION(Exec)
    void ServerCancelPlayerAbility(const FString& AbilityNameMatch);
    
    UFUNCTION(Exec)
    void ServerActivatePlayerAbility(const FString& AbilityNameMatch);
    
    UFUNCTION(Exec)
    void ListPlayerAbilities();
    
};

