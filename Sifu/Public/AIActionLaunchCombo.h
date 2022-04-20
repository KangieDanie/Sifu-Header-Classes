#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCAiAction -FallbackName=SCAiAction
#include "AIComboLaunchParameters.h"
#include "AIActionLaunchCombo.generated.h"

UCLASS()
class SIFU_API UAIActionLaunchCombo : public USCAiAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAIComboLaunchParameters m_Parameters;
    
    UAIActionLaunchCombo();
};

