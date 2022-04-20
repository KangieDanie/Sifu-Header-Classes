#pragma once
#include "CoreMinimal.h"
#include "RigElement.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 Index;
    
    FRigElement();
};

