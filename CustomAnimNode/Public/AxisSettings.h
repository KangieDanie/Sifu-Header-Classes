#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
#include "AxisSettings.generated.h"

USTRUCT(BlueprintType)
struct FAxisSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> YawRotationAxis;
    
    UPROPERTY(EditAnywhere)
    float BodyOrientationAlpha;
    
    CUSTOMANIMNODE_API FAxisSettings();
};

