#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCSaveObjectPlayerProfile -FallbackName=SCSaveObjectPlayerProfile
#include "ProfileData.h"
#include "WGSaveObjectPlayerProfile.generated.h"

UCLASS()
class SIFU_API UWGSaveObjectPlayerProfile : public USCSaveObjectPlayerProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FProfileData m_WGProfileData;
    
    UWGSaveObjectPlayerProfile();
};

