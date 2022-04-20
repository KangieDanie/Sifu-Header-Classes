#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "FilterPresetData.h"
#include "FilterPresetEntryDB.generated.h"

UCLASS(BlueprintType)
class SIFU_API UFilterPresetEntryDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFilterPresetData m_Data;
    
    UFilterPresetEntryDB();
};

