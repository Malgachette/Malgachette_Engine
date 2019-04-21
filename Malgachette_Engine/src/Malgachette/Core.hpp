#pragma once

#ifdef ML_PLATFORM_WINDOWS
	#ifdef ML_BUILD_DLL
		#define MALGACHETTE_API __declspec(dllexport)
	#else
		#define MALGACHETTE_API __declspec(dllimport)
	#endif // ML_BUILD_DLL
#else
	#error Malgachette only supports Windows!
#endif // ML_PLATFORM_WINDOWS

