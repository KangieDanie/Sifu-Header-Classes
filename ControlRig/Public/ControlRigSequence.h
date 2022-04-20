#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=LevelSequence -FallbackName=LevelSequence
#include "ControlRigSequence.generated.h"

class UAnimSequence;
class USkeletalMesh;

UCLASS()
class CONTROLRIG_API UControlRigSequence : public ULevelSequence {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable)
    TSoftObjectPtr<UAnimSequence> LastExportedToAnimationSequence;
    
    UPROPERTY(AssetRegistrySearchable)
    TSoftObjectPtr<USkeletalMesh> LastExportedUsingSkeletalMesh;
    
    UPROPERTY(AssetRegistrySearchable)
    float LastExportedFrameRate;
    
    UControlRigSequence();
};

