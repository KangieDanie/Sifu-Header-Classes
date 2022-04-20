#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ReplayReplicationProxyBase -FallbackName=ReplayReplicationProxyBase
#include "ReplayReplicationProxy.generated.h"

UCLASS()
class SIFU_API AReplayReplicationProxy : public AReplayReplicationProxyBase {
    GENERATED_BODY()
public:
    AReplayReplicationProxy();
};

