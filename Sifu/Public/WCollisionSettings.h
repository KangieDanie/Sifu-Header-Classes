#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CollisionProfileName -FallbackName=CollisionProfileName
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCCollisionResponseBuilder -FallbackName=SCCollisionResponseBuilder
#include "WCollisionSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class SIFU_API UWCollisionSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float m_fFindMovePreventingCompsEpsilon;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_eThrowableCheckCollisionChannel;
    
    UPROPERTY(Config, EditAnywhere)
    FSCCollisionResponseBuilder m_ThrowableCheckCollisionResponseBuilder;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bForceCCDOnThrowables;
    
    UPROPERTY(Config, EditAnywhere)
    FCollisionProfileName m_WakeBreakableProximityProfile;
    
    UPROPERTY(Config, EditAnywhere)
    FCollisionProfileName m_TraversalProfileName;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_eTraversalCheckCollisionChannel;
    
    UPROPERTY(Config, EditAnywhere)
    FSCCollisionResponseBuilder m_TraversalCheckCollisionResponseBuilder;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_eEnvironmentalInteractionZoneChannel;
    
protected:
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_eTraversalCollisionChannel;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_eWallJumpChannel;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_eSpectatorCollisionChannel;
    
public:
    UWCollisionSettings();
};

