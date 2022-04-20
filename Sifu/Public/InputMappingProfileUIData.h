#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InputMappingProfileUIData.generated.h"

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class SIFU_API UInputMappingProfileUIData : public UObject {
    GENERATED_BODY()
public:
    UInputMappingProfileUIData();
};

