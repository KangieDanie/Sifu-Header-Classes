#pragma once
#include "CoreMinimal.h"
#include "DestructibleWakeStateDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDestructibleWakeStateDelegate, bool, bIsAwake);

