#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_PointSimulation_DebugSettings.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_PointSimulation_DebugSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(EditAnywhere)
    float CollisionScale;
    
    UPROPERTY(EditAnywhere)
    bool bDrawPointsAsSpheres;
    
    UPROPERTY(EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(EditAnywhere)
    FTransform WorldOffset;
    
    CONTROLRIG_API FRigUnit_PointSimulation_DebugSettings();
};

