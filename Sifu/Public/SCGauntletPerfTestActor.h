#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SCGauntletPerfTestActor.generated.h"

class ASCTestingLocationsBase;

UCLASS()
class SIFU_API ASCGauntletPerfTestActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    TArray<ASCTestingLocationsBase*> m_TestingLocations;
    
public:
    ASCGauntletPerfTestActor();
};

