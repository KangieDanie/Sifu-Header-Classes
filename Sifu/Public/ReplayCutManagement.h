#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ReplayCutManagement.generated.h"

class UReplayTimelineModel;
class UReplayKey;

UCLASS(BlueprintType)
class SIFU_API UReplayCutManagement : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UReplayTimelineModel* m_Model;
    
public:
    UReplayCutManagement();
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveCut(UReplayKey* _key);
    
    UFUNCTION(BlueprintPure)
    bool BPF_CanAddCut(float _fDemoTime) const;
    
};

