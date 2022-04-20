#pragma once
#include "CoreMinimal.h"
#include "ELinkWithExternalBehavior.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavLinkCustomComponent -FallbackName=NavLinkCustomComponent
#include "TraversalInfo.h"
#include "TraversalNavLinkCustomComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UTraversalNavLinkCustomComponent : public UNavLinkCustomComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    FTraversalInfo m_TraversalInfo;
    
    UPROPERTY(VisibleAnywhere)
    uint8 m_uiCurrentTraversalVersion;
    
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<AActor> m_ExternalLinkedTraversalActor;
    
    UPROPERTY(VisibleAnywhere)
    ELinkWithExternalBehavior m_eExternalLinkBehavior;
    
public:
    UTraversalNavLinkCustomComponent();
};

