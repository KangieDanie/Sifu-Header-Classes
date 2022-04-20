#pragma once
#include "CoreMinimal.h"
#include "PlayerGenderSpecificData.generated.h"

class USCCharacterPoseData;
class USkeletalMesh;
class UBaseMovementDB;

USTRUCT(BlueprintType)
struct FPlayerGenderSpecificData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> m_Mesh;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UBaseMovementDB> m_BaseMovementDB;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<USCCharacterPoseData> m_PoseData;
    
    SIFU_API FPlayerGenderSpecificData();
};

