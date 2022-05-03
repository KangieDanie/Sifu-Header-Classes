#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ECheckBoxState -FallbackName=ECheckBoxState
#include "PropertyBinding.h"
#include "CheckedStateBinding.generated.h"

UCLASS()
class UMG_API UCheckedStateBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UCheckedStateBinding();
    UFUNCTION()
    ECheckBoxState GetValue() const;
    
};

