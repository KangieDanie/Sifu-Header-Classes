#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "LandscapeHeightfieldCollisionComponent.h"
#include "LandscapeMeshCollisionComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid MeshGuid;
    
    ULandscapeMeshCollisionComponent();
};
