#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "SCConditionnalGestureAndBlendProfile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCGestureAndBlendProfile -FallbackName=SCGestureAndBlendProfile
#include "FidgetDB.generated.h"

class AActor;

UCLASS(BlueprintType)
class SIFU_API UFidgetDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFloatRange m_fTimerRange;
    
    UPROPERTY(EditAnywhere)
    TArray<FSCConditionnalGestureAndBlendProfile> m_Anims;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCUserDefinedEnumHandler m_VariableWeightLayer;
    
    UPROPERTY(EditAnywhere)
    bool m_bAllowSyncFidgetMirrorWithQuadrant;
    
    UFidgetDB();
    UFUNCTION(BlueprintCallable)
    FSCGestureAndBlendProfile BPF_GetGestureContainer(AActor* _requester);
    
    UFUNCTION(BlueprintCallable)
    FSCConditionnalGestureAndBlendProfile BPF_GetConditionnalGestureContainer(AActor* _requester);
    
    UFUNCTION(BlueprintPure)
    float BPF_ComputeTimer() const;
    
};

