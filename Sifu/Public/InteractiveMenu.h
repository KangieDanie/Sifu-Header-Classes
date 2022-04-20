#pragma once
#include "CoreMinimal.h"
#include "EMenuEnum.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCActor -FallbackName=SCActor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "InteractiveMenu.generated.h"

class USceneComponent;
class UInteractionObjectComponent;
class AActor;
class UMenuWidget;
class AFightingPlayerController;
class ASCPlayerController;

UCLASS()
class SIFU_API AInteractiveMenu : public ASCActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMenuEnum m_eMenu;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UInteractionObjectComponent* m_InteractiveComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* m_ActorToBlendTo;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UMenuWidget* m_MenuToShow;
    
    UPROPERTY(BlueprintReadWrite, Export)
    USceneComponent* m_RootComponent;
    
public:
    AInteractiveMenu();
    UFUNCTION(BlueprintCallable)
    void BPF_OpenMenu(AFightingPlayerController* _controller, float _fBlendTime, ESlateVisibility _eMenuVisibility);
    
    UFUNCTION(BlueprintPure)
    FVector2D BPF_GetLeftStickValue(ASCPlayerController* _controller) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_CloseMenu(AFightingPlayerController* _controller, float _fBlendTime);
    
};

