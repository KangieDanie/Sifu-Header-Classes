#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "CachedRigElement.generated.h"

USTRUCT()
struct FCachedRigElement {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FRigElementKey Key;
    
    UPROPERTY()
    uint16 Index;
    
    UPROPERTY()
    int32 ContainerVersion;
    
public:
    CONTROLRIG_API FCachedRigElement();
};

