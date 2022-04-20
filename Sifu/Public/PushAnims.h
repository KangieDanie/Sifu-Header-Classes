#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCCardinalPoints -FallbackName=ESCCardinalPoints
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "PushAnims.generated.h"

USTRUCT(BlueprintType)
struct FPushAnims {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ESCCardinalPoints, FAnimContainer> m_GrabberAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ESCCardinalPoints, FAnimContainer> m_GrabbedAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bSouthMirrorPositiveAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bNorthMirrorPositiveAngle;
    
    SIFU_API FPushAnims();
};

