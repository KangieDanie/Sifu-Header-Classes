#pragma once
#include "CoreMinimal.h"
#include "ERigElementType.h"
#include "RigElementKey.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigElementKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigElementType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    FRigElementKey();
};

