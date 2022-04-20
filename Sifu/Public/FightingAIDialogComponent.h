#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCDialogManagerPlugin -ObjectName=SCDialogComponent -FallbackName=SCDialogComponent
#include "FightingAIDialogComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UFightingAIDialogComponent : public USCDialogComponent {
    GENERATED_BODY()
public:
    UFightingAIDialogComponent();
};

