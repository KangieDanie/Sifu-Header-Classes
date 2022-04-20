#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCVolume -FallbackName=SCVolume
#include "EAlertLevel.h"
#include "AISanctuaryVolume.generated.h"

class UAISanctuaryComponent;

UCLASS()
class SIFU_API AAISanctuaryVolume : public ASCVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAISanctuaryComponent* m_SanctuaryComponent;
    
    AAISanctuaryVolume();
private:
    UFUNCTION()
    void OnSanctuaryAssignmentUpdated();
    
    UFUNCTION()
    void OnAlertLevelChanged(EAlertLevel _eNewLevel);
    
};

