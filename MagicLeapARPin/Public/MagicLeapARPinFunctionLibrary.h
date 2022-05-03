#pragma once
#include "CoreMinimal.h"
#include "MagicLeapContentBindingFoundDelegateDelegate.h"
#include "EMagicLeapPassableWorldError.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MagicLeapARPinUpdatedDelegateDelegate.h"
#include "MagicLeapARPinQuery.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MagicLeapARPinState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "MagicLeapARPinFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class MAGICLEAPARPIN_API UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMagicLeapARPinFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void UnBindToOnMagicLeapContentBindingFoundDelegate(const FMagicLeapContentBindingFoundDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void UnBindToOnMagicLeapARPinUpdatedDelegate(const FMagicLeapARPinUpdatedDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapPassableWorldError SetGlobalQueryFilter(const FMagicLeapARPinQuery& InGlobalFilter);
    
    UFUNCTION(BlueprintCallable)
    static void SetContentBindingSaveGameUserIndex(int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapPassableWorldError QueryARPins(const FMagicLeapARPinQuery& Query, TArray<FGuid>& Pins);
    
    UFUNCTION(BlueprintPure)
    static bool ParseStringToARPinId(const FString& PinIdString, FGuid& ARPinId);
    
    UFUNCTION(BlueprintPure)
    static bool IsTrackerValid();
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapPassableWorldError GetNumAvailableARPins(int32& Count);
    
    UFUNCTION(BlueprintPure)
    static EMagicLeapPassableWorldError GetGlobalQueryFilter(FMagicLeapARPinQuery& CurrentGlobalFilter);
    
    UFUNCTION(BlueprintPure)
    static int32 GetContentBindingSaveGameUserIndex();
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapPassableWorldError GetClosestARPin(const FVector& SearchPoint, FGuid& PinId);
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapPassableWorldError GetAvailableARPins(int32 NumRequested, TArray<FGuid>& Pins);
    
    UFUNCTION(BlueprintPure)
    static FString GetARPinStateToString(const FMagicLeapARPinState& State);
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapPassableWorldError GetARPinState(const FGuid& PinId, FMagicLeapARPinState& State);
    
    UFUNCTION(BlueprintCallable)
    static bool GetARPinPositionAndOrientation_TrackingSpace(const FGuid& PinId, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment);
    
    UFUNCTION(BlueprintCallable)
    static bool GetARPinPositionAndOrientation(const FGuid& PinId, FVector& Position, FRotator& Orientation, bool& PinFoundInEnvironment);
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapPassableWorldError DestroyTracker();
    
    UFUNCTION(BlueprintCallable)
    static EMagicLeapPassableWorldError CreateTracker();
    
    UFUNCTION(BlueprintCallable)
    static void BindToOnMagicLeapContentBindingFoundDelegate(const FMagicLeapContentBindingFoundDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void BindToOnMagicLeapARPinUpdatedDelegate(const FMagicLeapARPinUpdatedDelegate& Delegate);
    
    UFUNCTION(BlueprintPure)
    static FString ARPinIdToString(const FGuid& ARPinId);
    
};

