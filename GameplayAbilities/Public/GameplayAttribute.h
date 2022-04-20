#pragma once
#include "CoreMinimal.h"
#include "GameplayAttribute.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString AttributeName;
    
private:
    UPROPERTY(EditAnywhere)
    TFieldPath<FProperty> Attribute;
    
    UPROPERTY(VisibleAnywhere)
    UStruct* AttributeOwner;
    
public:
    FGameplayAttribute();
};

