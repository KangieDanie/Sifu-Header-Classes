#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "AttributeMetaData.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FAttributeMetaData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BaseValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxValue;
    
    UPROPERTY()
    FString DerivedAttributeInfo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCanStack;
    
    FAttributeMetaData();
};

