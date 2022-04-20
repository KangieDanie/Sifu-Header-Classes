#pragma once
#include "CoreMinimal.h"
#include "EGameModeTypes.h"
#include "CoopGroupMemberInfo.h"
#include "CoopGroup.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FCoopGroup {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FCoopGroupMemberInfo> m_GroupMemberInfos;
    
    UPROPERTY()
    EGameModeTypes m_eGameModeType;
    
    FCoopGroup();
};

