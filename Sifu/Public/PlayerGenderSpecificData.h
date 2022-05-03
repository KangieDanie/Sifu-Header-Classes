#pragma once
#include "CoreMinimal.h"
#include "OutfitData.h"
#include "PlayerGenderSpecificData.generated.h"

class USkeletalMesh;
class UBaseMovementDB;
class USCCharacterPoseData;

USTRUCT(BlueprintType)
struct FPlayerGenderSpecificData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FOutfitData> m_Outfits;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<TSoftObjectPtr<USkeletalMesh>> m_Meshes;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UBaseMovementDB> m_BaseMovementDB;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<USCCharacterPoseData> m_PoseData;
    
    SIFU_API FPlayerGenderSpecificData();
};

