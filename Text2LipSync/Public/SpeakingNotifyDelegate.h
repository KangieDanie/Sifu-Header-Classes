#pragma once
#include "CoreMinimal.h"
#include "SpeakingNotifyDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpeakingNotify, const FName&, NotifyName, float, CurrentTime);

