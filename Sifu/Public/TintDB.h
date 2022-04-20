#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "TintData.h"
#include "ETintEnum.h"
#include "TintDB.generated.h"

UCLASS(BlueprintType)
class SIFU_API UTintDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ETintEnum, FTintData> m_TintsData;
    
    UTintDB();
};

