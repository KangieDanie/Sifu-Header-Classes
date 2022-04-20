#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_FitChainToCurve_WorkData.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_FitChainToCurve_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY()
    float ChainLength;
    
    UPROPERTY()
    TArray<FVector> ItemPositions;
    
    UPROPERTY()
    TArray<float> ItemSegments;
    
    UPROPERTY()
    TArray<FVector> CurvePositions;
    
    UPROPERTY()
    TArray<float> CurveSegments;
    
    UPROPERTY()
    TArray<FCachedRigElement> CachedItems;
    
    UPROPERTY()
    TArray<int32> ItemRotationA;
    
    UPROPERTY()
    TArray<int32> ItemRotationB;
    
    UPROPERTY()
    TArray<float> ItemRotationT;
    
    UPROPERTY()
    TArray<FTransform> ItemLocalTransforms;
    
    CONTROLRIG_API FRigUnit_FitChainToCurve_WorkData();
};

