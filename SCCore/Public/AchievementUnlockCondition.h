#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "AchievementUnlockCondition.generated.h"

class UWorld;

UCLASS(Abstract, Blueprintable)
class SCCORE_API UAchievementUnlockCondition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag m_AchievementTag;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomAchievementTag;
    
protected:
    UPROPERTY(Transient)
    UWorld* m_World;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> m_MapWhereUnlockAllowed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bCheatsAllowed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer m_NeededCheats;
    
public:
    UAchievementUnlockCondition();
    UFUNCTION(BlueprintCallable)
    void BPF_UnlockAchievement(bool _bShutdownCondition);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_SetAchievementTag(FGameplayTag _newAchievementTag);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ConditionFailed();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_UnlockAchievement_Debug();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnMatchEnded(bool _bHasWon);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_Init();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool BPE_CanBeUnlocked(const UWorld* _world) const;
    
};

