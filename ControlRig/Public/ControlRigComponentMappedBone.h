#pragma once
#include "CoreMinimal.h"
#include "ControlRigComponentMappedBone.generated.h"

USTRUCT(BlueprintType)
struct FControlRigComponentMappedBone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Target;
    
    CONTROLRIG_API FControlRigComponentMappedBone();
};

