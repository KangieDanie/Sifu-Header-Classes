#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "StartUpComboDB.generated.h"

UCLASS()
class SIFU_API UStartUpComboDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_ComboSlotNames;
    
    UStartUpComboDB();
};

