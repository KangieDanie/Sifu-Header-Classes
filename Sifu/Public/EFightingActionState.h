#pragma once
#include "CoreMinimal.h"
#include "EFightingActionState.generated.h"

UENUM()
enum class EFightingActionState : uint8 {
    None,
    FreeMove,
    LockMove,
    RushMove,
    Dodge,
    Grab,
    Attack,
    Hit,
    Inventory,
    Equipment,
    Options,
    SpecialAbility,
    Parried,
    Dead,
    Cancel,
    ItemUse,
    FlyMode,
    Down,
    Cinematic,
    StoreResource,
    Takedown,
    BeingTakendown,
    Guard,
    Teleport,
    PushFromGrab,
    Fall,
    ThrowObject,
    PushObject,
    PickUpObject,
    DropObject,
    Reaction,
    IdleExit,
    Traversal,
    PrepFocus,
    SynchronizedAttackInstigator,
    SynchronizedAttackVictim,
    ParrySuccess,
    ParryFromDown,
    TraversalCinematic,
    DeflectSB,
    Avoid,
    AttackEnv,
    FightingStateRecovery,
    OpeningDoor,
    PlayAnim,
    Count,
};
