#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PhaseNodeHandler.h"
#include "AIPhaseScenario.generated.h"

class UArchetypeAsset;

UCLASS(BlueprintType)
class SIFU_API UAIPhaseScenario : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<UArchetypeAsset> m_rootPhase;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FPhaseNodeHandler> m_PhaseNodes;
    
    UAIPhaseScenario();
    UFUNCTION(BlueprintPure)
    FName BPF_GetPhaseNameFromIndex(int32 _iPhaseIndex) const;
    
};

