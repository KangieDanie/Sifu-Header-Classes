#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EGearRarity.h"
#include "PictoData.h"
#include "SequenceCheckPointData.h"
#include "LootBoxOpeningSequenceDB.generated.h"

UCLASS(BlueprintType)
class SIFU_API ULootBoxOpeningSequenceDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EGearRarity, FPictoData> m_pictosData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fSequenceStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fSequenceEnd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSequenceCheckPointData> m_sequenceCheckPointsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fLoopPlayBackStartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fLoopPlayBackEndPosition;
    
    ULootBoxOpeningSequenceDB();
};

