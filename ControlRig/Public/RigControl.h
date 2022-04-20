#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigElement.h"
#include "ERigControlAxis.h"
#include "ERigControlType.h"
#include "RigControlValue.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigControl.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigControl : public FRigElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigControlType ControlType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DisplayName;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName ParentName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 ParentIndex;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName SpaceName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 SpaceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform OffsetTransform;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FRigControlValue InitialValue;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    FRigControlValue Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ERigControlAxis PrimaryAxis;
    
    UPROPERTY(Transient)
    bool bIsCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAnimatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLimitTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLimitRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLimitScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDrawLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigControlValue MinimumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigControlValue MaximumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGizmoEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGizmoVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName GizmoName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform GizmoTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor GizmoColor;
    
    UPROPERTY(Transient)
    TArray<int32> Dependents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsTransientControl;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UEnum* ControlEnum;
    
    FRigControl();
};

