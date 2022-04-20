#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "EnvQueryTest_CanNavigateAroundBox.generated.h"

UCLASS()
class SIFU_API UEnvQueryTest_CanNavigateAroundBox : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_iTestsPerBoxSide;
    
    UEnvQueryTest_CanNavigateAroundBox();
};

