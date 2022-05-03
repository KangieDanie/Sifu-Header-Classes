#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "WorldSave.h"
#include "SCStreamingLevelStateSavable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "SCGameData.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<FName, FWorldSave> m_WorldStatesSaved;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<FName, FSCStreamingLevelStateSavable> m_StreamingLevelsState;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FGameplayTagContainer m_AppliedCheats;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FGameplayTagContainer m_UnlockedAchievements;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<FGameplayTag, FGameplayTagContainer> m_NewlyUnlockedAchievements;
    
    FSCGameData();
};

