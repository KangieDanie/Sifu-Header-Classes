#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagAssetInterface -FallbackName=GameplayTagAssetInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameFlow.generated.h"

class UGameFlowNode;

UCLASS(BlueprintType)
class SCCORE_API UGameFlow : public UObject, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGameFlowNode* m_currentNode;
    
    UPROPERTY(Transient)
    UGameFlowNode* m_pendingNode;
    
    UPROPERTY(VisibleAnywhere)
    FName m_defaultMapTag;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, UGameFlowNode*> m_MapNodes;
    
    UGameFlow();
    UFUNCTION(BlueprintCallable)
    void BPF_ResetMapOption();
    
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveMapOption(FGameplayTag _optionToRemove);
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer BPF_GetMapOptions() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddMapOption(FGameplayTag _optionToAdd);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};
