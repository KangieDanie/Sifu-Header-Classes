#pragma once
#include "CoreMinimal.h"
#include "ReplayInfo.h"
#include "ReplayListInfo.generated.h"

USTRUCT(BlueprintType)
struct FReplayListInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<FReplayInfo> m_ReplayInfos;
    
    SIFU_API FReplayListInfo();
};

