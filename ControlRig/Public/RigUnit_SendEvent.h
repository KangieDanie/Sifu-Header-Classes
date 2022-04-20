#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigUnitMutable.h"
#include "ERigEvent.h"
#include "RigUnit_SendEvent.generated.h"

USTRUCT()
struct FRigUnit_SendEvent : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    ERigEvent Event;
    
    UPROPERTY()
    FRigElementKey Item;
    
    UPROPERTY()
    float OffsetInSeconds;
    
    UPROPERTY()
    bool bEnable;
    
    UPROPERTY()
    bool bOnlyDuringInteraction;
    
    CONTROLRIG_API FRigUnit_SendEvent();
};

