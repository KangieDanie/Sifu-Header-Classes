#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EyeTrackerGazeData.generated.h"

USTRUCT(BlueprintType)
struct FEyeTrackerGazeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector GazeOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector GazeDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector FixationPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ConfidenceValue;
    
    EYETRACKER_API FEyeTrackerGazeData();
};

