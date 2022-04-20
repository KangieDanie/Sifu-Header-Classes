#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "EnvQueryTest_IsThrowableUsable.generated.h"

class UEnvQueryContext;

UCLASS()
class SIFU_API UEnvQueryTest_IsThrowableUsable : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEnvQueryContext> m_Target;
    
public:
    UEnvQueryTest_IsThrowableUsable();
};

