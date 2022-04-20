#pragma once
#include "CoreMinimal.h"
#include "OculusIdentitySuccessResultDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOculusIdentitySuccessResult, const FString&, OculusId, const FString&, OculusName);

