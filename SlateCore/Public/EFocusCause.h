#pragma once
#include "CoreMinimal.h"
#include "EFocusCause.generated.h"

UENUM()
enum class EFocusCause : uint8 {
    Mouse,
    Navigation,
    SetDirectly,
    Cleared,
    OtherWidgetLostFocus,
    WindowActivate,
};

