#include "ARDependencyHandler.h"

class UARSessionConfig;
class UObject;
class UARDependencyHandler;

void UARDependencyHandler::StartARSessionLatent(UObject* WorldContextObject, UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo) {
}

void UARDependencyHandler::RequestARSessionPermission(UObject* WorldContextObject, UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo, EARServicePermissionRequestResult& OutPermissionResult) {
}

void UARDependencyHandler::InstallARService(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceInstallRequestResult& OutInstallResult) {
}

UARDependencyHandler* UARDependencyHandler::GetARDependencyHandler() {
    return NULL;
}

void UARDependencyHandler::CheckARServiceAvailability(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceAvailability& OutAvailability) {
}

UARDependencyHandler::UARDependencyHandler() {
}

