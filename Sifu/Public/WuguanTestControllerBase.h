#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Gauntlet -ObjectName=GauntletTestController -FallbackName=GauntletTestController
#include "WuguanTestControllerBase.generated.h"

class ASCTestingLocationsBase;

UCLASS()
class UWuguanTestControllerBase : public UGauntletTestController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<ASCTestingLocationsBase*> m_TestingLocations;
    
public:
    UWuguanTestControllerBase();
private:
    UFUNCTION()
    void StopProfiling();
    
    UFUNCTION()
    void StartProfiling();
    
    UFUNCTION()
    void OnTestLevelVisible();
    
};

