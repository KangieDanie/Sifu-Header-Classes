#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ArchetypeSituationDescription.h"
#include "ArchetypeSituationDB.generated.h"

UCLASS()
class SIFU_API UArchetypeSituationDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FArchetypeSituationDescription> m_ArchetypesInSituation;
    
    UArchetypeSituationDB();
};

