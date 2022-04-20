#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "MirrorAnimStruct.h"
#include "MirrorAnimDB.generated.h"

class USkeleton;

UCLASS(BlueprintType)
class SCCORE_API UMirrorAnimDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FMirrorAnimStruct> m_MirrorAnimStruct;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, FMirrorAnimStruct> m_MirrorAnimStructMap;
    
    UPROPERTY(EditDefaultsOnly)
    USkeleton* m_UberSkeleton;
    
    UMirrorAnimDB();
    UFUNCTION(BlueprintCallable)
    FName BPF_GetTwinsBoneName(const FName& _boneName);
    
};

