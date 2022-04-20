#pragma once
#include "CoreMinimal.h"
#include "AnimNode_PoseSnapshot.h"
#include "AnimNode_CopyPoseFromMesh.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_CopyPoseFromMesh : public FAnimNode_PoseSnapshot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseAttachedParent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bCopyCurves: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCopyCustomAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bUseMeshPose: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RootBoneToCopy;
    
    FAnimNode_CopyPoseFromMesh();
};

