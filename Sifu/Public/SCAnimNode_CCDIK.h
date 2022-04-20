#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=AnimNode_CCDIK -FallbackName=AnimNode_CCDIK
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SCAnimNode_CCDIK.generated.h"

class UMirrorAnimDB;

USTRUCT(BlueprintType)
struct SIFU_API FSCAnimNode_CCDIK : public FAnimNode_CCDIK {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName mSaveBone;
    
    UPROPERTY(EditAnywhere)
    FVector mvEffectorComponentSpaceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool mbMirror;
    
    UPROPERTY(Transient)
    UMirrorAnimDB* mMirrorAnimDB;
    
    FSCAnimNode_CCDIK();
};

