#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OrderService.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "SafeZoneOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API USafeZoneOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_iMaxIterations;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseTargetSnapToBlend;
    
    UPROPERTY(EditAnywhere)
    float m_fBlendDuration;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_ClampZone;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_ZoneAnimFrameRange;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    FVector m_vNavMeshExtraZone;
    
    UPROPERTY(EditAnywhere)
    FVector m_vAdditionnalSpaceToTakeFromAnim;
    
    UPROPERTY(EditAnywhere)
    FName m_TargetBone;
    
    USafeZoneOrderService();
};

