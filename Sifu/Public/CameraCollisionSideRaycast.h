#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CameraCollisionSideRaycast.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FCameraCollisionSideRaycast {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FVector m_vStartLocal;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vEndLocal;
    
    FCameraCollisionSideRaycast();
};

