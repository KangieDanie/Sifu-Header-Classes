#pragma once
#include "CoreMinimal.h"
#include "RigElement.h"
#include "ERigSpaceType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigSpace.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigSpace : public FRigElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    ERigSpaceType SpaceType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName ParentName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 ParentIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform InitialTransform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FTransform LocalTransform;
    
    FRigSpace();
};

