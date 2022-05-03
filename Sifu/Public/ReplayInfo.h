#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "ReplayInfo.generated.h"

USTRUCT(BlueprintType)
struct FReplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString m_ReplayName;
    
    UPROPERTY(BlueprintReadOnly)
    FString m_ReplayFriendlyName;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime m_Date;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_iChangeList;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_iReplayVersion;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_iLength;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsCorrupted;
    
    SIFU_API FReplayInfo();
};

