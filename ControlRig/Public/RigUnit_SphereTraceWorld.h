#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "RigUnit_SphereTraceWorld.generated.h"

USTRUCT()
struct FRigUnit_SphereTraceWorld : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Start;
    
    UPROPERTY()
    FVector End;
    
    UPROPERTY()
    TEnumAsByte<ECollisionChannel> Channel;
    
    UPROPERTY()
    float Radius;
    
    UPROPERTY()
    bool bHit;
    
    UPROPERTY()
    FVector HitLocation;
    
    UPROPERTY()
    FVector HitNormal;
    
    CONTROLRIG_API FRigUnit_SphereTraceWorld();
};

