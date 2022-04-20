#pragma once
#include "CoreMinimal.h"
#include "EOSGetPlayerAvatarCompletePinDelegate.generated.h"

class UTexture;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEOSGetPlayerAvatarCompletePin, UTexture*, Avatar);

