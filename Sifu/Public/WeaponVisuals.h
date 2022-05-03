#pragma once
#include "CoreMinimal.h"
#include "WeaponVisuals.generated.h"

class UMaterialInterface;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FWeaponVisuals {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> m_SkeletalMesh;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UMaterialInterface>> m_Materials;
    
    SIFU_API FWeaponVisuals();
};

