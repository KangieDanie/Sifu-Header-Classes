#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaAssets -ObjectName=BaseMediaSource -FallbackName=BaseMediaSource
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
#include "ImgMediaSource.generated.h"

UCLASS(EditInlineNew)
class IMGMEDIA_API UImgMediaSource : public UBaseMediaSource {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FFrameRate FrameRateOverride;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FString ProxyOverride;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDirectoryPath SequencePath;
    
public:
    UImgMediaSource();
    UFUNCTION(BlueprintCallable)
    void SetSequencePath(const FString& Path);
    
    UFUNCTION(BlueprintPure)
    FString GetSequencePath() const;
    
    UFUNCTION(BlueprintPure)
    void GetProxies(TArray<FString>& OutProxies) const;
    
};

