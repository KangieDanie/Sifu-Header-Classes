#pragma once
#include "CoreMinimal.h"
#include "SCImpostorReplicationInfos.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ReplayReplicationComponentBase -FallbackName=ReplayReplicationComponentBase
#include "ImpostorReplication.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API UImpostorReplication : public UReplayReplicationComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    TArray<FSCImpostorReplicationInfos> m_Impostors;
    
public:
    UImpostorReplication();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

