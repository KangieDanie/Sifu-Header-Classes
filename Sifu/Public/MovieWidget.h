#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "MovieWidget.generated.h"

class UMediaTexture;
class UImage;
class UMediaPlayer;

UCLASS(EditInlineNew)
class SIFU_API UMovieWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndReached);
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UMediaTexture* m_MediaTexture;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UImage* m_WidgetTorender;
    
    UPROPERTY(BlueprintAssignable)
    FOnEndReached OnEndReached;
    
private:
    UPROPERTY(Transient)
    UMediaPlayer* m_MediaPlayer;
    
public:
    UMovieWidget();
private:
    UFUNCTION()
    void MediaOpenedCallback(const FString& _url);
    
    UFUNCTION()
    void MediaEndCallback();
    
public:
    UFUNCTION(BlueprintCallable)
    bool BPF_OpenMovie(const FString& _url, bool _bLooping);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CloseMovie();
    
};

