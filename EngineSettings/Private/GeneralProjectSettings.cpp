#include "GeneralProjectSettings.h"

UGeneralProjectSettings::UGeneralProjectSettings() {
    this->CompanyName = TEXT("SloClap");
    this->CopyrightNotice = TEXT("Copyright xxxx SloClap, Inc. All Rights Reserved.");
    this->ProjectName = TEXT("Sifu");
    this->ProjectVersion = TEXT("0.1");
    this->ProjectDisplayedTitle = FText::FromString(TEXT("Sifu"));
    this->bShouldWindowPreserveAspectRatio = true;
    this->bUseBorderlessWindow = false;
    this->bStartInVR = false;
    this->bAllowWindowResize = true;
    this->bAllowClose = true;
    this->bAllowMaximize = true;
    this->bAllowMinimize = true;
}

