#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SpawningVolume.generated.h"

class UShapeComponent;

UCLASS()
class SIFU_API ASpawningVolume : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UShapeComponent* m_ShapeComponent;
    
    UPROPERTY(EditAnywhere)
    bool m_bAllowSpawnIfCharacterOverlaps;
    
    UPROPERTY(EditAnywhere)
    bool m_bSpawnIfNothingUnder;
    
    UPROPERTY(EditAnywhere)
    float m_fSecurityMargin;
    
public:
    ASpawningVolume();
};

