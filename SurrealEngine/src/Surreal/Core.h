#pragma once


#ifdef SR_PLATFORM_WINDOWS
	#ifdef SR_BUILD_DLL
		#define SURREAL_API __declspec(dllexport)
	#else
		#define SURREAL_API __declspec(dllexport)
	#endif // SR_BUILD_DLL
#else
	#error Surreal Engine is supported by Windows Only
#endif // SR_PLATFORM_WINDOWS
