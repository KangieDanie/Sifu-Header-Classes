#pragma once
#include "CoreMinimal.h"
#include "ETrumpetSkewType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "TrumpetSkewData.generated.h"

class UCurveFloat;

UCLASS()
class SIFU_API UTrumpetSkewData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fSkewZoneAngleDeg;
    
    UPROPERTY(EditAnywhere)
    float m_fSkewZoneRadius;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* m_Curve;
    
    UPROPERTY(EditAnywhere)
    ETrumpetSkewType m_eTrumpetSkewType;
    
    UTrumpetSkewData();
};

