#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "SCVolumeClusterMaterialsPath.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCVolumeClusterMaterialsPath {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath m_RootMaterial;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath m_ChildrenMaterial;
    
    FSCVolumeClusterMaterialsPath();
};

