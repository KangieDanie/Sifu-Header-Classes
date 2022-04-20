#pragma once
#include "CoreMinimal.h"
#include "AnimationBudgetAllocatorParameters.generated.h"

USTRUCT(BlueprintType)
struct FAnimationBudgetAllocatorParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float BudgetInMs;
    
    UPROPERTY(BlueprintReadWrite)
    float MinQuality;
    
    UPROPERTY(BlueprintReadWrite)
    int32 MaxTickRate;
    
    UPROPERTY(BlueprintReadWrite)
    float WorkUnitSmoothingSpeed;
    
    UPROPERTY(BlueprintReadWrite)
    float AlwaysTickFalloffAggression;
    
    UPROPERTY(BlueprintReadWrite)
    float InterpolationFalloffAggression;
    
    UPROPERTY(BlueprintReadWrite)
    int32 InterpolationMaxRate;
    
    UPROPERTY(BlueprintReadWrite)
    int32 MaxInterpolatedComponents;
    
    UPROPERTY(BlueprintReadWrite)
    float InterpolationTickMultiplier;
    
    UPROPERTY(BlueprintReadWrite)
    float InitialEstimatedWorkUnitTimeMs;
    
    UPROPERTY(BlueprintReadWrite)
    int32 MaxTickedOffsreenComponents;
    
    UPROPERTY(BlueprintReadWrite)
    int32 StateChangeThrottleInFrames;
    
    UPROPERTY(BlueprintReadWrite)
    float BudgetFactorBeforeReducedWork;
    
    UPROPERTY(BlueprintReadWrite)
    float BudgetFactorBeforeReducedWorkEpsilon;
    
    UPROPERTY(BlueprintReadWrite)
    float BudgetPressureSmoothingSpeed;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ReducedWorkThrottleMinInFrames;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ReducedWorkThrottleMaxInFrames;
    
    UPROPERTY(BlueprintReadWrite)
    float BudgetFactorBeforeAggressiveReducedWork;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ReducedWorkThrottleMaxPerFrame;
    
    UPROPERTY(BlueprintReadWrite)
    float BudgetPressureBeforeEmergencyReducedWork;
    
    ANIMATIONBUDGETALLOCATOR_API FAnimationBudgetAllocatorParameters();
};

