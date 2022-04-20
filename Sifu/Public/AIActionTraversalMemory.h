#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCAIActionMemoryEntry -FallbackName=SCAIActionMemoryEntry
#include "AIActionTraversalMemory.generated.h"

USTRUCT()
struct FAIActionTraversalMemory : public FSCAIActionMemoryEntry {
    GENERATED_BODY()
public:
    SIFU_API FAIActionTraversalMemory();
};

