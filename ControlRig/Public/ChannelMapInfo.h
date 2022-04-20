#pragma once
#include "CoreMinimal.h"
#include "ChannelMapInfo.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FChannelMapInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 ControlIndex;
    
    UPROPERTY()
    int32 TotalChannelIndex;
    
    UPROPERTY()
    int32 ChannelIndex;
    
    UPROPERTY()
    int32 ParentControlIndex;
    
    UPROPERTY()
    FName ChannelTypeName;
    
    FChannelMapInfo();
};

