// licensing_api.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "licensing_api.h"
#include <stdio.h>
#include <curl/curl.h>
// TODO: This is an example of a library function
const WCHAR* generate_hardware_hash()
{
    HW_PROFILE_INFO hwProfileInfo;
    
    if (GetCurrentHwProfile(&hwProfileInfo) != NULL)
    {
        return hwProfileInfo.szHwProfileGuid;
    }
}

const char* checkout_key(const WCHAR* hash)
{
    CURL *curl = curl_easy_init();
    curl_easy_setopt(curl, CURLOPT_URL, "localhost:8080/checkout");
    curl_easy_perform(curl);
    return "checkout_key called successfully";
}
