#include "CheatManagerBlueprintHelper.h"

void UCheatManagerBlueprintHelper::BPF_UnapplyCheats(bool _bDeactivateCheats) {
}

bool UCheatManagerBlueprintHelper::BPF_IsCheatActivated(FGameplayTag _cheatToFind) {
    return false;
}

bool UCheatManagerBlueprintHelper::BPF_HasAppliedCheats() {
    return false;
}

FGameplayTagContainer UCheatManagerBlueprintHelper::BPF_GetActivatedCheats() {
    return FGameplayTagContainer{};
}

void UCheatManagerBlueprintHelper::BPF_DeactivateCheats(FGameplayTagContainer _cheatsToDeactivate) {
}

void UCheatManagerBlueprintHelper::BPF_DeactivateCheat(FGameplayTag _cheatToDeactivate) {
}

bool UCheatManagerBlueprintHelper::BPF_AreCheatsAllowed() {
    return false;
}

void UCheatManagerBlueprintHelper::BPF_ApplyCheats(bool _bForceApply) {
}

void UCheatManagerBlueprintHelper::BPF_ActivateCheats(FGameplayTagContainer _cheatsToActivate) {
}

void UCheatManagerBlueprintHelper::BPF_ActivateCheat(FGameplayTag _cheatToActivate) {
}

UCheatManagerBlueprintHelper::UCheatManagerBlueprintHelper() {
}

