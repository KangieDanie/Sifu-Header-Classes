#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=VertexID -FallbackName=VertexID
#include "MeshElementAttributeList.h"
#include "AttributesForVertex.generated.h"

USTRUCT(BlueprintType)
struct FAttributesForVertex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVertexID VertexID;
    
    UPROPERTY(BlueprintReadWrite)
    FMeshElementAttributeList VertexAttributes;
    
    EDITABLEMESH_API FAttributesForVertex();
};

