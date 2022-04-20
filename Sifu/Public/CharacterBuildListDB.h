#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CharacterBuildListDB.generated.h"

class UCharacterBuildDB;

UCLASS(BlueprintType)
class SIFU_API UCharacterBuildListDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UCharacterBuildDB*> m_CharacterBuilds;
    
    UCharacterBuildListDB();
};

