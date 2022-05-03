#pragma once
#include "CoreMinimal.h"
#include "HitBox.h"
#include "NetOrderStructPlayAnim.h"
#include "ERagingBullPhase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "NetOrderStructRagingBull.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructRagingBull : public FNetOrderStructPlayAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ERagingBullPhase m_ePhase;
    
    UPROPERTY(BlueprintReadOnly)
    FHitBox m_HitBox;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fMaxAngularSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    FAnimContainer m_wallSplashFrontAnim;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bHasMissedTarget;
    
    SIFU_API FNetOrderStructRagingBull();
};

