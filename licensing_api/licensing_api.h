#pragma once
#include <Windows.h>

#ifdef licensing_api_exports
#define licensing_api __declspec(dllexport)
#else
#define licensing_api __declspec(dllimport)
#endif

licensing_api const WCHAR* generate_hardware_hash();