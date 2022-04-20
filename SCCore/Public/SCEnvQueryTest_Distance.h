#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCEnvQueryTest.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EEnvTestDistance -FallbackName=EEnvTestDistance
#include "SCEnvQueryTest_Distance.generated.h"

class UEnvQueryContext;

UCLASS()
class SCCORE_API USCEnvQueryTest_Distance : public USCEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEnvTestDistance::Type> TestMode;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> m_FromContext;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> m_ToContext;
    
    USCEnvQueryTest_Distance();
};

