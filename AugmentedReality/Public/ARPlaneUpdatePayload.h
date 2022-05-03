#pragma once
#include "CoreMinimal.h"
#include "EARObjectClassification.h"
#include "ARSessionPayload.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ARPlaneUpdatePayload.generated.h"

USTRUCT(BlueprintType)
struct FARPlaneUpdatePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FARSessionPayload SessionPayload;
    
    UPROPERTY(BlueprintReadWrite)
    FTransform WorldTransform;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Center;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Extents;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FVector> BoundaryVertices;
    
    UPROPERTY(BlueprintReadOnly)
    EARObjectClassification ObjectClassification;
    
    AUGMENTEDREALITY_API FARPlaneUpdatePayload();
};

