#pragma once
#include "CoreMinimal.h"
#include "ListView.h"
#include "OnGetItemChildrenDynamicDelegate.h"
#include "OnItemExpansionChangedDynamicDelegate.h"
#include "TreeView.generated.h"

class UObject;

UCLASS()
class UMG_API UTreeView : public UListView {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FOnGetItemChildrenDynamic BP_OnGetItemChildren;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemExpansionChangedDynamic BP_OnItemExpansionChanged;
    
public:
    UTreeView();
    UFUNCTION(BlueprintCallable)
    void SetItemExpansion(UObject* Item, bool bExpandItem);
    
    UFUNCTION(BlueprintCallable)
    void ExpandAll();
    
    UFUNCTION(BlueprintCallable)
    void CollapseAll();
    
};

