#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "MappingSave.h"
#include "CharacterSaveDescription.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SCProfileData.generated.h"

USTRUCT(BlueprintType)
struct FSCProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame, VisibleAnywhere)
    FDateTime m_SaveTimeStamp;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    TArray<FCharacterSaveDescription> m_SaveListNames;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FString m_FirstSave;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TArray<FMappingSave> m_Mapping;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FString m_AudioCulture;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FString m_TextCulture;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FGameplayTagContainer m_UnlockedAchievements;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    TMap<FGameplayTag, FGameplayTagContainer> m_NewlyUnlockedAchievements;
    
    SCCORE_API FSCProfileData();
};

