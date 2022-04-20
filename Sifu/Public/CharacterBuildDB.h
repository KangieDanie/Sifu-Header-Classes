#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ECharacterGender -FallbackName=ECharacterGender
#include "ECharacterStat.h"
#include "CharacterBuildDB.generated.h"

UCLASS()
class SIFU_API UCharacterBuildDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ECharacterGender m_eGender;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<ECharacterStat, float> m_DefaultStats;
    
    UCharacterBuildDB();
};

