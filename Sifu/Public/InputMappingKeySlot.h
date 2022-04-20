#pragma once
#include "CoreMinimal.h"
#include "EVirtualAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputActionKeyMapping -FallbackName=InputActionKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputAxisKeyMapping -FallbackName=InputAxisKeyMapping
#include "InputMappingKeySlot.generated.h"

USTRUCT(BlueprintType)
struct FInputMappingKeySlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EVirtualAction m_eVirtualAction;
    
    UPROPERTY(EditAnywhere)
    TArray<FInputActionKeyMapping> m_Actions;
    
    UPROPERTY(EditAnywhere)
    TArray<FInputAxisKeyMapping> m_Axis;
    
public:
    SIFU_API FInputMappingKeySlot();
};

