#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "WorldReticleParameters.generated.h"

USTRUCT(BlueprintType)
struct FWorldReticleParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector AOEScale;
    
    GAMEPLAYABILITIES_API FWorldReticleParameters();
};

