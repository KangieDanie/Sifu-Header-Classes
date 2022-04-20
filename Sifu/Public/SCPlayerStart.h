#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EPlayerScreenSide.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerStart -FallbackName=PlayerStart
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDelegate -FallbackName=SCDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SCPlayerStart.generated.h"

class USceneComponent;
class UMatineeCameraShake;
class ULevelSequence;

UCLASS()
class SIFU_API ASCPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnGotoGameplaySequenceStarted;
    
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnGotoGameplaySequenceFinished;
    
protected:
    UPROPERTY(VisibleAnywhere)
    TArray<FName> m_levelsNameToLoad;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* m_AnchorSceneComponent;
    
    UPROPERTY(EditAnywhere)
    bool m_bKeepBackGroundDuringStartupMenu;
    
    UPROPERTY(VisibleAnywhere)
    FVector m_vCameraForwardAtIntroEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_PlayerStartGameplayTag;
    
private:
    UPROPERTY(EditAnywhere)
    bool m_bForFirstSpawn;
    
    UPROPERTY(EditAnywhere)
    EPlayerScreenSide m_ePlayerScreenSide;
    
    UPROPERTY(EditAnywhere)
    ULevelSequence* m_IdleStartupSequence;
    
    UPROPERTY(EditAnywhere)
    ULevelSequence* m_StartupSequence;
    
    UPROPERTY(EditAnywhere)
    float m_fCameraBlendDurationBetweenLoopAndGoto;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UMatineeCameraShake> m_CameraShakeClass;
    
public:
    ASCPlayerStart();
    UFUNCTION(BlueprintPure)
    bool BPF_WantKeepBackgroundDuringStartupMenu() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_PrepareSequence(int32 _sequenceID);
    
};

