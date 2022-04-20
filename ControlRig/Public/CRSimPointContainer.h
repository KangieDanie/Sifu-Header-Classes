#pragma once
#include "CoreMinimal.h"
#include "CRSimContainer.h"
#include "CRSimLinearSpring.h"
#include "CRSimPoint.h"
#include "CRSimSoftCollision.h"
#include "CRSimPointForce.h"
#include "CRSimPointConstraint.h"
#include "CRSimPointContainer.generated.h"

USTRUCT()
struct FCRSimPointContainer : public FCRSimContainer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FCRSimPoint> Points;
    
    UPROPERTY()
    TArray<FCRSimLinearSpring> Springs;
    
    UPROPERTY()
    TArray<FCRSimPointForce> Forces;
    
    UPROPERTY()
    TArray<FCRSimSoftCollision> CollisionVolumes;
    
    UPROPERTY()
    TArray<FCRSimPointConstraint> Constraints;
    
protected:
    UPROPERTY()
    TArray<FCRSimPoint> PreviousStep;
    
public:
    CONTROLRIG_API FCRSimPointContainer();
};

