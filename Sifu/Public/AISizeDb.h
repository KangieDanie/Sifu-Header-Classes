#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AISizeDb.generated.h"

UCLASS()
class SIFU_API UAISizeDb : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector m_vScale;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> m_TargetRelativeLocation;
    
    UAISizeDb();
};

