#pragma once
#include "CoreMinimal.h"
#include "EOSWidgetDelegateDelegate.generated.h"

class UUserWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEOSWidgetDelegate, UUserWidget*, Widget);

