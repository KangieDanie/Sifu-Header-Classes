#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "TraversalAxisConstraint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESimpleAxis -FallbackName=ESimpleAxis
#include "ESimpleAxisSide.h"
#include "TraversalComponentMargin.h"
#include "ETraversalEntryType.h"
#include "TraversalComponent.generated.h"

class UTraversalComponent;
class UNavArea;
class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UTraversalComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTraversalUsageDelegate, UTraversalComponent*, _traversalComponent);
    DECLARE_DYNAMIC_DELEGATE_RetVal(FVector, FTraversalPointDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FTraversalUsageDelegate m_OnStartBeingUsed;
    
    UPROPERTY(BlueprintAssignable)
    FTraversalUsageDelegate m_OnStopBeingUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTraversalPointDelegate OnGetCinematicEndPoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bTraversalActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bOverrideTraversalEntryAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fTraversalEntryAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bOverrideTraversalExitAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fTraversalExitAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTraversalAxisConstraint> m_traversalAxisConstraint;
    
    UPROPERTY()
    ESimpleAxis m_eForbiddenAxis;
    
    UPROPERTY()
    ESimpleAxisSide m_eAuthorizedAxisSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseEntryMaxDistFromTraversalCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fEntryMaxDistFromTraversalCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTraversalComponentMargin m_EntryMargin_X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTraversalComponentMargin m_EntryMargin_Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fLengthBetweenTwoNavLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_AllowedEntryTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIsLethal;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> m_cinematicNavAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseMeshAsTraversalCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bUseRushInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bForceUseAnimDrivenCamera;
    
    UPROPERTY(EditAnywhere)
    bool m_bCustomNavLinkCooldownDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fNavLinkCooldownDuration;
    
private:
    UPROPERTY(VisibleAnywhere)
    TArray<TSoftObjectPtr<AActor>> m_ActorsWithReferencedInNavLinkComponent;
    
public:
    UTraversalComponent();
    UFUNCTION()
    void ComputeTraversalAIInfo();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetTraversalActive(bool _bActive, bool _bForce);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsTraversalActive() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsEntryTypeAllowed(ETraversalEntryType _eEntryType) const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsAnimDrivenCameraForced() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_StartBeingUsed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_EndBeingUsed();
    
};

