#include "AkReplication.h"

class AActor;
class UAkRtpc;
class UAkAudioBank;

void UAkReplication::MulticastSetState_Implementation(uint32 _uiGroupID, uint32 _uiValueID) const {
}

void UAkReplication::MulticastSetRTPCValueWithName_Implementation(const FString& _rtpcName, float _akRtpcValue, int32 _iInterpolationTimeMs, const AActor* _actor) const {
}

void UAkReplication::MulticastSetRTPCValue_Implementation(const UAkRtpc* _uakRtpcValue, float _akRtpcValue, int32 _iInterpolationTimeMs, const AActor* _actor) const {
}

void UAkReplication::MulticastPostEventAtLocation_Implementation(const FString& _eventName, const FVector& _vLocation, const FRotator& _rotation) const {
}

void UAkReplication::MulticastPostEvent_Implementation(const FString& _eventName, const AActor* _owner, uint32 _uFlags) const {
}

void UAkReplication::MulticastLoadBanks_Implementation(const TArray<UAkAudioBank*>& _banks) const {
}

UAkReplication::UAkReplication() {
}

