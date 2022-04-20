#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService -FallbackName=BTService
#include "EOrderType.h"
#include "ECameraAnimDrivenComputationMethod.h"
#include "AnimDrivenCameraOrderBTService.generated.h"

class UCameraComponentThird;
class UCameraData;

UCLASS(Abstract, Blueprintable)
class SIFU_API UAnimDrivenCameraOrderBTService : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EOrderType m_eOrderType;
    
    UPROPERTY(EditAnywhere)
    bool m_bForceAsCurrentCamera;
    
    UPROPERTY(EditAnywhere)
    bool m_bWaitForFirstFrameOrderService;
    
    UPROPERTY(EditAnywhere)
    ECameraAnimDrivenComputationMethod m_eComputationMethod;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UCameraComponentThird> m_cameraComponent;
    
public:
    UAnimDrivenCameraOrderBTService();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UCameraData* GetCameraData() const;
    
};

