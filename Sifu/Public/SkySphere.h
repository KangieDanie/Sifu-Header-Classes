#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SkySphere.generated.h"

class UMaterialInstance;

UCLASS()
class SIFU_API ASkySphere : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    UMaterialInstance* BaseMaterial;
    
    ASkySphere();
};

