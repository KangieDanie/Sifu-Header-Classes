#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ECRSimSoftCollisionType.h"
#include "EControlRigAnimEasingType.h"
#include "CRSimSoftCollision.generated.h"

USTRUCT(BlueprintType)
struct FCRSimSoftCollision {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    ECRSimSoftCollisionType ShapeType;
    
    UPROPERTY()
    float MinimumDistance;
    
    UPROPERTY()
    float MaximumDistance;
    
    UPROPERTY()
    EControlRigAnimEasingType FalloffType;
    
    UPROPERTY()
    float Coefficient;
    
    UPROPERTY()
    bool bInverted;
    
    CONTROLRIG_API FCRSimSoftCollision();
};

