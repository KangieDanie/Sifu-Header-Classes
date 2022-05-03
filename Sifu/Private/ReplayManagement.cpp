#include "ReplayManagement.h"

void UReplayManagement::BPF_ResetReplayEditorMetaData(const FString& _replayID) {
}

bool UReplayManagement::BPF_IsReplayVersionCompatible(int32 _iReplayVersion, int32 _iChangeList) {
    return false;
}

bool UReplayManagement::BPF_IsCurrentReplay(const FString& _replayID) const {
    return false;
}

UReplayManagement::UReplayManagement() {
}

