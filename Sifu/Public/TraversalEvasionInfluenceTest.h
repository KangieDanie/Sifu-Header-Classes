#pragma once
#include "CoreMinimal.h"
#include "ETraversalEntryType.h"
#include "AIInfluenceTest.h"
#include "TraversalEvasionInfluenceTest.generated.h"

UCLASS()
class SIFU_API UTraversalEvasionInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool m_bOverrideTraversalEntryType;
    
    UPROPERTY(EditAnywhere)
    ETraversalEntryType m_eTraversalEntry;
    
public:
    UTraversalEvasionInfluenceTest();
};

