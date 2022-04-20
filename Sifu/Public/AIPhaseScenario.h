#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PhaseNodeHandler.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AIPhaseScenario.generated.h"

class UArchetypeAsset;

UCLASS()
class SIFU_API UAIPhaseScenario : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<UArchetypeAsset> m_rootPhase;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FPhaseNodeHandler> m_PhaseNodes;
    
    UAIPhaseScenario();
};

