#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ComboManager.generated.h"

class UCombo;

UCLASS()
class SIFU_API UComboManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FComboEndedDelegate m_OnEnded;
    
private:
    UPROPERTY(EditAnywhere)
    UCombo* m_Combo;
    
public:
    UComboManager();
};

