#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeCommon -ObjectName=ClothSharedConfigCommon -FallbackName=ClothSharedConfigCommon
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ChaosClothSharedSimConfig.generated.h"

UCLASS()
class CHAOSCLOTH_API UChaosClothSharedSimConfig : public UClothSharedConfigCommon {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 IterationCount;
    
    UPROPERTY(EditAnywhere)
    int32 SubdivisionCount;
    
    UPROPERTY()
    float SelfCollisionThickness;
    
    UPROPERTY()
    float CollisionThickness;
    
    UPROPERTY()
    bool bUseDampingOverride;
    
    UPROPERTY()
    float Damping;
    
    UPROPERTY()
    bool bUseGravityOverride;
    
    UPROPERTY()
    float GravityScale;
    
    UPROPERTY()
    FVector Gravity;
    
    UPROPERTY()
    bool bUseLocalSpaceSimulation;
    
    UPROPERTY()
    bool bUseXPBDConstraints;
    
    UChaosClothSharedSimConfig();
};

