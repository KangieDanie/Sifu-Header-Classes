#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ReplayReplicationComponentBase -FallbackName=ReplayReplicationComponentBase
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "AkReplication.generated.h"

class AActor;
class UAkRtpc;
class UAkAudioBank;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkReplication : public UReplayReplicationComponentBase {
    GENERATED_BODY()
public:
    UAkReplication();
protected:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSetState(uint32 _uiGroupID, uint32 _uiValueID) const;
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSetRTPCValueWithName(const FString& _rtpcName, float _akRtpcValue, int32 _iInterpolationTimeMs, const AActor* _actor) const;
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSetRTPCValue(const UAkRtpc* _uakRtpcValue, float _akRtpcValue, int32 _iInterpolationTimeMs, const AActor* _actor) const;
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastPostEventAtLocation(const FString& _eventName, const FVector& _vLocation, const FRotator& _rotation) const;
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastPostEvent(const FString& _eventName, const AActor* _owner, uint32 _uFlags) const;
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastLoadBanks(const TArray<UAkAudioBank*>& _banks) const;
    
};

