#pragma once
#include "CoreMinimal.h"
#include "AkTriangle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AkAcousticSurface.h"
#include "AkGeometryData.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FAkGeometryData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FVector> Vertices;
    
    UPROPERTY()
    TArray<FAkAcousticSurface> Surfaces;
    
    UPROPERTY()
    TArray<FAkTriangle> Triangles;
    
    UPROPERTY()
    TArray<UPhysicalMaterial*> ToOverrideAcousticTexture;
    
    UPROPERTY()
    TArray<UPhysicalMaterial*> ToOverrideOcclusion;
    
    AKAUDIO_API FAkGeometryData();
};

