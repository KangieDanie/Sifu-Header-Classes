#pragma once
#include "CoreMinimal.h"
#include "EAbilityGenericReplicatedEvent.generated.h"

UENUM()
namespace EAbilityGenericReplicatedEvent {
    enum Type {
        GenericConfirm,
        GenericCancel,
        InputPressed,
        InputReleased,
        GenericSignalFromClient,
        GenericSignalFromServer,
        GameCustom1,
        GameCustom2,
        GameCustom3,
        GameCustom4,
        GameCustom5,
        GameCustom6,
        MAX,
    };
}

