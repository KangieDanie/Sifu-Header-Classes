#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ReplayKeyWidgetVisualKey.h"
#include "ReplayKeyWidgetVisualData.h"
#include "ReplayKeyWidgetVisualsDB.generated.h"

UCLASS(BlueprintType)
class SIFU_API UReplayKeyWidgetVisualsDB : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FReplayKeyWidgetVisualKey, FReplayKeyWidgetVisualData> m_Visuals;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FReplayKeyWidgetVisualData m_DefaultVisual;
    
public:
    UReplayKeyWidgetVisualsDB();
};

