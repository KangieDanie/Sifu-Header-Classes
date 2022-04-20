#pragma once
#include "CoreMinimal.h"
#include "ControlRigComponentDelegateDelegate.generated.h"

class UControlRigComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControlRigComponentDelegate, UControlRigComponent*, Component);

