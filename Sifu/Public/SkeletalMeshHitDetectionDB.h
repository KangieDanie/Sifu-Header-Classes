#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceContainerInterface -FallbackName=BoneReferenceContainerInterface
#include "BaseHitDetectionDB.h"
#include "BoneHitDBInfo.h"
#include "SkeletalMeshHitDetectionDB.generated.h"

UCLASS()
class SIFU_API USkeletalMeshHitDetectionDB : public UBaseHitDetectionDB, public IBoneReferenceContainerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FBoneHitDBInfo> m_bonesToWatch;
    
public:
    USkeletalMeshHitDetectionDB();
    
    // Fix for true pure virtual functions not being implemented
};

