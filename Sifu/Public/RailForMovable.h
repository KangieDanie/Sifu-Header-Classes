#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "RailForMovable.generated.h"

class UBoxComponent;
class USplineComponent;

UCLASS()
class SIFU_API ARailForMovable : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USplineComponent* m_Rail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UBoxComponent* m_EntryBox;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fSpeedThreshold;
    
public:
    ARailForMovable();
};

