#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "FilterPresetData.h"
#include "FilterNewPresetEntryDB.generated.h"

UCLASS(BlueprintType)
class SIFU_API UFilterNewPresetEntryDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFilterPresetData m_Data;
    
    UFilterNewPresetEntryDB();
};

