#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ECharacterGender -FallbackName=ECharacterGender
#include "ECharacterStat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "DuplicatedSaveData.generated.h"

class UGameplayEffect;
class USkillGameplayEffect;

USTRUCT(BlueprintType)
struct FDuplicatedSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    ECharacterGender m_eGender;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TArray<TSubclassOf<UGameplayEffect>> m_ShrineEffects;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TArray<TSubclassOf<USkillGameplayEffect>> m_UnlockedSkills;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<ECharacterStat, float> m_DefaultStats;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FGameplayTagContainer m_PlayerTags;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FGameplayTagContainer m_GameplayTagContainer;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    float m_fMCDominationGauge;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    int32 m_iLastManGauge;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TArray<uint8> m_duplicatedSaveEntries;
    
    SIFU_API FDuplicatedSaveData();
};

