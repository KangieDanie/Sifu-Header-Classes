#pragma once
#include "CoreMinimal.h"
#include "BoneIK.h"
#include "SocketIK.generated.h"

USTRUCT(BlueprintType)
struct FSocketIK : public FBoneIK {
    GENERATED_BODY()
public:
    SIFU_API FSocketIK();
};

