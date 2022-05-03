#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ESCTestDistance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "EnvQueryTest_DistanceFromBounding.generated.h"

class UEnvQueryContext;

UCLASS()
class UEnvQueryTest_DistanceFromBounding : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ESCTestDistance TestMode;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> DistanceTo;
    
    UEnvQueryTest_DistanceFromBounding();
};

