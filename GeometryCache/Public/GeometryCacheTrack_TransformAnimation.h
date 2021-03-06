#pragma once
#include "CoreMinimal.h"
#include "GeometryCacheMeshData.h"
#include "GeometryCacheTrack.h"
#include "GeometryCacheTrack_TransformAnimation.generated.h"

UCLASS(CollapseCategories, Deprecated, NotPlaceable)
class GEOMETRYCACHE_API UDEPRECATED_GeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack {
    GENERATED_BODY()
public:
    UDEPRECATED_GeometryCacheTrack_TransformAnimation();
    UFUNCTION()
    void SetMesh(const FGeometryCacheMeshData& NewMeshData);
    
};

