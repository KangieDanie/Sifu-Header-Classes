#pragma once
#include "CoreMinimal.h"
#include "RigElement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ERigBoneType.h"
#include "RigBone.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigBone : public FRigElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName ParentName;
    
    UPROPERTY(Transient)
    int32 ParentIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform InitialTransform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FTransform GlobalTransform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FTransform LocalTransform;
    
    UPROPERTY(Transient)
    TArray<int32> Dependents;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    ERigBoneType Type;
    
    FRigBone();
};

