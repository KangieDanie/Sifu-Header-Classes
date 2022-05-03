#pragma once
#include "CoreMinimal.h"
#include "VariantDependency.generated.h"

class UVariant;
class UVariantSet;

USTRUCT(BlueprintType)
struct VARIANTMANAGERCONTENT_API FVariantDependency {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UVariantSet> VariantSet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UVariant> Variant;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnabled;
    
    FVariantDependency();
};

