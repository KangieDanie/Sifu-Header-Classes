#pragma once
#include "CoreMinimal.h"
#include "DynamicMaterialsPerType.generated.h"

class UMaterialInstance;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FDynamicMaterialsPerType {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<UMaterialInstanceDynamic*> m_DynamicMaterials;
    
    UPROPERTY(Transient)
    TArray<UMaterialInstance*> m_RefMaterials;
    
    SIFU_API FDynamicMaterialsPerType();
};

