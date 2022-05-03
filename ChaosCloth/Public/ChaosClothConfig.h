#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EClothMassMode -FallbackName=EClothMassMode
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeCommon -ObjectName=ClothConfigCommon -FallbackName=ClothConfigCommon
#include "EChaosClothTetherMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ChaosClothConfig.generated.h"

UCLASS()
class CHAOSCLOTH_API UChaosClothConfig : public UClothConfigCommon {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EClothMassMode MassMode;
    
    UPROPERTY(EditAnywhere)
    float UniformMass;
    
    UPROPERTY(EditAnywhere)
    float TotalMass;
    
    UPROPERTY(EditAnywhere)
    float Density;
    
    UPROPERTY()
    float MinPerParticleMass;
    
    UPROPERTY(EditAnywhere)
    float EdgeStiffness;
    
    UPROPERTY(EditAnywhere)
    float BendingStiffness;
    
    UPROPERTY(EditAnywhere)
    bool bUseBendingElements;
    
    UPROPERTY(EditAnywhere)
    float AreaStiffness;
    
    UPROPERTY()
    float VolumeStiffness;
    
    UPROPERTY(EditAnywhere)
    float StrainLimitingStiffness;
    
    UPROPERTY(EditAnywhere)
    float LimitScale;
    
    UPROPERTY(EditAnywhere)
    EChaosClothTetherMode TetherMode;
    
    UPROPERTY()
    bool bUseGeodesicDistance;
    
    UPROPERTY()
    float ShapeTargetStiffness;
    
    UPROPERTY(EditAnywhere)
    float CollisionThickness;
    
    UPROPERTY(EditAnywhere)
    float FrictionCoefficient;
    
    UPROPERTY(EditAnywhere)
    bool bUseSelfCollisions;
    
    UPROPERTY(EditAnywhere)
    float SelfCollisionThickness;
    
    UPROPERTY(EditAnywhere)
    bool bUseLegacyBackstop;
    
    UPROPERTY(EditAnywhere)
    float DampingCoefficient;
    
    UPROPERTY(EditAnywhere)
    bool bUsePointBasedWindModel;
    
    UPROPERTY(EditAnywhere)
    float DragCoefficient;
    
    UPROPERTY(EditAnywhere)
    float LiftCoefficient;
    
    UPROPERTY(EditAnywhere)
    bool bUseGravityOverride;
    
    UPROPERTY(EditAnywhere)
    float GravityScale;
    
    UPROPERTY(EditAnywhere)
    FVector Gravity;
    
    UPROPERTY(EditAnywhere)
    float AnimDriveSpringStiffness;
    
    UPROPERTY(EditAnywhere)
    FVector LinearVelocityScale;
    
    UPROPERTY(EditAnywhere)
    float AngularVelocityScale;
    
    UPROPERTY()
    bool bUseTetrahedralConstraints;
    
    UPROPERTY()
    bool bUseThinShellVolumeConstraints;
    
    UPROPERTY()
    bool bUseContinuousCollisionDetection;
    
    UChaosClothConfig();
};

