#pragma once
#include "CoreMinimal.h"
#include "AISenseEvent.h"
#include "AISightEvent.h"
#include "AISenseEvent_Sight.generated.h"

UCLASS(EditInlineNew)
class AIMODULE_API UAISenseEvent_Sight : public UAISenseEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FAISightEvent Event;
    
    UAISenseEvent_Sight();
};

