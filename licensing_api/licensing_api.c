// licensing_api.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "licensing_api.h"
#include <stdio.h>
// TODO: This is an example of a library function
const WCHAR* generate_hardware_hash()
{
    HW_PROFILE_INFO hwProfileInfo;
    
    if (GetCurrentHwProfile(&hwProfileInfo) != NULL)
    {
        return hwProfileInfo.szHwProfileGuid;
    }
}
