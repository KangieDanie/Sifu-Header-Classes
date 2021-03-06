#pragma once
#include "CoreMinimal.h"
#include "ARSessionPayload.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ARImageUpdatePayload.generated.h"

class UARCandidateImage;

USTRUCT(BlueprintType)
struct FARImageUpdatePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FARSessionPayload SessionPayload;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform WorldTransform;
    
    UPROPERTY(BlueprintReadOnly)
    UARCandidateImage* DetectedImage;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D EstimatedSize;
    
    AUGMENTEDREALITY_API FARImageUpdatePayload();
};

