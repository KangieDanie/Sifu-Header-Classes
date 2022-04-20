#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "CharacterSaveDescription.h"
#include "MappingSave.h"
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
    
    SCCORE_API FSCProfileData();
};

