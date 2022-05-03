#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AchievementUnlockConditionSet.h"
#include "AchievementUnlockConditionStruct.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SCInGameAchievementsManagerSettings.generated.h"

UCLASS()
class SCCORE_API USCInGameAchievementsManagerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FAchievementUnlockConditionSet> m_InGameAchievements;
    
    UPROPERTY(EditAnywhere)
    TArray<FAchievementUnlockConditionSet> m_OnInitAchievements;
    
    UPROPERTY(EditAnywhere)
    TArray<FAchievementUnlockConditionSet> m_OnEntitlementQueryCompletedAchievements;
    
    UPROPERTY(EditAnywhere)
    TArray<FAchievementUnlockConditionSet> m_OnSaveLoadedAchievements;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_NewlyUnlockedCategories;
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, FAchievementUnlockConditionStruct> m_Unlocks;
    
    UPROPERTY(BlueprintAssignable)
    FOnObjectUnlockedDynamic m_OnObjectUnlocked;
    
    USCInGameAchievementsManagerSettings();
};

