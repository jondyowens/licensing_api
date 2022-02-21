// licensing_api.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "licensing_api.h"
#include <Windows.h>
#include <stdio.h>
// TODO: This is an example of a library function
void generate_hardware_hash()
{
    HW_PROFILE_INFO hwProfileInfo;
    
    if (GetCurrentHwProfile(&hwProfileInfo) != NULL)
    {
        printf("Hardware GUIID: %ls\n", hwProfileInfo.szHwProfileGuid);
        printf("Hardware Profile: %ls\n", hwProfileInfo.szHwProfileName);
    }

    getchar();
}
